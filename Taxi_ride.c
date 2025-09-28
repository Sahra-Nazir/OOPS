#include <stdio.h>

int main() {
    int choice, km;
    float fare;

    printf("==== TAXI BOOKING SYSTEM ====\n");

    while (1) {
        printf("\nAvailable Taxis:\n");
        printf("1. Mini (Rs.10/km)\n");
        printf("2. Sedan (Rs.15/km)\n");
        printf("3. SUV (Rs.20/km)\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter distance (in km): ");
        scanf("%d", &km);

        switch (choice) {
            case 1: fare = km * 10; printf("Mini booked! Fare = Rs. %.2f\n", fare); break;
            case 2: fare = km * 15; printf("Sedan booked! Fare = Rs. %.2f\n", fare); break;
            case 3: fare = km * 20; printf("SUV booked! Fare = Rs. %.2f\n", fare); break;
            default: printf("Invalid choice!\n");
        }
    }

    printf("\nThank you for using Taxi Booking System 🚖\n");
    return 0;
}