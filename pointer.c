// pointers are variable that stores the address of another variable
// storing an address in a pointer: int* x = &a (storing address of variable a in pointer c)

/* Printing address of a variable:
#include<stdio.h>
int main()
{
  int a=6;
  printf("%p",&a);  // %p prints the address of any variable
return 0;
}
*/

/* printing the address of a variable using pointer and the address of the pointer:
#include<stdio.h>
int main()
{
    int a=5;
    int* x=&a;
    printf("%p",x); // printing the address of a;
     printf("%p",&x); // printing the address of x(the pointer)
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a=5;
    int* x=&a;
    printf("%d",*x); // printing the value inside of of the variable(a) whose address is saved inside pointer x;
    *x =7;   // changing the value of the variable whose address is saved inside a pointer(x)
    printf("\n%d",a);    // printing the new value of a
    printf("\n%d",*x);    // printing the new value of the variable saved inside pointer x;
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
int a=25;
int* x=&a;
int** y= &x; // saving the address of a pointer in another pointer
printf("%d",**y); // printing the  value of the variable saved inside pointer x which is saved inside pointer y;
return 0;
}
*/

/* swap two numbers using pointers:
#include<stdio.h>
void swap(int* x, int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    int* x=&a;
    int* y=&b;
    swap(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}
*/
