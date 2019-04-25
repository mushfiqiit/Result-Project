#include<stdio.h>
#include<conio.h>
void menu()
{
    char ch;
    for(;;)
    {
    printf("Enter your choice:\n");
    printf("For profiling press p\n");
    printf("To view saved student profile press v \n");
    printf("Press q to quit");
    printf("\n");
    ch = getche();
    printf("\n");
    if(ch=='p')
    {
        profile();
    }
    else if(ch=='v')
    {
        view_profile();
    }
    else if(ch=='q')
    {
        printf("Glad to be at your service");
        exit(0);
    }
    else
    {
        printf("Please make a valid input \n");
    }
    }
}
