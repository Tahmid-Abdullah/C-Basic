#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",n);
    int power=pow(n,3);
    printf("\nThe cube of the given number is:%d",power);
    return 0;
}
