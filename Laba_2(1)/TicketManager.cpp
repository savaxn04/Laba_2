#include "TicketManager.h"
#include <iostream>

void TicketManager::addTicket(const TrainTicket& ticket) {
    tickets.push_back(ticket);
}

void TicketManager::removeTicket(const std::string& fullName) {
    for (auto it = tickets.begin(); it != tickets.end(); ++it) {
        if (it->getFullName() == fullName) {
            tickets.erase(it);
            std::cout << "Ticket removed successfully.\n";
            return;
        }
    }
    std::cout << "Ticket not found.\n";
}

void TicketManager::displayTickets() const {
    if (tickets.empty()) {
        std::cout << "No tickets available.\n";
        return;
    }
    for (const auto& ticket : tickets) {
        ticket.displayInfo();
    }
}
