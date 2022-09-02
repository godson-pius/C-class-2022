#include <stdio.h>
#include <string.h>

void divider();

int main()
{
    int choice;
    char value[20];

    printf("========= Welcome to Teach App =========\n");
    printf("Instructions: \n");

    printf("1. Type what you see.\n");
    printf("2. Do not cheat.\n");
    printf("3. Do it your self.\n\n");

    initial:
    printf("Press 1 to start the app: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Start the app
        printf("Type: JohNsOn \n");
        divider();
        scanf("%s", value);

        if (strcmp(value, "JohNsOn") == 0) {
            printf("Jackpot! you did well\n");
        } else {
            printf("Ooosps! you tried, try again!\n");
            divider();
            goto initial;
        }
    } else {
        printf("Wrong choice!\n\n");
        goto initial;
    }
}

void divider() {
    printf("=========================\n");
}