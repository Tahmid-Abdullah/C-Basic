/* For loops (used when number of iteration is known)
#include<stdio.h>
int main()
{
      for (variable,condition,increment/decrement)
      {
         code ;
      }
    
    return 0;
}
*/

/* print hello world 5 times using for loop:
#include<stdio.h>
int main()
{
    for (int i = 1; i <=5; i++)
    {
       printf("Hello World!\n");
    }
    
    return 0;
}
*/

/* Print 1 to 100:
#include<stdio.h>
int main ()
{
    int n;
    for (int i = 1; i <=100 ; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
*/

/* print even numbers from 1 to 100:
#include<stdio.h>
int main()
{
    for (int i = 2; i <=100; i=i+2)
    {
      printf("%d ",i);
    }
    
    return 0;
}
// we can also use a nested if inside the for loop with a condition that prints only the even numbers
// we can also use a nested if inside the for loop with "continue" when i%2!=0 which will skip the odd numbers
*/

// operators:

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


/* print the number of digits in a number:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits are %d",count);
    return 0;
}
*/

/* prints the sum of the digit:

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
 while(n>0)
 {
     sum=sum+(n%10);
     n=n/10;
 }
 printf("sum is %d",sum);
    return 0;
}
*/

/* print the sum of all the even digits of a number:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int sum=0;
  while(n>0)
  {
   if ((n%10)%2==0)
   {
    sum= sum+(n%10);
    n=n/10;
   }
   else
   {
        n=n/10;
    continue;

   }
  }

  printf("The sum of the even digits is: %d",sum);
return 0;
}
*/

/* prints n lines with n columns of 1357.....n :
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j=j+=2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
*/

/* print reverse of a number and store it: 1234 to 4321 

#include<stdio.h>
int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a;
    int i=n;
    int r=0;
    while (n>0)
    {
        a= n%10;
        r= r*10+a;
        n=n/10;
       
    }
    
    printf("The inverse of the number %d is %d",i,r);


    return 0;
}
*/
/* Prints 1 to n in n lines:
#include<stdio.h>

int func(int r)
{
    for(int i=1;i<=r;i++)
    {
        printf("%d",i);
    }
}

int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    func(n);
    printf("\n");
    }
    return 0;
}
*/
