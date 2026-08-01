#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact phoneBook[100];
    int count = 0, choice, i, found;
    char searchName[50];

    while (1) {
        printf("\n===== PHONE BOOK MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf("%s", phoneBook[count].name);

            printf("Enter Phone Number: ");
            scanf("%s", phoneBook[count].phone);

            count++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (count == 0) {
                printf("No Contacts Available.\n");
            } else {
                printf("\n----- Contact List -----\n");
                for (i = 0; i < count; i++) {
                    printf("\nName : %s\n", phoneBook[i].name);
                    printf("Phone: %s\n", phoneBook[i].phone);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf("%s", searchName);

            found = 0;
            for (i = 0; i < count; i++) {
                if (strcmp(phoneBook[i].name, searchName) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name : %s\n", phoneBook[i].name);
                    printf("Phone: %s\n", phoneBook[i].phone);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Contact Not Found!\n");
            break;

        case 4:
            printf("Thank You for Using Phone Book Management System!\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
