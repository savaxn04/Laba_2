#include "TrainTicket.h"
#include <iostream>

TrainTicket::TrainTicket()
    : fullName("Unknown"), purchaseTime("Unknown"), price(0.0), route("Unknown"),
    isActive(false), userArchiveInfo("None"), ticketStatus("Not set") {}

TrainTicket::TrainTicket(const std::string& fullName, const std::string& purchaseTime, double price,
    const std::string& route, bool isActive, const std::string& userArchiveInfo,
    const std::string& ticketStatus)
    : fullName(fullName), purchaseTime(purchaseTime), price(price), route(route),
    isActive(isActive), userArchiveInfo(userArchiveInfo), ticketStatus(ticketStatus) {}

void TrainTicket::displayInfo() const {
    std::cout << "Full Name: " << fullName << "\n"
        << "Purchase Time: " << purchaseTime << "\n"
        << "Price: " << price << "\n"
        << "Route: " << route << "\n"
        << "Active: " << (isActive ? "Yes" : "No") << "\n"
        << "User Archive Info: " << userArchiveInfo << "\n"
        << "Ticket Status: " << ticketStatus << "\n\n";
}

std::string TrainTicket::getFullName() const {
    return fullName;
}

void TrainTicket::setFullName(const std::string& name) {
    fullName = name;
}
