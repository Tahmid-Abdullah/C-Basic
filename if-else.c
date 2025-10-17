/* Even or odd check using if else

#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("The number %d is even",num);
    }
    else
    {
        printf("The number %d is odd",num);
    }
    return 0;
}

*/

/* leap-year check:
#include<stdio.h>
int main()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if (y%4==0 || y%400==0)
    {
        if (y%100!=0)
        {
            printf("The year %d is a leap year",y);
        }
        else
        {
         printf("The year %d is not a leap year",y);
        }
        
    }
    else
    {
        printf("The year %d is not a leap year",y);
    }
}
*/

/* absolute value:
#include<stdio.h>
int main()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);
if (y<0)
{
    printf("The absolute value of %d is %d",y,y*(-1));
}
else
{
    printf("The absolute value is %d",y);
}

    return 0;
}
*/

/* profit or loss:
#include<stdio.h>
int main()
{
    float c,p;
    printf("Enter the cost of the product:");
    scanf("%f",&c);
    printf("Enter the price of the product:");
    scanf("%f",&p);

   if (c>p)
    {
        printf("Loss incurred of %f$",c-p);
    }
    else if (p>c)
    {
        printf("Profit made of %f$",p-c);
    }
    else
    {
        printf("Price is equal to the cost");
    }

    return 0;
}

*/

/* Comparing area and perimeter of a rectangle:

#include<stdio.h>
int main()
{
    float l,w;
    printf("Enter the lenght:");
    scanf("%f",&l);
    printf("Enter the width::");
    scanf("%f",&w);
    float a,p;
    a=l*w;
    p=(l+w)*2;
 if (a>p)
 {
    printf("The area (%.3f) is greater than the perimeter (%.3f)",a,p);
 }
 else if (a<p)
 {
    printf("The perimeter (%.3f) is greater than the area (%.3f)",p,a);
 }
else
{
    printf("Area and the perimeter are the same.");
} 

    return 0;
}
*/

/* checking number is 3 digit or not:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=100 && n<=999)
    {
        printf("The number is a 3 digit number");  
    }
    else
    {
        printf("The the number is not a 3 digit number.");
    }
    return 0;
}
*/

/* find if a number is divisble by 5 or 3 but not divisble by 15:
#include<stdio.h>
int main()
{
   int x;
   printf("Enter an integer:");
   scanf("%d",&x);
   if(x%5==0)
   {
    if(x%15 !=0 )
    {
        printf("The number is divisble by 5 but not by 15");
    }
   }
   if (x%3==0)
   {
    if(x%15 !=0 )
    {
        printf("The number is divisble by 3 but not by 15");
    }
   }
   if(x%5==0 || x%3==0)
   {
     if(x%15==0)
     {
        printf("Divisble by 3,5 and 15");
     }
   }
   else
   {
    printf("This number is neither divisble by 5 or 3 and not divisble by 15");
   }
    return 0;
}
*/

