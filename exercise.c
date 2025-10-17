/** Printing float division without float variable:
#include<stdio.h>
int main()
{
    int x;
    int y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);

    int z=x/y;
    int v=((x%y)*10)/y;
    printf("%d.%d",z,v);
    return 0;
}
**/

/*
Area of a circle:

#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    float area=PI*pow(r,2);
    printf("%.2f",area);
    return 0;
}
*/

/* Percentage of average score in 40:

#include<stdio.h>
int main()
{
  float x,y,z,v;
  printf("Enter your numbers:"); // <=40
  scanf("%f%f%f%f",&x,&y,&z,&v);
  printf("%f",x);
  printf("\n%f",y);
  printf("\n%f",z);
  printf("\n%f",v);

  float b = (((x+y+z+v)/4)/40)*100;
  printf("\n%.3f",b);
    return 0;
}
*/

/* printing fractional part of a float:
#include<stdio.h>
int main()
{
    float x;
    printf("Enter a floating number:");
    scanf("%f",&x);
    int y = x;
    printf("%d",y);
    float c= x-y;
    printf("\nThe fractional part is:%.2f",c);
    return 0;
}
*/


/* printing the max number:
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 integers:");
    scanf("%d%d%d",&x,&y,&z);
  if (x>y && x>z)
  {
    printf("%d is the maximum here.",x);
  }
  else if (y>x && y>z)
  {
    printf("%d is the maximum here.",y);
  }
  else
  {
    printf("%d is the maximum here.",z);

  }
    return 0;
}
*/

/* checking if 3 value can be side of a triangle:
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of the sides:");
    scanf("%d%d%d",&a,&b,&c);

    if (a+b>c && b+c>a && a+c>b)
    {
        printf("%d,%d,%d are sides of a triangle.",a,b,c);
    }
    else
    {
        printf("%d,%d,%d are not sides of a triangle.",a,b,c);

    }
}
*/

/*  program that checks 3 cartesian points are on the same line:
#include<stdio.h>
int main()
{
  int x,y,a,b,m,n;
  printf("Enter the first point(x1,y1):");
  scanf("%d%d",&x,&y);
  printf("Enter the second point(x2,y2):");
  scanf("%d%d",&a,&b);
  printf("Enter the third point(x3,y3):");
  scanf("%d%d",&m,&n);

  float s1= (b-y)/(a-x);
  float s2= (n-b)/(m-a);
  float s3= (n-y)/(m-x);

  if (s1==s2 && s2==s3)
  {
    printf("(%d,%d),(%d,%d),(%d,%d) are on the same line",x,y,a,b,m,n);
  }
  else
  {
  printf("(%d,%d),(%d,%d),(%d,%d) are not on the same line",x,y,a,b,m,n);
  }
  return 0;
}
*/

/* program to check if its on x/y axis or in the origin:
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the point:");
  scanf("%d%d",&x,&y);
  if (x!=0 && y!=0)
  {
    printf("The point is in a quadrant");
  }
  else if (y==0 && x!=0)
  {
    printf("The point is on x-axis");
  }
  else if (x==0 && y!=0)
  {
    printf("The point is on y-axis");
  }
  
  else{
    printf("The point is in the origin");
  }
  return 0;
}
*/

/* Table of 19:
#include<stdio.h>
int main()
{
  for(int i=9;i<=90;i=i+9)
  {
    printf("%d ",i);
  }
  return 0;
}
  
*/

/* Table of 19:
#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  for(int i=1;i<=10;i++)
  {
    {
      printf("%d x %d = %d\n",x,i,x*i);
    }

  }
  return 0;
}
*/

/* print odd terms upto n:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the last term :");
  scanf("%d",&n);
  for (int i = 1; i <= n; i++)
  {
  if (i%2!=0)
  {
    printf("%d ",i);
  }
 }
  return 0;
}
*/

/* print 4,7,10,.... upto n-th index:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of term/index :");
  scanf("%d",&n);
  int a=4;
  for (int i = 1; i <= n; i++)
  {
    printf("%d ",a);
    a=a+3;
  }
  return 0;
}
*/

/* print 1,2,4,8,16:
#include<stdio.h>
int main()
{
  
for (int i = 1; i <= 16; i=i*2)
{
  printf("%d ",i);
}

  return 0;
}
*/

/* print 1,2,4,8,16 upto n-terms::
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of term/index :");
  scanf("%d",&n);
  int a=1;
for (int i = 1; i <= n; i++)
{
  printf("%d ",a);
  a = (a * 2) ;
}

  return 0;
}
*/

/* display 100,97,94.... upto last positive number:
#include<stdio.h>
int main()
{
  for (int i = 100; i >=0; i=i-3)
  {
    printf("%d ",i);
  }
  
  return 0;
}
*/

