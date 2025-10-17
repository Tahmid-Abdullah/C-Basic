
// Divides N by 2, 3, 5, 7, up to sqrt(N)


#include<stdio.h>
#include<math.h>

int main()
{
    int i,flag=1,div=1,num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("Number should be greater than 1\n");
        return 0;
    }
    else if(num==2)
    {
        printf("2 is the first prime number\n");
        return 1;
    }

    else if(num %2 == 0)
             flag=0;

    else{

         for(i=3;i<=sqrt(num);i+=2)
         {
            div++;
            if(num%i==0)
            {
                flag=0;
                break;
            }
          }
        }

    if(flag)
        printf("%d is Prime.\n",num);
    else printf("%d is not Prime.\n",num);

    printf("No of divisions required: %d\n",div);

    return 0;

}
