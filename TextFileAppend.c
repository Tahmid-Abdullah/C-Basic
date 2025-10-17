#include<stdio.h>

int main()
{
    FILE *fp;
    int i,data,size;
    fp = fopen("data.txt","a+");
    if(fp==NULL)
    {
        printf("File can not be opened.");
        return 1;
    }

    for(i=100011;i<=100015;i++)
        fprintf(fp,"%d ",i);

    fseek(fp,0,SEEK_SET);

      while (1) {
            fscanf(fp,"%d",&data);
            if(feof(fp))break;
            printf("%d\n",data);
        }
      fseek(fp,0,SEEK_END);
      size = ftell(fp);
      printf("File size: %d",size);
      fclose(fp);
}
