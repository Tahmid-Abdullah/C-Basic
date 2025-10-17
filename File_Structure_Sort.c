#include<stdio.h>
#include<string.h>

struct student{
    char name[30];
    char dept[20];
    int id;
    double cgpa;
};
typedef struct student Student;


int main()
{
    FILE *fp,*fpSort;
    Student StuData[10],temp;
    int i,j,n,data;

    if((fp= fopen("Students.txt","r"))==NULL)
    {
        printf("Students file can not be opened.");
        return 1;
    }

      char r[30];
      i=0;
      while (1) {
            fgets(StuData[i].name,30,fp);
            if(feof(fp))break;
            fscanf(fp,"%s %d %lf",StuData[i].dept,&StuData[i].id,&StuData[i].cgpa);
            //printf("%s%s\n%d\n%0.2lf\n",StuData[i].name,StuData[i].dept,StuData[i].id,StuData[i].cgpa);
            fgets(r,30,fp);
            i++;
        }
        n = i;

        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                //if(StuData[i].cgpa<StuData[j].cgpa)
                if(strcmp(StuData[i].name,StuData[j].name)>0)
                {
                    temp = StuData[i];
                    StuData[i] = StuData[j];
                    StuData[j] = temp;
                }

       if((fpSort = fopen("StudentsSortName.txt","w"))==NULL)
       {
        printf("Students Sorted file can not be opened.");
        return 1;
       }

       for(i=0;i<n;i++)
           fprintf(fpSort,"%s%s\n%d\n%0.2lf\n",StuData[i].name,StuData[i].dept,StuData[i].id,StuData[i].cgpa);


      fclose(fp);
      fclose(fpSort);
}