/* 100,50,25,12.5.... upto n-th term::
#include<stdio.h>
int main()
{
  int n;
  printf("Number of terms:");
  scanf("%d",&n);
  float a=100;
    for (int i=1; i<=n; i++)
  {
    printf("%.2f ",a);
    a=a/2;
  }
  

  return 0;

}
*/

/* a program that checks if a number is prime or not:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number to check:");
  scanf("%d",&n);
  int prime=1;
  for (int i = 2; i<=n-1; i++)
  {
    if(n%i==0)
    {   
       prime = 0;
      break;
    }

  }
  if (n==1)
  {
    printf("1 is neither prime nor composite");
  }
  
  else if (prime==0)
  {
    printf("%d is not a prime number.",n);
  }
  else
  {
    printf("%d is a prime number.",n);
  }
  return 0;
}
*/

//////// while loops:    

/* while loop to print from 1 to n:
#include<stdio.h>
int main ()
{
  int n;
  printf("Enter your range:");
  scanf("%d",&n);
  int i=1;
  while (i<=n)
  {
    printf("%d ",i);
    i++;
  }
  
  return 0;
}
*/

/*
 /print all the even digits of a number:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  while (n>0)
  { 
    if ((n%10)%2!=0)
    {
     n=n/10;     
     continue;
    }
    else{
           printf("%d ", n%10);
    n=n/10;
    }
 
    
  }
  
  
  return 0;
}

//There is a slight problem in the code above is that it prints the even digits in reverse and also prints 0.
*/

/* print the sum of 1-2+3-4+.... upto n-term:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter number of terms:");
  scanf("%d",&n);
  int sum=0;
  for (int i = 1; i <= n; i++)
  {
    if(i%2!=0)      
    {
      sum=sum+i;
    }
    else
    {
      sum=sum-i;
    }
    // Instead of loop we can also write:
    // if(n%2==0)
    // { sum=-n/2;}
    // else{ sum=-n/2+n ;}
    // it will make the code more efficient.
    // 
  }
  printf("The answer is:%d",sum);
  return 0;
}
*/

/* factorial of n:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int f=1;
  for (int i = 1; i <= n; i++)
  {
    f=f*i;
  }
  printf("The factorial of %d is %d",n,f);
  return 0;
}
*/

/* print the factorial of 1 to n:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int f=1;
  
  for (int i = 1; i <= n; i++)
  {
    f=f*i;
    printf("The factorial of %d is %d\n",i,f);

  }
  
  return 0;
}
*/

/* n-th fibonacci term:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter number of terms:");
  scanf("%d",&n);
  int sum=1;
  int a=1; int b=1;
  for (int i = 1; i <= n-2; i++)
  {
    sum=a+b;
    a=b; b=sum;
  }
  printf("The %d-th fibonacci number is %d",n,sum);
  return 0;
}
*/

/* printing the fibonacci from 1 to n:
#include<stdio.h>
int main()
{
  int n;
  printf("Enter number of terms:");
  scanf("%d",&n);
  int sum=1;
  int a=0; int b=1;
  for (int i = 1; i <= n; i++)
  {
    printf("The %d-th fibonacci number is %d\n",i,a);
    sum=a+b;
    a=b; b=sum;

  }
 
  return 0;
}
*/

/*check for armstrong number:
#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  printf("Enter the range:");
  scanf("%d",&n);
  int sum=0;
  int p=0;
  int a=n;
  int digit=0;
  while (n!=0)
  {
    digit++;
    n=n/10;
  }
  
  n=a;
while (n!=0)
{
  p=n%10;
  sum=sum+pow(p,digit);
  n=n/10;
}
if (sum==a)
{
  printf("Armstrong");
}
else
{
  printf("Not Armstrong");
}
  return 0;
}
*/ 

/* take 10 user input and add only the postivite ones:

#include<stdio.h>
int main()
{
  double num,sum=0.0;
  for (int i = 1; i <=10; i++)
  {
    double n;
    printf("Enter a number:");
    scanf("%lf",&n);
    if (n>=0)
    {
      sum=sum+n;
    }
    else
    {
      continue;
    }
    
  }
  printf("The sum is %.3lf",sum);
  return 0;
}

*/

/* checking perfect numbers:(6=1+2+3)
#include<stdio.h>
int main()
{
  int n,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for (int i = 1; i <n; i++)
  {
    if (n%i==0)
    {
      sum=sum+i;
    }
    else
    {
      continue;
    }
  }
  if(sum==n)
  {
    printf("%d is a perfect number.",n);
  }
  else
  {
    printf("%d is not a perfect number.",n);
 
  }
  return 0;
}

*/ 

/* take input until user put 0 and then print the sum:
#include<stdio.h>
int main()
{
  int n,sum=0;
  while (n!=0)
  {
    printf("Enter an integer:");
    scanf("%d",&n);
    sum=sum+n;
  }
  printf("The sum is:%d",sum);
  return 0;
}

*/

