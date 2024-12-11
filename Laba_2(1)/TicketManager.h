#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H

#include "TrainTicket.h"
#include <vector>
#include <string>

class TicketManager {
private:
    std::vector<TrainTicket> tickets;

public:
    void addTicket(const TrainTicket& ticket);
    void removeTicket(const std::string& fullName);
    void displayTickets() const;
};

#endif // TICKETMANAGER_H
