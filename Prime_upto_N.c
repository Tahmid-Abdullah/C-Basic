
// Generates prime numbers up to N

#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,flag,N,count=1;
    printf("This program generates prime number up to N.\n");
    printf("Enter the value of N(>=2): ");
    scanf("%d",&N);

    printf("2 ");

    for(i=3;i<=N;i+=2)
    {
        flag = 1;
        for(j=3;j<=sqrt(i);j+=2)
         {
            if(i%j==0)
            {
                flag=0;
                break;
            }
          }
        if(flag){
                printf("%d ",i);
                count++;
        }

    }
    printf("\nTotal prime numbers: %d\n",count);

    return 0;

}