/* perfect number between 1 to n:

#include<stdio.h>
int perfectnum(int n)
{
  int sum=0;
  for (int i = 1; i <= n-1; i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
    else
    {
      continue;
    }
  }

  
  return sum ;
}
int main()
{
  int a;
  printf("Enter a range:");
  scanf("%d",&a);
  int sum=0;
  for (int i = 1; i <=a; i++)
  {
     sum = perfectnum(i);
    if (sum==i)
    {
      printf("%d is a perfect number.\n",i);
    }
    else
    {
      continue;
    }
  }
  
  return 0;
}
*/

/* printing first n- prime numbers:
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int n;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
*/

/* Counting least number of note needed:
#include<stdio.h>
int main()
{
	int x;
	int c1000=0,c500=0,c200=0,c100=0,c50=0,c20=0,c10=0,c5=0,c2=0,c1=0;
    int temp;
	printf("Enter amount:");
	scanf("%d",&x);
	temp=x;
	if(x<=0) printf("Invalid Amount.");

	while(x>=1000) {
		x=x-1000;
		c1000++;
	}
	//x = temp - (c1000*1000);
	while(x>=500) {
		x=x-500;
		c500++;
	}
	//x= temp - (c1000*1000) - (c500*500);
	while(x>=200) {
		x=x-200;
		c200++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200);
	while(x>=100) {
		x=x-100;
		c100++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100);
	while(x>=50) {
		x=x-50;
		c50++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100)-(c50*50);
	while(x>=20) {
		x=x-20;
		c20++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100)-(c50*50)-(c20*20);
	while(x>=10) {
		x=x-10;
		c10++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100)-(c50*50)-(c20*20)-(c10*10);
	while(x>=5) {
		x=x-5;
		c5++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100)-(c50*50)-(c20*20)-(c10*10)-(c5*5);
	while(x>=2) {
		x=x-2;
		c2++;
	}
	//x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100)-(c50*50)-(c20*20)-(c10*10)-(c5*5)-(c2*2);
    while(x==1){
        x=x-1;
        c1++;
    }
    //x= temp - (c1000*1000) - (c500*500)-(c200*200)- (c100*100)-(c50*50)-(c20*20)-(c10*10)-(c5*5)-(c2*2)-(c1*1);

printf("The amount of notes needed:\n");
printf("1000 taka note:%d\n",c1000);
printf("500 taka note:%d\n",c500);
printf("200 taka note:%d\n",c200);
printf("100 taka note:%d\n",c100);
printf("50 taka note:%d\n",c50);
printf("20 taka note:%d\n",c20);
printf("10 taka note:%d\n",c10);
printf("5 taka note:%d\n",c5);
printf("2 taka note:%d\n",c2);
printf("1 taka note:%d\n",c1);


	return 0;
}
*/

/*
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to calculate binomial coefficient (nCr)
int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int space = 0; space < rows - i - 1; space++)
            printf("  ");

        // Print values
        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    
    printPascalsTriangle(rows);
    return 0;
}

*/

/* Finding GCD:
#include<stdio.h>
int min(int a,int b)
{
    if(a>b) return b;
    else return a;
}
int gcd(int x,int y)
{
    int hcf;
    for(int i=min(x,y);i>=1;i--)
    {
        if(x%i==0 && y%i==0){
        hcf=i;
        break;}
    }
  return hcf;
}

int main()
{
int a,b;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);

printf("Common factors of %d:",a);
for(int i=1;i<=a;i++)
{
  if(a%i==0)printf("%d ",i);
}
printf("\nCommon factors of %d:",b);
for(int i=1;i<=b;i++)
{
  if(b%i==0)printf("%d ",i);
}

int hcf= gcd(a,b);
printf("\nHighest common factor of %d and %d :%d",a,b,hcf);

return 0;
}              
*/

/* fibonacci upto a-terms:
#include<stdio.h>
int fib(int a)
{   
    int x=0,y=1,t;
    printf("%d ",x);
    for(int i=1;i<=a;i++)
    {
        printf("%d ",y);
        t=x+y;
        x=y;
        y=t;
    }
} 
int main()
{
    int a;
    scanf("%d",&a);
    printf("First %d fibonacci numbers:",a);
    fib(a);
    return 0;
}
*/

/* n to 1 to n using recursion:
#include<stdio.h>
void decrease(int n)
{
    while(n==0) return;
    printf("%d ",n);
    decrease(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    decrease(n);
    return 0;
}
*/

/* prints m to n(reverse of n to m)
#include<stdio.h>
void decrease(int n,int m)
{
    if(n>m) return;
    decrease(n+1,m);
    printf("%d ",n);
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    decrease(n,m);
    return 0;
}
*/

