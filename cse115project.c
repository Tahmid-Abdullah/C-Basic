#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROUTES 8
#define MAX_DAYS 3
#define MAX_TIMES 10
#define MAX_SEATS 40
#define adminpass "admin123"

#define NAME 50
#define ID 10
#define PHONE 15
#define PASSWORD 10

typedef struct
{
    int isBooked;
    char name[NAME];
    char id[ID];
    char phone[PHONE];
    char password[PASSWORD];
} Seat;

typedef struct
{
    char routeName[50];
    char days[MAX_DAYS][3];
    char times[MAX_DAYS][MAX_TIMES][10];
    Seat seats[MAX_DAYS][MAX_TIMES][MAX_SEATS];
} BusRoute;

void clearBuffer()
{
    while(getchar()!='\n');
}

void initializeRoutes(BusRoute *routes)
{
    char *routeName[]={
        "Uttara to NSU", "NSU to Uttara", "Dhanmondi to NSU", "NSU to Dhanmondi",
        "Mirpur to NSU", "NSU to Mirpur", "Banani to NSU", "NSU to Banani"};

    char *days[]={"ST", "MW", "RA"};

    char *times[]={
        "08:00", "09:00", "10:00", "11:00", "12:00",
        "13:00", "14:00", "15:00", "16:00", "17:00"};

    for (int i=0; i<MAX_ROUTES; i++)
    {
        strcpy(routes[i].routeName, routeName[i]);

        for (int j=0; j<MAX_DAYS; j++)
        {
            strcpy(routes[i].days[j], days[j]);

            for (int k=0; k<MAX_TIMES; k++)
            {
                strcpy(routes[i].times[j][k], times[k]);

                for (int s=0; s<MAX_SEATS; s++)
                {
                    routes[i].seats[j][k][s].isBooked = 0;
                    strcpy(routes[i].seats[j][k][s].name, "");
                    strcpy(routes[i].seats[j][k][s].id, "");
                    strcpy(routes[i].seats[j][k][s].phone, "");
                    strcpy(routes[i].seats[j][k][s].password, "");
                }
            }
        }
    }
}

void viewSeats(BusRoute *route, int dayIndex, int timeIndex)
{
    printf("\nSeat Status for Route %s at %s on %s:\n", route->routeName, route->times[dayIndex][timeIndex], route->days[dayIndex]);
    for (int i=0; i<MAX_SEATS; i++)
    {
        if (i%4==0)
            printf("\n");
        if (i%4==2)
            printf("   ");
            
        if (route->seats[dayIndex][timeIndex][i].isBooked)
        {
            printf("\033[1;31m%2d\033[0m ", i + 1);
        }
        else
        {
            printf("\033[1;32m%2d\033[0m ",i+1);
        }
    }
    printf("\n");
}

void OPviewSeats(BusRoute *routes)
{
    int routeIndex, dayIndex, timeIndex;
    printf("\nAvailable Routes:\n");
    for (int i = 0; i < MAX_ROUTES; i++)
    {
        printf("%d. %s\n", i + 1, routes[i].routeName);
    }
    printf("Select a route (1-%d): ", MAX_ROUTES);
    scanf("%d", &routeIndex);
    clearBuffer();
    routeIndex--;

    if (routeIndex < 0 || routeIndex >= MAX_ROUTES)
    {
        printf("Invalid route selection.\n");
        return;
    }

    BusRoute *route = &routes[routeIndex];

    printf("\nSelect a day for Route %s:\n", route->routeName);
    for (int i = 0; i < MAX_DAYS; i++)
    {
        printf("%d. %s\n", i + 1, route->days[i]);
    }
    printf("Select a day (1-%d): ", MAX_DAYS);
    scanf("%d", &dayIndex);
    clearBuffer();
    dayIndex--;

    if (dayIndex < 0 || dayIndex >= MAX_DAYS)
    {
        printf("Invalid day selection.\n");
        return;
    }

    printf("\nAvailable Times for Route %s on %s:\n", route->routeName, route->days[dayIndex]);
    for (int i = 0; i < MAX_TIMES; i++)
    {
        printf("%d. %s\n", i + 1, route->times[dayIndex][i]);
    }
    printf("Select a time (1-%d): ", MAX_TIMES);
    scanf("%d", &timeIndex);
    clearBuffer();
    timeIndex--;

    if (timeIndex < 0 || timeIndex >= MAX_TIMES)
    {
        printf("Invalid time selection.\n");
        return;
    }

    viewSeats(route, dayIndex, timeIndex);
}

