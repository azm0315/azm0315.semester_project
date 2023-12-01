#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Ticket Category
enum TicketCategory {
    STUDENT_ATHLETE,
    PARENT_OF_STUDENT_ATHLETE,
    NON_STUDENT,
    ADULT_OVER_50,
    CHILD_UNDER_12
};

// User Structure
struct User {
    string name;
    string lastName;
    string email;
    string password;
    TicketCategory category;
    int freeTickets; // For student-athletes
};


struct TicketPurchase {
    int quantity;
    TicketCategory category;
    double totalCost;
    string paymentMethod;
    string purchaseDate;
};

// Ticket System Class
class SECTicketsSystem {
private:
    vector<User> users;
    vector<TicketPurchase> transactions;

public:
    void createUser(string name, string lastName, string email, string password, TicketCategory category);

    // Ticket Purchase Functions
    void purchaseTickets(string email, int quantity, TicketCategory category, string paymentMethod);
    void viewTransactions(string email);
};


void SECTicketsSystem::createUser(string name, string lastName, string email, string password, TicketCategory category) {
    // Implementation to create a new user
}


void SECTicketsSystem::purchaseTickets(string email, int quantity, TicketCategory category, string paymentMethod) {
    // Implementation for purchasing tickets
}

void SECTicketsSystem::viewTransactions(string email) {
    // Implementation to view user transactions
}

int main() {
    // Example usage of your SEC Tickets System
    SECTicketsSystem ticketSystem;

    // Example: Creating a user
    ticketSystem.createUser("John", "Doe", "john@example.com", "password123", STUDENT_ATHLETE);

    // Example: Purchasing tickets
    ticketSystem.purchaseTickets("john@example.com", 2, NON_STUDENT, "Credit Card");

    // Example: Viewing user transactions
    ticketSystem.viewTransactions("john@example.com");

    return 0;
}

