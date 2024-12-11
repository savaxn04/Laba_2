#ifndef TRAINTICKET_H
#define TRAINTICKET_H

#include <string>

class TrainTicket {
private:
    std::string fullName;
    std::string purchaseTime;
    double price;
    std::string route;
    bool isActive;
    std::string userArchiveInfo;
    std::string ticketStatus;

public:
    TrainTicket(); // ����������� �� �������������
    TrainTicket(const std::string& fullName, const std::string& purchaseTime, double price,
        const std::string& route, bool isActive, const std::string& userArchiveInfo,
        const std::string& ticketStatus);

    void displayInfo() const;

    // ������ �������
    std::string getFullName() const;
    void setFullName(const std::string& name);
    // ���� ������� � ������� ����� ������ �� �������
};

#endif // TRAINTICKET_H
