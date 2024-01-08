#include <stdio.h>

int main() {
    // Declare variables for name, index number, address, and date of birth
    char firstName[100];
    char lastName[100];
    int indexNumber;
    char address[100];
    char dOB[20]; // DD.MM.YYYY format

    // Get user input
    printf("Enter your First Name: ");
    scanf("%s", firstName);

    printf("Enter your Last Name: ");
    scanf("%s", lastName);

    printf("Enter your Index Number: ");
    scanf("%d", &indexNumber);

    printf("Enter your Home Address: ");
    scanf("%s", address);

    printf("Enter your Date of Birth (DD.MM.YYYY): ");
    scanf("%s", dOB);

    // Display information
    printf("\nName: %s %s\n", firstName, lastName);
    printf("Index Number: %d\n", indexNumber);
    printf("Address: %s\n", address);
    printf("Date of Birth: %s\n", dOB);

    return 0;
}

