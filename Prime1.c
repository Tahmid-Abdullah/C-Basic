
// Divides N by 2 to N-1

#include<stdio.h>

int main()
{
    int i,flag=1,div=0,num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("Number should be greater than 1\n");
        return 0;
    }

    for(i=2;i<num;i++)
    {
          div++;
          if(num%i==0)
            {
                flag=0;
                break;
            }
    }

    if(flag)
        printf("%d is Prime.\n",num);
    else printf("%d is not Prime.\n",num);

    printf("No of divisions required: %d\n",div);

    return 0;
}
