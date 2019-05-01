#include <stdio.h>
#include "header.h"
#include <conio.h>
void sear()
{
    char ch;
    printf("Press r to search by roll \n");
    ch = getche();
    if(ch=='r')
    {
        search1();
    }

}
