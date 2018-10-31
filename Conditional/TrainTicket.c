#include <stdio.h>

const float SINGLE = 1.30;
const float DOUBLE = 2.60;
const float PACK = 12.00;

int main() {
    
    int ticket;
    int amountTickets;
    float valuePaid;
    float moneyBack;

    printf("Ticket Type: 0 - Single | 1 - Double | 2 - Pack of 10: ");
    scanf("%d", &ticket);

    printf("Value Paid: ");
    scanf("%f", &valuePaid);

    switch (ticket)
    {
        case 0:
            amountTickets = valuePaid / SINGLE;
            moneyBack = valuePaid - amountTickets * SINGLE;           
            break;
        case 1:
            amountTickets = valuePaid / DOUBLE;
            moneyBack = valuePaid - amountTickets * DOUBLE;
            break;
        case 2:
            amountTickets = valuePaid / PACK;
            moneyBack = valuePaid - amountTickets * PACK;
            break;
        default:
            printf("Invalid Ticket Option.");
            break;
    }

    printf("Amount Tickets: %d \n", amountTickets);
    printf("Money Back: %f", moneyBack);
}