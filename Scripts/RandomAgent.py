import socket
import tensorforce
import gym

HOST = '127.0.0.1'
PORT = 1488
FORMAT = 'utf-8'

print("Waiting for connection")

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    conn, addr = s.accept()
    print('Connected by', addr)
    while True:
        data_string = conn.recv().decode(FORMAT)
        if not data_string:
            break
        print(data_string)
        # conn.sendall(data_string.encode(FORMAT))

print("Connection closed")
