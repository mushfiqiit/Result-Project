#include <stdio.h>
#include "header.h"
void view_profile()
{
    int i,j;
    FILE * fp;
    char ch;

    fp = fopen("myfile.txt","r");

    if(fp==NULL)
    {
        printf("Sorry cannot open storage file.");
        menu();
    }


    for(i=0;i<4;i++)
    {
        printf("For year %d \n",i+1);
        for(j=0;j<2;j++)
        {
        fgets(inf[i][j].name,sizeof(inf[i][j].name),fp);
        fgets(inf[i][j].address,sizeof(inf[i][j].address),fp);
        fgets(inf[i][j].roll,sizeof(inf[i][j].roll),fp);
        fscanf(fp,"%d  ",&inf[i][j].regno);

         printf("%s%s%s\n%d \n",inf[i][j].name,inf[i][j].address,inf[i][j].roll,inf[i][j].regno);
        }
    }


}
