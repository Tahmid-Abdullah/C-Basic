#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char ch,src[20],dest[20];
    int size=0;
    printf("Enter source file name: ");
    scanf("%s",src);
    printf("Enter destination file name: ");
    scanf("%s",dest);
    if((fp1 = fopen(src,"r"))== NULL)
    {
        printf("Source file can not be opened.");
        return 1;
    }
    if((fp2 = fopen(dest,"w"))== NULL)
    {
        printf("Destination file can not be opened.");
        return 1;
    }

    while(1)
    {
        ch = fgetc(fp1);
        if(feof(fp1))break;
        fputc(ch,fp2);
        size++;
    }
    printf("File has been copied successfully. File Size: %d Bytes.\n",size);

    fclose(fp1);
    fclose(fp2);
}
