#include<stdio.h>
#include<string.h>

typedef struct {
    char name[30];
    char dept[20];
    int id;
    double cgpa;
}Student;

int main()
{
    FILE *fp,*fpcse,*fpeee;
    Student Stu;

    if((fp= fopen("student.txt","r"))==NULL)
    {
        printf("Student file can not be opened.");
        return 1;
    }

    if((fpcse = fopen("cse.txt","w"))==NULL)
    {
        printf("CSE file can not be opened.");
        return 1;
    }
    if((fpeee = fopen("eee.txt","w"))==NULL)
    {
        printf("EEE file can not be opened.");
        return 1;
    }
    while(fscanf(fp,"%29s %19s %d %lf",Stu.name,Stu.dept,&Stu.id,&Stu.cgpa)==4)
    {
        if(strcmp(Stu.dept,"CSE")==0)
        fprintf(fpcse,"%s\n%s\n%d\n%f\n",Stu.name,Stu.dept,Stu.id,Stu.cgpa);
        else if(strcmp(Stu.dept,"EEE")==0)
        fprintf(fpeee,"%s\n%s\n%d\n%f\n",Stu.name,Stu.dept,Stu.id,Stu.cgpa);
    }

    fclose(fp);
    fclose(fpcse);
    fclose(fpeee);
    return 0;
}