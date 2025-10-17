// array is the collection of variables.
// int a[5] means array of size 5(which can store 5 different variable) is created.
// there can be array for any variable type

/*
#include <stdio.h>
int main()
{
   int a[5] = {2,3,4,5,6};
   float b[3]={1.2,3.4,5.6};
   char c[3]={'a','b','c'};
    printf("%d",a[2]);  // print the 2nd index of the array a
    a[1]=10;           // changes the value of index 1 to 10 from previous(3)
    
    printf("\n%d",a[1]);
     printf("\n%f",b[1]);
    printf("\n%c",c[1]);
    return 0;

    user input can also be taken as: scanf("%d",&a[n]) -> takes input for n-th index for array a
}
*/

/* Taking input for arrays amd outputting them using loops:
#include<stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/

/* Creating an array of n size and printing output in reverse after taking input:
#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

/*Taking input for students marks and printing roll with marks<35 (index are used ass roll numbers:)
#include <stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
    printf("Enter number for roll %d: ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("\nRolls with score under 35:\n");
    for(int i=0;i<10;i++)
    {
    if(arr[i]<35)
    {
        printf("%d ",i+1);
    }
    }
    return 0;
}
*/

/* Sum of all elements of an array:
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    printf("Sum is %d.",sum);
    return 0;
}
*/

/* maximum and minimum value of an array:
#include<stdio.h>
int main()
{
    int arr[7]={1,12,4,99,-8,18,32};
    int max,min;
    max = min = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("Max: %d Min: %d",max,min);
    return 0;
}
*/

/* Passing an array into a function:
#include<stdio.h>
void func(int arr[])   // Dont need to put the size of array while passing to a function
{
    arr[0]=10;
    return;
}
int main(){
   
    int arr[5]={1,2,3,4,5};
    printf("%d",arr[0]);
    func(arr);    // to call the function,use only the name of the array as parameter    
    printf("\n%d",arr[0]);
    return 0;
}
*/

/* in an array, change the value of odd indexed element to it's second multiple and even indexed to 10 increment
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=1;i<10;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        if(i%2!=0)
        {
            arr[i]*=2;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

/* Count number of elements in an array greater than an integer x:
#include<stdio.h>
int main()
{
    int x=5,count=0;
    int arr[10]={1,2,3,4,5,5,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        if(arr[i]>x)
        {
           count++;
        }
    }
    printf("There are %d elements greater than %d",count,x);
    return 0;
}
*/

/* counting elements greater than an integer in an array
#include <stdio.h>

int main()
{
   int arr[10]={3,6,9,21,34,10,55,45,100,12};
   int x=15,count=0;
   for(int i=0;i<10;i++)
   {
       if(x>arr[i]) count++;
   }
   printf("%d",count);
    return 0;
}
*/

/* Difference of sum of even indexed elements and odd indexed elements:
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int se=0,so=0;
    for(int i=0;i<10;i++)
    {
        if(i%2==0) so+=arr[i];
        else se+=arr[i];
    }
    printf("%d",se-so);
    return 0;
}
*/

/*counts pair of elements whose sum equal to an integer:
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=7,count=0;
    for(int i=0;i<10;i++)
    {
      for(int j=i+1;j<10;j++)
      {
          if(arr[i]!=arr[j] && arr[i]+arr[j]==x)
          {
          printf("(%d,%d)\n",arr[i],arr[j]);
          count++;
          } 
      }
    }
    printf("%d",count);
    return 0;
}
*/

/* counting triplets whose sum=x:
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=15,count=0;
    for(int i=0;i<10;i++)
    {
      for(int j=i+1;j<10;j++)
      {
          for(int k=j+1;k<10;k++)
          {
              if(arr[i]+arr[j]+arr[k]==x){
                 printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                 count++; 
              } 
          }
      }
    }
    printf("%d",count);
    return 0;
}
*/

