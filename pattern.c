//outer loop --> number of lines/rows
//inner loop --> number of columns
/* solid rectangle:

#include<stdio.h>
int main()
{
    int n;
    printf("Number of row and column:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*");
        
        }
         printf("\n");
    }
    return 0;
}

*/

/* print a rectangle with user row,column input:
#include<stdio.h>
int main()
{
    int n,m;
    printf("Number of row:");
    scanf("%d",&n);
    printf("Number of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("*");
        
        }
         printf("\n");
    }
    return 0;
}
*/

/* take input and print 1 to n in n lines:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        printf("%d",j);
      }
    printf("\n");
    }
    return 0;
}
*/

/* Right half star triangle

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("* ");
        
    }
    printf("\n");
}
}
*/

/* inverse right half triangle:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);

for(int i=n;i>=1;i--)
{
    for(int j=i;j>=1;j--)
    {
        printf("* ");
    }
    printf("\n");
}

}
*/

/*
1
12
123  print this pattern upto n:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

}
*/

/* inverse of the pervious:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
for(int i=n;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

}
*/

/* print odd numbers from 1 to n in n lines:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/
/* print right half triangle of odd number lines:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}
*/

/* prints n line and n rows of Upper case letters:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(char j=65;j<=65+n;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
*/

/* right half triangle of upper case letters:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char a=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
*/

/*right half number and alphabet triangle: 
// 1
// AB
// 123
// ABCD

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char a=65;
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%c",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/* a plus of * and # on the empty spaces: 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==((n/2)+1) || i==((n/2)+1))
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*A plus of * :
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==((n/2)+1) || i==((n/2)+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/* Hollow square :
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/* Cross / X:
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(i==j ||i+j==6)
           {
               printf("*");
           }
           else
          {
              printf(" ");
          }
        }
        printf("\n");
    }
    return 0;
}
*/

/* Floyds Triangle:
#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=i;j++)
    { 
        printf("%d ",a);
          a=a+1;  
    }

    printf("\n");
    }
    return 0;
}
*/ // To print this floyd triangle with odd numbers, a=a+2

/* Left half triangle from the right
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n||j==n||i+j>=n+1)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
Rhombus:
#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x*2-1;j++)
        {
        if(i+j>=x+1 && i+j<=x*2)
        {
            printf("*");
        }
        else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
*/

/* right triangle of rectangle printing: 
     A
    AB
   ABC
#include<stdio.h>
int main()
{      
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=n;j++)
        {
            if(i+j>=n+1)
            {
              printf("%c",ch);
              ch++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*Star pyramid:
#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for(int i = 1; i <= n; i++)
    {

        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
*/

/* Number pyramid:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=(i*2)-1;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}*/

/* Reverse pyramid:
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    

    for (int i = n; i >= 1; i--) 
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
*/


