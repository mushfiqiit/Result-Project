#include <stdio.h>
#include "header.h"
void profile()
{   int i;
    struct student inf[3];
    FILE * fp;
    fp=fopen("myfile.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open storing file");
        exit(1);
    }
    for(i=0;i<3;i++)
    {
        printf("Enter name:");
        fgets(inf[i].name,20,stdin);
        fprintf(fp,"%s",inf[i].name);

        printf("Enter address:");
        fgets(inf[i].address,80,stdin);
        fprintf(fp,"%s",inf[i].address);

        printf("Enter roll:");
        fgets(inf[i].roll,9,stdin);
        fprintf(fp,"%s \n",inf[i].roll);

        printf("Enter registration number:");
        scanf("%d",&inf[i].regno);
        fprintf(fp,"%d \n",inf[i].regno);

        getchar();


    }
    fclose(fp);


}
