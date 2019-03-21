#include<stdio.h>

void menu()
{
    char ch;
    printf("Enter your choice:\n");
    printf("For profiling press p");
    ch = getche();
    if(ch=='p')
    {
        profile();
    }
}