/* Navigation:
#include<stdio.h>
int main()
{
    float a,b,x=0,y=0;
    char c;

    while(1){
        printf("Enter direction:(N,S,E,W)(0 to exit)");
        scanf(" %c",&c);
        if(c=='0'){
        break;
        }
        if(c!='N' && c!='S' && c!='E' && c!='W'){
            printf("Invalid Direction.\n");
            continue;
        }
        
        
       switch(c)
       {
           case 'N':
           printf("Enter y:");
        scanf(" %f",&b);
           y=y+b;
           break;
           case 'S':
           printf("Enter y:");
        scanf(" %f",&b);
           y=y-b;
           break;
           case 'E':
           printf("Enter x:");
        scanf(" %f",&a);
           x=x+a;
           break;
           case 'W':
           printf("Enter x:");
        scanf(" %f",&a);
           x=x-a;
           break;
       }
        
    }
    printf("Distance from Center is %f %f",x,y);
    return 0;
}
*/

/* printing first and last digit:
#include<stdio.h>
int main()
{
    int n,fd,count=0;
    scanf("%d",&n);
    fd=n;
    int ld = n%10;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    //printf("%d",count);
    for(int i=1;i<count;i++)
    {
      fd=fd/10;
    }
    printf("First and Last digits are: %d , %d",fd,ld);
    return 0;
}
*/

/*Optimized prime number:
#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0) {
            flag=0;
            break;
        }
        else flag=1;
    }
    if(flag==1) printf("%d is a prime number.",n);
    else printf("%d is not a prime number.",n);
    return 0;
}
*/

/*palindrome check:
#include<stdio.h>
int main()
{
	int n,t,temp,count=0,s=0;
	scanf("%d",&n);
	t=n;
	temp=n;
	while(n>0)
	{
		count++;
		n=n/10;
	}
	for(int i=1; i<=count;i++)
	{
		s=s*10+(t%10);
		t=t/10;
	}
	printf("Reversed number is %d",s);
    if(temp==s) printf("\n%d is a palindrome number",temp);
    else printf("\n%d is not a palindrome number",temp);
	return 0;
}
*/

/* Print the inputted number in word
#include<stdio.h>
int rev(int n)
{
    int a=0;
    while(n>0)
    {
        a=a*10+(n%10);
        n=n/10;
    }
    return a;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    n=rev(n);
    while(n>0)
    {
        a=n%10;
        switch(a){
        case 1: printf("One ");
            break;
        case 2: printf("Two ");
            break;
        case 3: printf("Three ");
            break;
        case 4: printf("Four ");
            break;
        case 5: printf("Five ");
            break;
        case 6: printf("Six ");
            break;
        case 7: printf("Seven ");
            break;
        case 8: printf("Eight ");
            break;
        case 9: printf("Nine ");
            break;
        case 10: printf("Ten ");
            break;
        }
        n=n/10;
    }
}
*/

/* C code that prints the max and min element is a matrix and their indexes:
#include <stdio.h>
#include <limits.h>

void maxelement(int r, int c, int mat[r][c], int *max, int *max_i, int *max_j)
{
    *max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (*max < mat[i][j])
            {
                *max = mat[i][j];
                *max_i = i;
                *max_j = j;
            }
        }
    }
}

void minelement(int r, int c, int mat[r][c], int *min, int *min_i, int *min_j)
{
    *min = INT_MAX;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (*min > mat[i][j])
            {
                *min = mat[i][j];
                *min_i = i;
                *min_j = j;
            }
        }
    }
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Matrix element[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    puts("Matrix:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    int max, min, max_i, max_j, min_i, min_j;

    maxelement(r, c, matrix, &max, &max_i, &max_j);
    minelement(r, c, matrix, &min, &min_i, &min_j);

    printf("Max element: %d at position [%d][%d]\n", max, max_i + 1, max_j + 1);
    printf("Min element: %d at position [%d][%d]\n", min, min_i + 1, min_j + 1);

    return 0;
}

*/

/* Printing the product with the latest manufacturing date and the product withhighest price after 15% discount:
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[50];
    int id;
    float price;
}product;
void applyDiscount(product array[])
{
    int index=0;
    for(int i=0;i<3;i++)
    {for(int j=i+1;j<3;j++){
       if((array[i].price*0.85)<(array[j].price*0.85))
       index=j;
    }
    }
    printf("Most expensive after discount:\n");
    printf("Name: %s\n",array[index].name);
    printf("id: %d\n",array[index].id);
    printf("Price after discount: %f",(array[index].price*0.85));
    
    return;
}
int main()
{
    product array[3]={{"Laptop",1,99.50},{"Mobile",2,59.00},{"Earphone",3,30.00}};
    
    applyDiscount(array);
    
    return 0;
}
*/