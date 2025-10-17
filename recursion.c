/*factorial using recursion:
#include<stdio.h>
int fact(int n)
{
    while(n<=1)    // setting the base case to 1(when n=1, function stops calling back)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Factorial of:");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial of %d is %d",n,f);
    return 0;
}
*/

/* n to 1 using recursion:
#include<stdio.h>
int printn(int n)
{
    while(n<=1) return 1;
    printf("%d ",n);
    return printn(n-1);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int j=printn(n);
    printf("%d",j);
    return 0;
}
*/

/* 1 to n using recursion:
#include<stdio.h>  
void printNumbers(int current, int n) {
    if (current > n) {
        return;
    }
    printf("%d ", current);
    printNumbers(current + 1, n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    printNumbers(1, n);
    return 0;   
}
*/

/* n to 1 using recursion:
#include<stdio.h>
int printn(int n)
{
    while(n==0) return 1;
    printn(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int j=printn(n);
    printf("%d",j);
    return 0;
}
*/

/* 1 to n but using code after function recall:
#include<stdio.h>
void printn(int n)
{
    while(n==0) return;
    printn(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printn(n);
    return 0;
}
*/

/* exponential using recursion:
#include<stdio.h>
int expon(int a,int b)
{
    if(b==0) 
        return 1;
    return a*expon(a,b-1);
}
int main()
{
    int a,b,p;
    printf("Enter base and power:");
    scanf("%d%d",&a,&b);
    p=expon(a,b);
    printf("%d",p);
    return 0;
}
*/

/* power of a number with more efficiency:
#include <stdio.h>
int powerlog(int a,int b)
{
    if(b==0) return 1;
    if(b%2==0){
    return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else return powerlog(a,b/2)*powerlog(a,b/2)*a;
}
int main()
{
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    printf("%d",powerlog(a,b));
    return 0;
}
*/

/* Printing n-th fibonacci num:
#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
*/

/* Stair path:
#include<stdio.h>
int ways(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return ways(n-1)+ways(n-2);
}
int main()
{
    int n;
    printf("Enter number of stairs:");
    scanf("%d",&n);
    printf("Number of ways:%d",ways(n));
    return 0;
}
*/