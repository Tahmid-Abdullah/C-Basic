#include <stdio.h>
#include <string.h>

#define PASSWORD "admin123"
#define MAXCAR 100

typedef struct {
    char name[50];
    float mileage;
    char condition[20];
    float price;
} Car;

int totalcar = 0;

void clearBuffer() {
    while (getchar() != '\n');
}

void viewcar(Car *array) {
    if (totalcar < 1) {
        printf("No Car is available at this moment.\n");
        return;
    }
    for (int i = 0; i < totalcar; i++) {
        Car *c = &array[i];
        printf("Car No.%d:\n", i + 1);
        printf("Car name: %s\n", c->name);
        printf("Car Mileage: %.2f\n", c->mileage);
        printf("Car Condition: %s\n", c->condition);
        printf("Car Price: %.2f\n\n", c->price);
    }
}

void addcar(Car *array) {
    if (totalcar >= MAXCAR) {
        printf("You cannot add any more cars.\n");
        return;
    }
    Car *c = &array[totalcar];
    char str[50];

    printf("Enter Car name: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(c->name, str);

    printf("Enter the car mileage: ");
    scanf("%f", &c->mileage);
    clearBuffer();

    printf("Enter Condition (Used/New/Reconditioned): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(c->condition, str);

    printf("Enter Price: ");
    scanf("%f", &c->price);
    clearBuffer();

    totalcar++;
    printf("Car added to the inventory successfully.\n");
}

void searchcar(Car *array) {
    char key[50];
    if (totalcar < 1) {
        printf("No Car is available at this moment.\n");
        return;
    }
    printf("Enter a keyword: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < totalcar; i++) {
        Car *c = &array[i];
        if (strstr(c->name, key) != NULL) {
            printf("Car No.%d:\n", i + 1);
            printf("Car name: %s\n", c->name);
            printf("Car Mileage: %.2f\n", c->mileage);
            printf("Car Condition: %s\n", c->condition);
            printf("Car Price: %.2f\n\n", c->price);
            found = 1;
        }
    }
    if (!found) printf("No car found with that keyword.\n");
}

void editcarprice(Car *array) {
    if (totalcar < 1) {
        printf("No cars available to edit.\n");
        return;
    }
    viewcar(array);
    int carindex;
    printf("Enter car no. you want to edit: ");
    scanf("%d", &carindex);
    clearBuffer();

    if (carindex < 1 || carindex > totalcar) {
        printf("Invalid car number!\n");
        return;
    }

    Car *c = &array[carindex - 1];
    printf("Enter New price: ");
    scanf("%f", &c->price);
    clearBuffer();
    printf("Car price edited successfully.\n");
}

void removecar(Car *array) {
    if (totalcar < 1) {
        printf("No cars to remove.\n");
        return;
    }
    viewcar(array);
    int carindex;
    printf("Enter car no. you want to remove: ");
    scanf("%d", &carindex);
    clearBuffer();

    if (carindex < 1 || carindex > totalcar) {
        printf("Invalid car number!\n");
        return;
    }
    for (int i = carindex - 1; i < totalcar - 1; i++) {
        array[i] = array[i + 1];
    }
    totalcar--;
    printf("Car removed successfully.\n");
}

void savetofile(Car *array) {
    FILE *file = fopen("inventory.txt", "w");
    if (file == NULL) {
        printf("Error opening file for saving.\n");
        return;
    }
    for (int i = 0; i < totalcar; i++) {
        Car *c = &array[i];
        fprintf(file, "%s %.2f %s %.2f\n", c->name, c->mileage, c->condition, c->price);
    }
    fclose(file);
    printf("Data saved to file.\n");
}

void readfile(Car *array) {
    FILE *file = fopen("inventory.txt", "r");
    if (file == NULL) {
        return;
    }
    while (fscanf(file, "%49s %f %19s %f",
                  array[totalcar].name,
                  &array[totalcar].mileage,
                  array[totalcar].condition,
                  &array[totalcar].price) == 4) {
        totalcar++;
    }
    fclose(file);
}

int main() {
    Car array[MAXCAR];
    readfile(array);

    char pass[50];
    printf("Enter password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    if (strcmp(pass, PASSWORD) == 0) {
        int c;
        do {
            printf("\n------Car Inventory Management------\n");
            printf("1. Show All Cars\n");
            printf("2. Add Cars\n");
            printf("3. Search Cars (Partial)\n");
            printf("4. Edit Car Price\n");
            printf("5. Remove Car\n");
            printf("6. Save & Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &c);
            clearBuffer();

            switch (c) {
                case 1: viewcar(array); break;
                case 2: addcar(array); break;
                case 3: searchcar(array); break;
                case 4: editcarprice(array); break;
                case 5: removecar(array); break;
                case 6: savetofile(array); break;
                default: printf("Invalid choice!\n");
            }
        } while (c != 6);
    } else {
        printf("Wrong password!!\n");
    }
    return 0;
}
