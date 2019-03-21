#include <stdio.h>
#include "header.h"
void profile()
{   int i;
    struct student inf[3];
    for(i=0;i<3;i++)
    {
        printf("Enter name:");
        fgets(inf[i].name,20,stdin);
        printf("Enter address:");
        fgets(inf[i].address,80,stdin);
        printf("Enter roll:");
        fgets(inf[i].roll,9,stdin);
        printf("Enter registration number:");
        scanf("%d",&inf[i].regno);
        getchar();

    }
}
