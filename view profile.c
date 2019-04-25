#include <stdio.h>
#include "header.h"
void view_profile()
{
    FILE * fp;
    fp = fopen("myfile","r");
    if(fp==NULL)
    {
        printf("Sorry cannot open storage file.");
        exit(1);
    }


}
