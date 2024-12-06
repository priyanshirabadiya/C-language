#include <stdio.h>

int main() {
    int choice;
    int c, s, total = 0, gt = 0, t = 0, o = 0, l = 0, a = 0, r = 0, n, score;
    char p[20], k[30];

    printf("Menu:\n");
    printf("1. RAJ CINEMA\n");
    printf("2. ORDER FOOD 2\n");
    printf("3. PLAY GAMES 3\n");
    printf("4. BOOK TICKETS\n");
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("WELCOME TO RAJ CINEMA \n");
                printf("1. Gader 2\n");
                printf("2. Jvan\n");
                printf("3. OMG 2\n");
                printf("Enter choice:");
                scanf("%d", &c);
                switch (c) {
                    case 1:
                        printf("\nYou select Gader 2");
                        printf("\nPrice: 350rs.");
                        printf("\nBook sit:");
                        scanf("%d", &s);
                        total = 350 * s;
                        printf("\nYour total price is: %d", total);
                        break;
                    case 2:
                        printf("\nYou select Jvan");
                        printf("\nPrice: 150rs.");
                        printf("\nBook sit:");
                        scanf("%d", &s);
                        total = 150 * s;
                        printf("\nYour total price is: %d", total);
                        break;
                    case 3:
                        printf("\nYou select OMG 2");
                        printf("\nPrice: 200rs.");
                        printf("\nBook sit:");
                        scanf("%d", &s);
                        total = 200 * s;
                        printf("\nYour total price is: %d", total);
                        break;
                    default:
                        printf("Wrong choice");
                }
                break;

            case 2:
                printf("WELCOME TO HOTEL DARSHAN\n");
                printf("Menu card\n");
                printf("Dish name    rs\n");
                printf("1. Dosa         200\n");
                printf("2. Jini roll    150\n");
                printf("3. Maisur       100\n");
                printf("4. Cold drinks   20  \n");
                printf("5. Grand total\n");
                printf("Enter your choice:");
                scanf("%d", &c);
                switch (c) {
                    case 1:
                        printf("You select dosa\n");
                        printf("Enter quantity:");
                        scanf("%d", &s);
                        t = 200 * s;
                        printf("Total price is: %d", t);
                        break;
                    case 2:
                        printf("You select jini roll");
                        printf("\nEnter quantity:");
                        scanf("%d", &s);
                        o = 150 * s;
                        printf("\nTotal price is: %d", o);
                        break;
                    case 3:
                        printf("You select maisur");
                        printf("\nEnter quantity:");
                        scanf("%d", &s);
                        a = 100 * s;
                        printf("\nTotal price is: %d", a);
                        break;
                    case 4:
                        printf("You select cold drinks");
                        printf("\nEnter quantity:");
                        scanf("%d", &s);
                        l = 20 * s;
                        printf("\nTotal price is: %d", l);
                        break;
                    case 5:
                        gt = t + o + a + l;
                        printf("Grand total is : %d", gt);
                        break;
                    default:
                        printf("Wrong choice");
                }
                break;

            case 3:
                printf("WELCOME TO GAMEZONE\n");
                printf("\nGame list    rs");
                printf("\n1. Jumping    249/-");
                printf("\n2. DodgeBall  39/-");
                printf("\n3. Basketball 349/-");
                printf("\n4. Foam Pit   369/-");
                printf("\nIF YOU WIN THE GAMES YOU WILL GET 50 PERCENTAGE DISCOUNT");
                printf("\nEnter choice:");
                scanf("%d", &c);
                switch (c) {
                    case 1:
                        printf("\nYou select JUMPING");
                        printf("\nYOU CAN'T GET DISCOUNT IN THIS GAME");
                        printf("\nEnter hours:");
                        scanf("%d", &n);
                        o = n * 249;
                        printf("Your amount is: %d", o);
                        break;
                    case 2:
                        printf("You select Dodge ball");
                        printf("\nYOU CAN'T GET DISCOUNT IN THIS GAME\n");
                        printf("Enter how many times you want to play:");
                        scanf("%d", &n);
                        l = n * 39;
                        printf("Your amount is: %d", l);
                        break;
                    case 3:
                        printf("You select basketball\n");
                        printf("Enter how many times you want to play:");
                        scanf("%d", &n);
                        printf("Enter achieved score:");
                        scanf("%d", &score);
                        if (score < 10) {
                            l = n * 349;
                            printf("Your amount is: %d", l);
                        } else {
                            printf("CONGRATS YOU GET 50 PERCENTAGE DISCOUNT");
                            l = (n * 349) * 50 / 100;
                            printf("Your amount is: %d", l);
                        }
                        break;
                    case 4:
                        printf("FOAM PIT\n");
                        printf("YOU CAN'T GET DISCOUNT IN THIS GAME\n");
                        printf("Enter hours:\n");
                        scanf("%d", &n);
                        r = n * 369;
                        printf("Your amount is: %d", r);
                        break;
                    default:
                        printf("Wrong choice");
                }
                break;

            case 4:
                printf("BOOK TICKETS\n");
                printf("\n1. Bus tickets");
                printf("\n2. Train tickets");
                printf("\n3. Plane tickets");
                printf("\n4. Exit ");
                printf("\nEnter choice:");
                scanf("%d", &c);
                switch (c) {
                    case 1:
                        printf("\nTHERE IS LOTS OF BUSES");
                        printf("\nEnter your location to where you want to reach:");
                        scanf("%s", &k);
                        printf("\nDHARTI");
                        printf("\nRAJMANDIR");
                        printf("\nROYAL");
                        printf("\nChoose your favorite bus: ");
                        scanf("%s", &p);
                        printf("\nEnter number of tickets in your selected BUS to book:");
                        scanf("%d", &l);
                        o = l * 1000;
                        printf("\nBus is                  : %s", p);
                        printf("\nLocation to reach is    : %s", k);
                        printf("\nNumber of tickets is/are: %d", l);
                        printf("\nYour  total  amount is  : %d ", o);
                        printf("\nYOUR TICKET IS CONFIRMED..");
                        break;
                    case 2:
                        printf("\nTHERE IS LOTS OF TRAINS");
                        printf("\nEnter your location to where you want to reach:");
                        scanf("%s", &k);
                        printf("\n1. Chennai express");
                        printf("\n2. Tirunnevali express");
                        printf("\nCHOOSE YOUR FAVORITE TRAIN: ");
                        scanf("%s", &p);
                        printf("\nEnter number of tickets to book in your selected train:");
                        scanf("%d", &l);
                        o = l * 450;
                        printf("\nTrain is                 : %s", p);
                        printf("\nLocation to reach is     : %s", k);
                        printf("\nNumber of tickets is/are : %d", l);
                        printf("\nYour  total  amount is   : %d ", o);
                        printf("\nYOUR TICKET IS CONFIRMED..");
                        break;
                    case 3:
                        printf("\nTHERE IS LOTS OF FLIGHTS");
                        printf("\nEnter your location to where you want to reach:");
                        scanf("%s", &k);
                        printf("\nIndiGo ");
                        printf("\nAir india");
                        printf("\nSpiceJet.");
                        printf("\nAirAsia India.");
                        printf("\nCHOOSE YOUR FLIGHT:");
                        scanf("%s", &p);
                        printf("\nEnter number of tickets to book:");
                        scanf("%d", &l);
                        o = l * 12000;
                        printf("\nFlight is               : %s", p);
                        printf("\nLocation to reach is    : %s", k);
                        printf("\nNumber of tickets is/are: %d", l);
                        printf("\nYour  total  amount is  : %d", o);
                        printf("\nYOUR FLIGHT TICKET IS CONFIRMED..");
                        break;
                    case 4:
                        printf("Exit");
                        break;
                    default:
                        printf("Wrong choice");
                }
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