void bookSeat(BusRoute *routes)
{
    int routeIndex, dayIndex, timeIndex, seatNumber;

    printf("\nAvailable Routes:\n");
    for (int i = 0; i < MAX_ROUTES; i++)
    {
        printf("%d. %s\n", i + 1, routes[i].routeName);
    }
    printf("Select a route (1-%d): ", MAX_ROUTES);
    scanf("%d", &routeIndex);
    clearBuffer();
    routeIndex--;

    if (routeIndex < 0 || routeIndex >= MAX_ROUTES)
    {
        printf("Invalid route selection.\n");
        return;
    }

    BusRoute *route = &routes[routeIndex];

    printf("\nSelect a day for Route %s:\n", route->routeName);
    for (int i = 0; i < MAX_DAYS; i++)
    {
        printf("%d. %s\n", i + 1, route->days[i]);
    }
    printf("Select a day (1-%d): ", MAX_DAYS);
    scanf("%d", &dayIndex);
    clearBuffer();
    dayIndex--;

    if (dayIndex < 0 || dayIndex >= MAX_DAYS)
    {
        printf("Invalid day selection.\n");
        return;
    }

    printf("\nAvailable Times for Route %s on %s:\n", route->routeName, route->days[dayIndex]);
    for (int i = 0; i < MAX_TIMES; i++)
    {
        printf("%d. %s\n", i + 1, route->times[dayIndex][i]);
    }

    printf("Select a time (1-%d): ", MAX_TIMES);
    scanf("%d", &timeIndex);
    clearBuffer();
    timeIndex--;

    if (timeIndex < 0 || timeIndex >= MAX_TIMES)
    {
        printf("Invalid time selection.\n");
        return;
    }

    viewSeats(route, dayIndex, timeIndex);

    printf("\nEnter seat number to book: ");
    scanf("%d", &seatNumber);
    clearBuffer();

    if (seatNumber < 1 || seatNumber > MAX_SEATS)
    {
        printf("Invalid seat number.\n");
        return;
    }

    Seat *seat = &route->seats[dayIndex][timeIndex][seatNumber - 1];
    if (seat->isBooked)
    {
        printf("Seat %d is already booked by %s.\n", seatNumber, seat->name);
    }
    else
    {
        printf("Enter your name: ");
        fgets(seat->name, sizeof(seat->name), stdin);
        seat->name[strcspn(seat->name, "\n")] = '\0';

        printf("Enter your ID: ");
        fgets(seat->id, sizeof(seat->id), stdin);
        seat->id[strcspn(seat->id, "\n")] = '\0';

        printf("Enter your Password : ");
        fgets(seat->password, sizeof(seat->password), stdin);
        seat->password[strcspn(seat->password, "\n")] = '\0';

        printf("Enter your phone number: ");
        fgets(seat->phone, sizeof(seat->phone), stdin);
        seat->phone[strcspn(seat->phone, "\n")] = '\0';

        seat->isBooked = 1;
        printf("Seat %d booked successfully on route %s at %s on %s!\n", seatNumber, route->routeName, route->times[dayIndex][timeIndex], route->days[dayIndex]);
    }
}

