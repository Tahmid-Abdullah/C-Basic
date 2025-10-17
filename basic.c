/*
#include<stdio.h>
int main()

{
    int x,y;
    printf("Enter 2 numbers:");
    scanf("%d %d",&x,&y);              #Taking two ingtegers and printing them
    printf("%d,%d",x,y);
    return 0;
}
*/
/*
//char basics:
#include<stdio.h>
int main()
{
    char x= 'A';
    printf("%c",x);  //Prints the character
    printf("\n%d",x);  //Prints he ascii value of the character

    return 0;
}
*/

/* Data types and their size:
#include<stdio.h>
int main()
{
    int a; float b; char c; double d;
    printf("%d",sizeof(a));
    printf("\n%d",sizeof(b));
    printf("\n%d",sizeof(c));
    printf("\n%d",sizeof(d));
   
    // There are modifier data types for int: 
    // short (-32768 to 32767)
    // long
    // signed
    // unsigned
    
    return 0;
}
*/

/*
// ternary operators:
#include<stdio.h>
int main()
{
    // condition ? code1(prints when condition is true) : code2(prints when condition is false)
    int x;
    printf("Enter a numbers:");
    scanf("%d",&x);
    x%2==0 ? printf("Even number.") : printf("odd number.");
    return 0;
}
*/

// boolean data type:
// written as bool x = n;  boolean has/store 2 types of value: true (1) or false (0)
/*
#include<stdio.h>
int main()
{
  int x = 5;
  printf("%d",x==10); // because x is not 10, it will print 0 which means false
  return 0;
}
*/
/* print a number in reverse using loops:
#include <stdio.h>

int main()
{
    int n;
    printf("Num:");
    scanf("%d",&n);
    
    while(n>0)
    {
        printf("%d ",n%10);
        n=n/10;
    }
    return 0;
}
*/
 
// using header file <limits.h>, we can find the max and min number any data type can store. ex: INT_MIN prints lowest value int can store