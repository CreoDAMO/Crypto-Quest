// SmartContractManager.h

#ifndef SMARTCONTRACTMANAGER_H
#define SMARTCONTRACTMANAGER_H

#include <string>
#include <vector>
#include <json/json.h> // Make sure to include the JSON library

class SmartContractManager {
public:
    // Constructor
    SmartContractManager(const std::string& contractAddress, const std::string& abi);

    // Destructor
    ~SmartContractManager();

    // Function to deploy a new contract
    std::string deployContract(const std::string& bytecode, const std::string& senderPrivateKey);

    // Function to call a smart contract function
    Json::Value callFunction(const std::string& functionName, const std::vector<std::string>& params);

    // Function to send a transaction to the contract
    std::string sendTransaction(const std::string& functionName, const std::vector<std::string>& params, const std::string& senderPrivateKey);

    // Function to listen for events
    void listenForEvents(const std::string& eventName);

private:
    std::string contractAddress;
    std::string abi;
};

#endif // SMARTCONTRACTMANAGER_H