void cancelBooking(BusRoute *routes)
{
    int routeIndex, dayIndex, timeIndex, seatNumber;

    printf("\nAvailable Routes:\n");
    for (int i = 0; i < MAX_ROUTES; i++)
    {
        printf("%d. %s\n", i + 1, routes[i].routeName);
    }
    printf("Select a route (1-%d): ", MAX_ROUTES);
    scanf("%d", &routeIndex);
    clearBuffer();
    routeIndex--;

    if (routeIndex < 0 || routeIndex >= MAX_ROUTES)
    {
        printf("Invalid route selection.\n");
        return;
    }

    BusRoute *route = &routes[routeIndex];

    printf("\nSelect a day for Route %s:\n", route->routeName);
    for (int i = 0; i < MAX_DAYS; i++)
    {
        printf("%d. %s\n", i + 1, route->days[i]);
    }
    printf("Select a day (1-%d): ", MAX_DAYS);
    scanf("%d", &dayIndex);
    clearBuffer();
    dayIndex--;

    if (dayIndex < 0 || dayIndex >= MAX_DAYS)
    {
        printf("Invalid day selection.\n");
        return;
    }

    printf("\nAvailable Times for Route %s on %s:\n", route->routeName, route->days[dayIndex]);
    for (int i = 0; i < MAX_TIMES; i++)
    {
        printf("%d. %s\n", i + 1, route->times[dayIndex][i]);
    }
    printf("Select a time (1-%d): ", MAX_TIMES);
    scanf("%d", &timeIndex);
    clearBuffer();
    timeIndex--;

    if (timeIndex < 0 || timeIndex >= MAX_TIMES)
    {
        printf("Invalid time selection.\n");

        return;
    }

    viewSeats(route, dayIndex, timeIndex);

    printf("\nEnter seat number to cancel booking: ");
    scanf("%d", &seatNumber);
    clearBuffer();

    if (seatNumber < 1 || seatNumber > MAX_SEATS)
    {
        printf("Invalid seat number.\n");
        return;
    }

    Seat *seat = &route->seats[dayIndex][timeIndex][seatNumber - 1];
    if (!seat->isBooked)
    {
        printf("Seat %d is not booked.\n", seatNumber);
    }
    else
    {   char idc[ID],passwordc[PASSWORD];
        printf("Enter your ID: ");
        fgets(idc, sizeof(idc), stdin);
        idc[strcspn(idc, "\n")] = '\0';
        printf("Enter your Password : ");
        fgets(passwordc, sizeof(passwordc), stdin);
        passwordc[strcspn(passwordc, "\n")] = '\0';
        if(strcmp(passwordc,seat->password)==0 && strcmp(idc,seat->id)==0){
        seat->isBooked=0;
        printf("Booking for seat %d on route %s at %s on %s has been canceled.\n", seatNumber, route->routeName, route->times[dayIndex][timeIndex], route->days[dayIndex]);
        }
        else{
            printf("Wrong Id and Password");
        }
    }
}

void saveToFile(BusRoute *routes)
{
    FILE *file = fopen("nsu_bus_booking_details.txt", "w");
    if (file == NULL)
    {
        printf("Error: Unable to open file for saving data.\n");
        return;
    }

    for (int i = 0; i < MAX_ROUTES; i++)
    {
        fprintf(file, "Route: %s\n", routes[i].routeName);

        for (int j = 0; j < MAX_DAYS; j++)
        {
            fprintf(file, "  Day: %s\n", routes[i].days[j]);

            for (int k = 0; k < MAX_TIMES; k++)
            {
                fprintf(file, "    Time: %s\n", routes[i].times[j][k]);
                fprintf(file, "      Bookings:\n");

                for (int s = 0; s < MAX_SEATS; s++)
                {
                    if (routes[i].seats[j][k][s].isBooked)
                    {
                        Seat *seat = &routes[i].seats[j][k][s];
                        fprintf(file, "        Seat %d: Name: %s, ID: %s, Phone: %s\n",
                                s + 1, seat->name, seat->id, seat->phone);
                    }
                }
            }
        }
    }

    fclose(file);
    printf("Booking details successfully saved to 'nsu_bus_booking_details.txt'.\n");
}

