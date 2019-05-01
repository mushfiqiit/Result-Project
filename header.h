#include <stdio.h>
#include <stdlib.h>
void menu();
void profile();
void view_profile();
void input_result();
void sear();
void search1();

struct student
{
    char name[21];
    char address[81];
    char roll[10];
    int regno;
};
struct semester_result
{
    char roll[10];
    char course_code[6][9];
    int mark[6];
    char grade[6][3];
    float gp[6];
    float gpa;
    int semester;
};

struct student inf[4][2];
struct semester_result student[4][8][2];

