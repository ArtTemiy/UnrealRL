// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once
#include <string>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Serializer.generated.h"


UCLASS()
class PONG_API ASerializer : public AActor
{
	GENERATED_BODY()

private:
	const static int kHeaderLengthSize = 10;
	
public:	
	// Sets default values for this actor's properties
	ASerializer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Serializer")
	void TestFunction() {
	}
	/*
	UFUNCTION(BlueprintCallable, Category = "Serializer")
		static FString SerializeInt(int arg) {
		auto arg_string = std::to_string(arg);
		auto arg_string_len = arg_string.size();
		std::string message = ("I" + std::string(10 - std::to_string(arg_string_len).size(), '0') + std::to_string(arg_string_len) + arg_string);

		return FString(message.c_str());
	}

	UFUNCTION(BlueprintCallable, Category = "Serializer")
		static FString SerializeFloat(float arg) {
		auto arg_string = std::to_string(arg);
		auto arg_string_len = arg_string.size();
		std::string message = "F" + std::string(10 - std::to_string(arg_string_len).size(), '0') + std::to_string(arg_string_len) + arg_string;

		return FString(message.c_str());
	}

	UFUNCTION(BlueprintCallable, Category = "Serializer")
		static FString SerializeIntArray(TArray<int> arg) {
		std::string message = "AI";
		auto len_string = std::to_string(arg.Num());
		message += std::string(10 - len_string.size(), '0') + len_string;
		FString fmessage(message.c_str());

		for (auto& x : arg) {
			fmessage += SerializeInt(x);
		}

		return fmessage;
	}

	UFUNCTION(BlueprintCallable, Category = "Serializer")
		static FString SerializeFloatArray(TArray<float> arg) {
		std::string message = "AF";
		auto len_string = std::to_string(arg.Num());
		message += std::string(10 - len_string.size(), '0') + len_string;
		FString fmessage(message.c_str());

		for (auto& x : arg) {
			fmessage += SerializeFloat(x);
		}

		return fmessage;
	}
	*/

	static std::string SerializeLength(int i) {
		return std::string(kHeaderLengthSize - std::to_string(i).size(), ' ') + std::to_string(i);
	}

	template<typename T>
	static std::string SerializeBody(T arg) {
		auto arg_string = std::to_string(arg);
		return SerializeLength(arg_string.size()) + arg_string;
	}

	template<typename T>
	static std::string SerializeBody(TArray<T> arg) {
		std::string message = "";

		message += SerializeLength(arg.Num());
		for (auto& x : arg) {
			message += SerializeBody(x);
		}
		return message;
	}

	template<typename T>
	static std::string Header();

	template<>
	static std::string Header<int>() {
		return "II";
	}
	template<>
	static std::string Header<float>() {
		return "FF";
	}
	template<>
	static std::string Header<TArray<int>>() {
		return "AI";
	}
	template<>
	static std::string Header<TArray<float>>() {
		return "AF";
	}

	UFUNCTION(BlueprintCallable, Category = "Serializer")
	static FString SerializeInt(const int& arg) {
		auto body = Header<int>() + SerializeBody(arg);
		auto message = SerializeLength(body.size()) + body;
		return FString(message.c_str());
	}
	UFUNCTION(BlueprintCallable, Category = "Serializer")
	static FString SerializeFloat(const float& arg) {
		auto body = Header<float>() + SerializeBody(arg);
		auto message = SerializeLength(body.size()) + body;
		return FString(message.c_str());
	}

	UFUNCTION(BlueprintCallable, Category = "Serializer")
	static FString SerializeArrayInt(const TArray<int>& arg) {
		auto body = Header<TArray<int>>() + SerializeBody(arg);
		auto message = SerializeLength(body.size()) + body;
		return FString(message.c_str());
	}
	UFUNCTION(BlueprintCallable, Category = "Serializer")
	static FString SerializeArrayFloat(const TArray<float>& arg) {
		auto body = Header< TArray<float>>() + SerializeBody(arg);
		auto message = SerializeLength(body.size()) + body;
		return FString(message.c_str());
	}



	UFUNCTION(BlueprintCallable, Category = "Serializer")
	static int DeserializeInt(const FString& fmessage) {
		std::string message = std::string(TCHAR_TO_UTF8(*fmessage));
		if (message.substr(0, 2) != "II") {
			UE_LOG(LogTemp, Error, TEXT("error in message"))
			return 0;
		}
		auto length = std::stoi(message.substr(2, kHeaderLengthSize));
		FString s(message.substr(2, kHeaderLengthSize).c_str());
		/*
		UE_LOG(LogTemp, Warning, TEXT("asd %d %s"),
			std::stoi(message.substr(2, kHeaderLengthSize)), *s
		);
		UE_LOG(LogTemp, Error, TEXT("asd"))
		*/
		return std::stoi(message.substr(2 + kHeaderLengthSize, message.size() - 12));
	}
};