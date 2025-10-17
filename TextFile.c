#include<stdio.h>

int main()
{
    FILE *fp;
    int i,data,size;
    fp = fopen("data.txt","w+");
    if(fp==NULL)
    {
        printf("File can not be opened.");
        return 1;
    }

    for(i=100001;i<=100010;i++)
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
