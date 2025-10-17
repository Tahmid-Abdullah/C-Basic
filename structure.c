/* Basic syntax of strucutre:
#include<stdio.h>
int main()
{
    struct (name of the structure){
        data_type attribute;
        data_type attribute;
    };
    return 0;
}
*/
/* Using structure:
#include<stdio.h>
int main()
{
    // Creating a blueprint named pokemon which can be used to struct pokemons with attributes
    struct pokemon
    {
        int hp;
        char grade;
        float attack;
    };
    
    struct pokemon pikachu;  // creating a pokemon  named pikachu with attributes from the blueprint
    pikachu.hp= 100;  // structure name.attribute to insert a value
    pikachu.grade= 'A';
    pikachu.attack= 100.00;

    struct pokemon charizard;
    charizard.attack= 120.00;
    charizard.grade='S';
    charizard.hp= 110;

    printf("Attck power of pikachu is %.2f and grade of charizard is %c.",pikachu.attack,charizard.grade);
    return 0;
}
*/

/*more ways to declare structure:

struct pokemon{
    int hp;
    char tier;
}mewtoo,dragonite,jirachi;
*/


/* structre of books:
#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        int page;
        float price;
        char name[20];
    }a,b;

    a.page=100;
    a.price=13.50;
    strcpy(a.name,"Book name 1");

    printf("%d\n",a.page);
    printf("%.2f\n",a.price);
    printf("%s",a.name);


    return 0;
}
*/

/*nested structure: 
#include<stdio.h>
#include<string.h>
int main()
{
	struct pokemon {
		int hp;
		int attack;
	};

	struct legendarypokemon {   // using nested loop, we can put all attributes of regular pokemon + exclusive attribute to legendary pokemons
		char ability[10];
		struct pokemon x;
	};
	struct legendarypokemon mewtoo;
	strcpy(mewtoo.ability,"Pressure");
	mewtoo.x.attack=120;  // accessing the nested structures elements via second dot
	printf("Attack of mewtoo is:%d",mewtoo.x.attack);
	return 0;
}
*/

/* Taking input from user for a name in a structure:
#include<stdio.h>
#include<string.h>
int main()
{
    struct person{
      char name[30];  
      int salary;
      int age;
    };
    
    struct person p1;
    printf("Enter name:");
    fgets(p1.name,sizeof(p1.name),stdin);
    printf("%s",p1.name);
    return 0;
}
*/

/* Typedef:

#include <stdio.h>
typedef float decimal;
int main()
{
    decimal x;
    scanf("%f",&x);
    printf("%f",x);
    return 0;
}
*/

/* typedef for structure:
#include<stdio.h>
typedef struct{
   char name[30];
   int page;
   float price;
}book;
int main()
{
    book a;
    a.page=50;
    printf("%d",a.page);
    return 0;
}
*/

/* pointer using typedef:
#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=7;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}
*/

/* Creating a structure and an array of structure, then taking input for the structures and printing them
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
   int hp;
   int attack;
}pokemon;
int main()
{
    pokemon array[3];  // creating an array of structures which can contain 3 structure
    for(int i=0;i<3;i++)
    {
        printf("Enter pokemon %d name:",i+1);
        fgets(array[i].name,sizeof(array[i].name),stdin);
        array[i].name[strcspn(array[i].name,"\n")]='\0';
        printf("Enter hp of %s:",array[i].name);
        scanf("%d",&array[i].hp);
        printf("Enter attack of %s:",array[i].name);
        scanf("%d",&array[i].attack);
        getchar();  // clear input buffer by absorbing newline
    }
    for(int i=0;i<3;i++)
    {
        printf("\nPokemon name :%s",array[i].name);
        printf("\nHP:%d",array[i].hp);
        printf("\nAttck:%d",array[i].attack);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    int age;
    int match;
    int run;
    float avgrun;
}cricketer;
int main()
{
    cricketer array[5]; //can store upto 5 cricketers structure
    for(int i=0;i<5;i++)
    {
        printf("Enter cricketer %d's name:",i+1);
        fgets(array[i].name,sizeof(array[i].name),stdin);
        array[i].name[strcspn(array[i].name,"\n")]='\0';
        printf("Enter %s's age:",array[i].name);
        scanf("%d",&array[i].age);
        printf("Enter %s's number of matches:",array[i].name);
        scanf("%d",&array[i].match);
        printf("Enter %s's total run:",array[i].name);
        scanf("%d",&array[i].run);
        array[i].avgrun=(float)array[i].run/array[i].match;
        getchar();
    }
    for(int i=0;i<5;i++)
    {
        printf("Cricketers name: %s\n",array[i].name);
        printf("Age: %d\n",array[i].age);
        printf("Total run: %d\n",array[i].run);
        printf("Total Match: %d\n",array[i].match);
        printf("Average run: %f\n",array[i].avgrun);
    }
    return 0;
}
*/

/* Assigning one structure into another:
#include<stdio.h>
#include<string.h>
typedef struct{
    int hp;
    char name[15];
}pokemon;
int main()
{
    pokemon a,b;
    a.hp=100;
    strcpy(a.name,"Pikachu 111");
    
    printf("HP of a:%d",a.hp);
    printf("\nname of a:%s",a.name);
    b=a;  // assigning all inputs of a in b
    printf("\nHP of b:%d",b.hp);
    printf("\nname of b:%s",b.name);
    return 0;
}
*/

/* Creating two date structure and comparing them:
#include<stdio.h>
typedef struct{
    int day;
    int month;
    int year;
}date;
int main()
{
    date d1,d2;
    d1.day=6;
    d1.month=8;
    d1.year=2005;
    
    d2.day=6;
    d2.month=7;
    d2.year=2005;
    if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year) printf("Equal.");
    else printf("Not equal");
    return 0;
}
*/