void showAllBookings(BusRoute *routes)
{
    int found = 0;

    for (int i= 0; i<MAX_ROUTES; i++)
    {
        BusRoute *route = &routes[i];

        for (int j = 0; j < MAX_DAYS; j++)
        {
            for (int k = 0; k < MAX_TIMES; k++)
            {
                for (int s = 0; s < MAX_SEATS; s++)
                {
                    Seat *seat = &route->seats[j][k][s];
                    if (seat->isBooked)
                    {
                        printf("Route: %s | Day: %s | Time: %s | Seat %2d\n",
                               route->routeName, route->days[j], route->times[j][k], s + 1);
                        printf("  Name: %s, ID: %s, Phone: %s\n",
                               seat->name, seat->id, seat->phone);
                        found = 1;
                    }
                }
            }
        }
    }

    if (!found)
        printf("No bookings found in the system.\n");
}

void searchBookingByID(BusRoute *routes) {
    char searchID[ID];
    printf("Enter student ID to search: ");
    fgets(searchID, sizeof(searchID), stdin);
    searchID[strcspn(searchID, "\n")] = 0;
    int found = 0;
    for (int i = 0; i < MAX_ROUTES; i++) {
        for (int j = 0; j < MAX_DAYS; j++) {
            for (int k = 0; k < MAX_TIMES; k++) {
                for (int s = 0; s < MAX_SEATS; s++) {
                    Seat *seat = &routes[i].seats[j][k][s];
                    if (seat->isBooked && strcmp(seat->id, searchID) == 0) {
                        printf("Route: %s, Day: %s, Time: %s, Seat: %d, Name: %s, Phone: %s\n",
                            routes[i].routeName, routes[i].days[j], routes[i].times[j][k], s + 1, seat->name, seat->phone);
                        found = 1;
                    }
                }
            }
        }
    }
    if (!found) printf("No booking found for ID %s.\n", searchID);
}

void searchBookingByNamePartial(BusRoute *routes) {
    char searchName[NAME];
    printf("Enter (part of) student name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] ='\0';
    int found = 0;
    for (int i = 0; i < MAX_ROUTES; i++) {
        for (int j = 0; j < MAX_DAYS; j++) {
            for (int k = 0; k < MAX_TIMES; k++) {
                for (int s = 0; s < MAX_SEATS; s++) {
                    Seat *seat = &routes[i].seats[j][k][s];
                    if (seat->isBooked && strstr(seat->name, searchName) != NULL) {
                        printf("Route: %s, Day: %s, Time: %s, Seat: %d, Name: %s, ID: %s, Phone: %s\n",
                            routes[i].routeName, routes[i].days[j], routes[i].times[j][k], s + 1, seat->name, seat->id, seat->phone);
                        found = 1;
                    }
                }
            }
        }
    }
    if (!found) printf("No booking found for name containing '%s'.\n", searchName);
}


int main()
{
char pass[50];

    printf("Enter admin password to login: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    if (strcmp(pass, adminpass) != 0) {
        printf("Access Denied. Wrong password.\n");
        return 0;
    }

    printf("Login successful!\n");

    BusRoute routes[MAX_ROUTES];  //here we initialize an array of 8 busroute structure

    initializeRoutes(routes);    //calling initializeroute function to intialize route name and  insert everything in seats to empty

    int choice;
    do
    {
        printf("\n1. View Seats\n2. Book Seat\n3. Cancel Booking\n4. Show All Bookings for Student\n5. Search Booking by Student ID\n6. Search Booking by Student Name\n7. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);
        clearBuffer();

        switch (choice)
        {
        case 1:
            OPviewSeats(routes);
            break;
        case 2:
            bookSeat(routes);
            break;
        case 3:
            cancelBooking(routes);
            break;
        case 4:
            showAllBookings(routes);
            break;
        case 5:
            searchBookingByID(routes);
            break;
        case 6:
            searchBookingByNamePartial(routes);
            break;
        case 7:
            printf("Exiting Program...\nHappy Wheelz :)\n");
            saveToFile(routes);
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}