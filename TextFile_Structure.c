#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int id;
    double cgpa;
};
typedef struct student Student;


int main()
{
    FILE *fp;
    Student Stu[] = {{"Faisal Ahmed",1234,3.82},{"Khaled Rahman",2345,3.23,},{"Nasif Latif",3678,3.45},
                     {"Monirul Islam",4098,3.91},{"Akhter Rahman",5285,3.67}};
    Student StuData[5];
    int i,n,data;

    fp = fopen("StudentRecord.txt","w+");
    if(fp==NULL)
    {
        printf("File can not be opened.");
        return 1;
    }
    for(i=0;i<5;i++)
        fprintf(fp,"%s\n%d\n%0.2lf\n",Stu[i].name,Stu[i].id,Stu[i].cgpa);

    printf("Data after reading from file.\n");

    fseek(fp,0,SEEK_SET);
      char temp[50];
      i=0;
      while (1) {
            fgets(StuData[i].name,50,fp);
            if(feof(fp))break;
            fscanf(fp,"%d %lf",&StuData[i].id,&StuData[i].cgpa);
            //n = strlen(StuData[i].name);
            //if(StuData[i].name[n-1]=='\n') StuData[i].name[n-1] = '\0';
            printf("%s%d\n%0.2lf\n",StuData[i].name,StuData[i].id,StuData[i].cgpa);
            fgets(temp,50,fp);
            i++;
        }

      fclose(fp);
}
