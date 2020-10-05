import socket

def Header(arg):
    if type(arg) == int:
        return 'II'
    elif type(arg) == float:
        return 'FF'
    else:
        return 'SS'


kHeaderLengthSize = 10

def SerializeLength(arg):
    length = len(str(arg))
    return ' ' * (kHeaderLengthSize - len(str(length))) + str(length)

# def Serialize(arg):
#     return Header(arg) + SerializeLength(arg) + st(arg)


# def DecerializeType(s, typ):
#     return typ(s[kHeaderLengthSize:])

# def Deserialize(arg):
#     total_len = arg[: kHeaderLengthSize]
#     typ = arg[kHeaderLengthSize : kHeaderLengthSize + 2]
#     body = arg[kHeaderLengthSize + 2:]
#     if typ == 'II':
#         return DeserializeType(body, int)
#     elif typ == 'FF':
#         return DeserializeType(body, float)

def SerializeBody(arg):
    return SerializeLength(str(arg)) + str(arg)


def SerializeInt(arg):
    message_body = 'II' + SerializeBody(arg)
    return SerializeLength(message_body) + message_body


FORMAT = 'utf-8'

def DeserializeLength(conn):
    return int(conn.recv(kHeaderLengthSize).decode(FORMAT).strip())


def DeserializeBody(conn, f):
    # print('Decerializing body')
    message_size = DeserializeLength(conn)
    # print('m_size:', message_size)
    body = conn.recv(message_size).decode(FORMAT)
    # print('body:', body)
    return f(body)


def DeserializeArray(conn, f):
    # print('Decerializing array')
    arr_len = DeserializeLength(conn)
    arr = []
    for _ in range(arr_len):
        arr.append(DeserializeBody(conn, f))
    # print('ok')
    return arr


def DeserializeMessage(conn):
    ml = conn.recv(kHeaderLengthSize).decode(FORMAT)
    # print(f'message len: {ml} ', end='')
    t = conn.recv(2).decode(FORMAT)
    # print(f'format {t} ')
    if t == 'II':
        return DeserializeBody(conn, int)
    elif t == 'FF':
        return DeserializeBody(conn, float)
    elif t == 'AI':
        return DeserializeArray(conn, int)
    elif t == 'AF':
        return DeserializeArray(conn, float)