/* printing second max number:
#include<stdio.h>
int main()
{
    int arr[5]={1,2,7,3,5};
    int max = arr[0],smax=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    printf("First max:%d",max);
    for(int i=0;i<5;i++){
        if(arr[i]>smax && arr[i]!=max) smax=arr[i];
    }
    printf("\nSecond max:%d",smax);
    return 0;
}
*/

/* more optimized version of second max:
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int max = arr[0];
    int smax =arr[0];
    for(int i=0;i<7;i++)
    {
        if(max<arr[i])
        {
            smax= max;
            max=arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max)
        {
        smax=arr[i];
        }
    }
    printf("%d,%d",max,smax);
    return 0;
}
*/

/* sorting in ascending order:
#include<stdio.h>
int main()
{
    int arr[10]={4,7,2,8,3,5,1,0,10,9};  int temp;
    for(int i=0;i<9;i++)
    {
        for (int j =i+1; j<10; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for(int i=0;i<10;i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}
*/
 
/* copy elements from array to another in reverse:
#include<stdio.h>
int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
     arr2[10-i-1]=arr1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
for (int i = 0; i < 10; i++){
      printf("%d ",arr2[i]);
    }
    
    return 0;
}
*/

/* Reverse array without extra array:
#include<stdio.h>
void reverse(int arr[])
{
    int i=0;
    int j=6;
    int temp;
    for(int i=0,j=6;i<j;i++,j--) // collective initialization and inc/decrement
    {
        temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
}
int main()
{
    int arr[7]={4,7,2,3,5,0,1};
    reverse(arr);
    for(int k=0;k<7;k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}
}
*/

/* Array palindrome check:
#include<stdio.h>
int main()
{
    int arr[6]={5,3,6,6,3,5};
    int flag=0;
    for(int i=0,j=5;i<=j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            flag=1;
            break;
        }
        else flag=0;
    }
    if(flag) printf("This array is not palinedrome");
    else printf("This array is palinedrome");
    return 0;
}
}
*/

/* Rotate array in k steps:
#include<stdio.h>
void reverse(int arr[],int a,int b)
{
    for(int i=a,j=b;i<=j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
}
int main()
{
    int k;
    printf("Enter number of rotation:");
    scanf("%d",&k);
    if(k>7) k=k%7;
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,0,6);
    reverse(arr,0,k-1);
    reverse(arr,k,6);
    for(int i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
*/

/* Searching for an element in an array print if found with index:
#include<stdio.h>
int main()
{
    int k=4;int flag=0;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   for(int i=0;i<10;i++)
   {
       if(arr[i]==k)
       {flag=1;
       printf("At Index:%d ",i);}
   }
   if(flag) printf("Found");
   else printf("Not found");
   return 0;
}
*/

/* Prints the missing one element in an array:
#include<stdio.h>
int main()
{
    int n;
    printf("Size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        printf("Enter Element indexed %d:",i);
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    sum1= (n*(n+1))/2; //printf("\n%d",sum1);
    for(int i=0;i<n-1;i++)
    {
        sum2=sum2+arr[i];
    }
    //printf("\n%d",sum2);
    printf("\nThe missing element is %d",sum1-sum2);
    return 0;
}
*/

/* Finds and print the duplicate element:
#include<stdio.h>
int main()
{
    int arr[10]={1,4,2,6,8,4,3,5,7,8};
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            printf("Duplicate element is %d\n",arr[i]);
        }
    }
    return 0;
}
*/

/* Finds the unique number:
#include<stdio.h>
#include<stdbool.h>  
int main()
{
    int arr[9] = {1, 3, 4, 2, 4, 5, 3, 2, 1};
    bool found = false;
    for(int i = 0; i < 9; i++)
    {
        bool isUnique = true;

        for(int j = 0; j < 9; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
        {
            printf("Unique number is: %d\n", arr[i]);
            found = true;
            break;
        }
    }

    if(!found)
    {
        printf("No unique number found.\n");
    }

    return 0;
}
*/

/* removing an element from an array:
#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n=5;
    int pos;
    printf("Enter position to remove (0-based index): ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the left
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }

    n--; // Decrease size

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/