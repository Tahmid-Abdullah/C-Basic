// function makes code more readable, avoids repetetion of certain codes
// function is usually defined outside the int main() function

/*
#include<stdio.h>

void func()                                          // creating a function
{       
    printf("First line of this function\n");    
    printf("Second line of this function\n");

    return;     // marks the end of the function
}

int main()
{
    func();  // calling for a function to be executed
    func();  // calling for a function to be executed again
    return 0;
}
*/
// we can also call for an external function inside a loop or if-else statements

/* nested functions:
#include<stdio.h>
void func3()
{
    printf("Here are the answer!!\n");
    
    return;
}
int sub(int a,int b)
{
    int sub=a-b;
    printf("Diff:%d",sub);
    return sub;
}
int add(int a,int b)
{
    func3();                         // very important first task*********
    int sum= a+b;
    printf("Sum:%d\n",sum);
    sub(a,b);
    return sum; 
}

int main()
{ 
    int x,y;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);
    add(x,y);

    return 0;
}
*/

/* combination:
#include<stdio.h>
#include<math.h>
int factorial(int a)
{
    int x=1;
    for (int i = 1; i <= a; i++)
    {
        x*=i;
    }
    return x;
}
int combination(int n,int r)
{
    if(r<0||n<0||r>n)
    {
        printf("Invalid Input. n,r>0 and n>r");
        return -1;
    }
    
        int facofn= factorial(n);
        int facofr= factorial(r);
        int facofn_r= factorial(n-r);
        int ncr= (facofn)/(facofr*facofn_r);

            printf("\nFactorial of n:%d",facofn);
            printf("\nFactorial of r:%d",facofr);
            printf("\nFactorial of n-r:%d",facofn_r);
            printf("\nCombination(%d,%d): %.4f",n,r,(float)ncr);
    
    return ncr;
}
int main()
{
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    combination(n,r);
    return 0;
}

*/


