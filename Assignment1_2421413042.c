#include<stdio.h>
#include<string.h>

#define maxcar 5

typedef struct{
    char name[50];
    int modelyear;
    char condition[20];
    float mileage;
    float price;
}car;

void sortprice(car array[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(array[i].price>array[j].price)
        {
        car temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        }
        }
    }
    printf("Car price from lowest to highest is:\n");
    for(int i=0;i<n;i++)
    {
        printf("Car name: %s  | Price:%.3f\n",array[i].name,array[i].price);
    }
    return;
}

void sortmodelyear(car array[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(array[i].modelyear>array[j].modelyear)
        {
        car temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        }
        }
    }
    printf("Car model from lowest to highest is:\n");
    for(int i=0;i<n;i++)
    {
        printf("Car name: %s Model Year::%d\n",array[i].name,array[i].modelyear);
    }
    return;
}

void search(car array[], int n)
{
    char str[50];
    printf("Enter car name to search (case insensitive): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    int found=0;
    for(int i=0;i<n;i++)
    {
        if(strcasecmp(array[i].name, str) == 0)
        {
            printf("\nCar Found:\n");
            printf("Name: %s\n", array[i].name);
            printf("Model Year: %d\n", array[i].modelyear);
            printf("Condition: %s\n", array[i].condition);
            printf("Mileage: %.3f\n", array[i].mileage);
            printf("Price: %.4f\n", array[i].price);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("Car with name \"%s\" not found.\n", str);
    }
}

void clearbuffer()
{
    while(getchar()!='\n');
}

int main()
{
    car array[maxcar];

    for(int i=0;i<maxcar;i++)
    {
        printf("\nEnter name of car no.%d: ",i+1);
        fgets(array[i].name,sizeof(array[i].name),stdin);
        array[i].name[strcspn(array[i].name,"\n")]='\0';
        printf("Enter model year: ");
        scanf("%d",&array[i].modelyear);
        printf("Enter car condition: ");
        clearbuffer();
        fgets(array[i].condition,sizeof(array[i].condition),stdin);
        array[i].condition[strcspn(array[i].condition,"\n")]='\0';
        printf("Enter mileage of the car: ");
        scanf("%f",&array[i].mileage);
        printf("Enter  price: ");
        scanf("%f",&array[i].price);
        clearbuffer();
    }

    int choice;
    do {
        printf("\n----- MENU -----\n");
        printf("1. Sort cars from lowest to highest price.\n");
        printf("2. Sort cars from oldest to newest model year.\n");
        printf("3. Search car name (case insensitive).\n");
        printf("4. Exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearbuffer();

        switch(choice){
            case 1:
                sortprice(array, maxcar);
                break;
            case 2:
                sortmodelyear(array, maxcar);
                break;
            case 3:
                search(array, maxcar);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
