#include <stdio.h>
#include "header.h"
void profile()
{   int i,j;

    FILE * fp;
    fp=fopen("myfile.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open storing file");
        exit(1);
    }
    for(i=0;i<4;i++)
    {
        printf("For students of year %d:\n",i+1);
        for(j=0;j<2;j++)
        {
        printf("Enter name:");
        fgets(inf[i][j].name,20,stdin);
        fprintf(fp,"%s",inf[i][j].name);

        printf("Enter address:");
        fgets(inf[i][j].address,80,stdin);
        fprintf(fp,"%s",inf[i][j].address);

        printf("Enter roll:");
        fgets(inf[i][j].roll,9,stdin);
        fprintf(fp,"%s \n",inf[i][j].roll);

        printf("Enter registration number:");
        scanf("%d",&inf[i][j].regno);
        fprintf(fp,"%d \n",inf[i][j].regno);

        getchar();

        }
    }
    fclose(fp);


}
