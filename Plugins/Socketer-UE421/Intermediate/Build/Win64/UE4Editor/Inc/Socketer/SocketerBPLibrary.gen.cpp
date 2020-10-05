// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Socketer/Public/SocketerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketerBPLibrary() {}
// Cross Module References
	SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister();
	SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Socketer();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection();
	SOCKETER_API UClass* Z_Construct_UClass_USocket_NoRegister();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage();
// End Cross Module References
	void USocketerBPLibrary::StaticRegisterNativesUSocketerBPLibrary()
	{
		UClass* Class = USocketerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &USocketerBPLibrary::execCloseConnection },
			{ "Connect", &USocketerBPLibrary::execConnect },
			{ "GetMessage", &USocketerBPLibrary::execGetMessage },
			{ "GetMessageFixedSize", &USocketerBPLibrary::execGetMessageFixedSize },
			{ "HasPendingData", &USocketerBPLibrary::execHasPendingData },
			{ "SendMessage", &USocketerBPLibrary::execSendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics
	{
		struct SocketerBPLibrary_eventCloseConnection_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventCloseConnection_Parms), &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventCloseConnection_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Close connection to TCP server" },
		{ "Keywords", "Socketer disconnect close tcpclose tcp tcpdisconnect socketerdisconnect" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Closes a TCP connection\n*\n* @Param Connection The TCP connection to close\n*\n* @return True if the socket was successfully closed, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "CloseConnection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SocketerBPLibrary_eventCloseConnection_Parms), Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics
	{
		struct SocketerBPLibrary_eventConnect_Parms
		{
			FString IP;
			int32 port;
			bool success;
			USocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventConnect_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventConnect_Parms), &Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_port = { UE4CodeGen_Private::EPropertyClass::Int, "port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_IP = { UE4CodeGen_Private::EPropertyClass::Str, "IP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Connect to a TCP server" },
		{ "Keywords", "Socketer connect tcp tcpconnect socketerconnect" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Connect to a TCP server.\n*\n* @param IP IP Address of the server you'd like to connect to. THIS MUST NOT BE A HOSTNAME!\n* @param port The port your server applicatoin is listening on.\n*\n* @param success True if a connection was correctly established, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "Connect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SocketerBPLibrary_eventConnect_Parms), Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics
	{
		struct SocketerBPLibrary_eventGetMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventGetMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventGetMessage_Parms), &Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Get buffer (converted to FString) from server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Receive a string from a TCP connection. WARNING: Game could hang till timeout if no data is available, please check using HasPendingData first.\n*\n* @Param Connection TCP socket connection to receive the message from.\n*\n* @Param Message The received message\n* @return True if a message was successfully received, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "GetMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SocketerBPLibrary_eventGetMessage_Parms), Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics
	{
		struct SocketerBPLibrary_eventGetMessageFixedSize_Parms
		{
			USocket* Connection;
			int32 Size;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventGetMessageFixedSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventGetMessageFixedSize_Parms), &Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessageFixedSize_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessageFixedSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessageFixedSize_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Get string of fixed size from server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend fixed size" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Receive a string from a TCP connection. WARNING: Game could hang till timeout if no data is available, please check using HasPendingData first.\n*\n* @Param Connection TCP socket connection to receive the message from.\n* @Param Size Size of string to recieve\n*\n* @Param Message The received message\n* @return True if a message was successfully received, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "GetMessageFixedSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SocketerBPLibrary_eventGetMessageFixedSize_Parms), Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics
	{
		struct SocketerBPLibrary_eventHasPendingData_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventHasPendingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventHasPendingData_Parms), &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventHasPendingData_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "HasPendingData" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Checks if a TCP connection has any pending data.\n*\n* @Param Connection TCP socket connection to check.\n*\n* @Param Message The received message\n* @return True if a message was successfully received, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "HasPendingData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(SocketerBPLibrary_eventHasPendingData_Parms), Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics
	{
		struct SocketerBPLibrary_eventSendMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocketerBPLibrary_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventSendMessage_Parms), &Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "DisplayName", "Send message to the server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Send a string over a TCP connection.\n*\n* @Param Connection TCP socket connection to send the message over.\n* @Param Message The string to send to the server.\n*\n* @return True if a message was successfully sent, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "SendMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SocketerBPLibrary_eventSendMessage_Parms), Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister()
	{
		return USocketerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USocketerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Socketer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection, "CloseConnection" }, // 3992273480
		{ &Z_Construct_UFunction_USocketerBPLibrary_Connect, "Connect" }, // 2532275438
		{ &Z_Construct_UFunction_USocketerBPLibrary_GetMessage, "GetMessage" }, // 2006649372
		{ &Z_Construct_UFunction_USocketerBPLibrary_GetMessageFixedSize, "GetMessageFixedSize" }, // 756218043
		{ &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData, "HasPendingData" }, // 13925411
		{ &Z_Construct_UFunction_USocketerBPLibrary_SendMessage, "SendMessage" }, // 4246027366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SocketerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* TCP FSocket wrapper library for Unreal Engine 4.\n*\n* NOTE: This is a near 1-on-1wrapper, so use it with caution.\n* You are fully responsible for closing sockets, and ensuring\n* that there is data to be read. Not doing so, can result in\n* undefined and unwanted behavior." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketerBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocketerBPLibrary_Statics::ClassParams = {
		&USocketerBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocketerBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocketerBPLibrary, 2800522978);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocketerBPLibrary(Z_Construct_UClass_USocketerBPLibrary, &USocketerBPLibrary::StaticClass, TEXT("/Script/Socketer"), TEXT("USocketerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
