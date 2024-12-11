#include "TicketManager.h"
#include <iostream>

void showMenu() {
    std::cout << "Train Ticket Information System\n";
    std::cout << "1. Add Ticket\n";
    std::cout << "2. Remove Ticket\n";
    std::cout << "3. Display All Tickets\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    TicketManager manager;
    int choice;
    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name, time, route, archiveInfo, status;
            double price;
            bool active;
            std::cout << "Enter full name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Enter purchase time: ";
            std::getline(std::cin, time);
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cin.ignore();
            std::cout << "Enter route: ";
            std::getline(std::cin, route);
            std::cout << "Is active (1 for Yes, 0 for No): ";
            std::cin >> active;
            std::cin.ignore();
            std::cout << "Enter user archive info: ";
            std::getline(std::cin, archiveInfo);
            std::cout << "Enter ticket status: ";
            std::getline(std::cin, status);

            manager.addTicket(TrainTicket(name, time, price, route, active, archiveInfo, status));
            break;
        }
        case 2: {
            std::string name;
            std::cout << "Enter full name of ticket to remove: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            manager.removeTicket(name);
            break;
        }
        case 3:
            manager.displayTickets();
            break;
        case 4:
            std::cout << "Exiting system...\n";
            break;
        default:
            std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 4);

    return 0;
}
