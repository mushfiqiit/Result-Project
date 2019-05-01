#include <stdio.h>
#include "header.h"
#include <string.h>
 void search1()
 {
     char roll[9],unused,waste[10];
     int year,sem,i,j,k=0,l;
     FILE * fp;
     printf("\nEnter roll (BSSE****): ");
     fgets(roll,sizeof(roll),stdin);
     year = 11 - ((roll[4]-48)*10+(roll[5]-48));
     roll[8]='\n';
     roll[9]='\0';
     if(year==0)
     {
         fp = fopen("resultyear1.txt","r");
         if(fp==NULL)
         {
             printf("Cannot find result");
             exit(1);
         }

         fscanf(fp,"%d",&sem);

         fscanf(fp,"%c",&unused);

        for(i=0;i<sem;i++)
        {
            fgets(student[year][i][k].roll,sizeof(student[year][i][k].roll),fp);
        //    fscanf(fp,"%c",&unused);

            for(j=0;j<6;j++)
            {
            fgets(student[year][i][k].course_code[j],sizeof(student[year][i][k].course_code[j]),fp);



            fscanf(fp,"%d",&student[year][i][k].mark[j]);
            fscanf(fp,"%c",&unused);

            fgets(student[year][i][k].grade[j],sizeof(student[year][i][k].grade[j]),fp);

            fscanf(fp,"%f",&student[year][i][k].gp[j]);
            fscanf(fp,"%c",&unused);


            }

            fscanf(fp,"%f",&student[year][i][k].gpa);
            fscanf(fp,"%c",&unused);

            fscanf(fp,"%d",&student[year][i][k].semester);
            fscanf(fp,"%c",&unused);

        }

        fclose(fp);


     /*     for(i=0;i<sem;i++)
        {
            printf("%s",student[0][0][k].roll);

            for(j=0;j<6;j++)
            {
            printf("%s",student[year][i][k].course_code[j]);
            }
        } */

        // Reading profiile
        fp = fopen("myfile.txt","r");
        if(fp==NULL)
        {
            printf("Cannot open profile file");
            exit(1);
        }
        for(i=0;i<4;i++)
            {
        for(j=0;j<2;j++)
        {
        fgets(inf[i][j].name,sizeof(inf[year][j].name),fp);
        fgets(inf[i][j].address,sizeof(inf[year][j].address),fp);
        fgets(inf[i][j].roll,sizeof(inf[year][j].roll),fp);
        fscanf(fp,"%d  ",&inf[i][j].regno);

        }
        }

    //Printing profile

        for(j=0;j<2;j++)
        {
        if(!strcmp(roll,inf[year][j].roll))
        {
            printf("Name : %s \n",inf[year][j].name);
            printf("Address: %s \n",inf[year][j].address);
            printf("Roll: %s \n",inf[year][j].roll);
            printf("Registration number: %d \n",inf[year][j].regno);

        }

        }

        fclose(fp);

        //Error Correction

        for(i=0;i<sem;i++)
        {
            for(j=0;j<6;j++)
            {

                for(l=0;student[year][i][k].course_code[j][l]=='\0';l++)
                {

                    printf("%d ",student[year][i][k].course_code[j][l]);
               // if(student[year][i][k].course_code[j][l+1]=='\0')
                   // {
                 //       student[year][i][k].course_code[j][l]='\0';
                 //       break;
                      // printf("%d",student[year][i][k].course_code[j][l]);

                }

                }

            }
            printf("Hello");


       for(i=0;i<sem;i++)
            {
        printf("Result for semester: %d\n\n",i+1);
        printf("Course Code \t Mark \t Grade \t GP \n");
        for(j=0;j<6;j++)
        {
            printf("%s \t  %d \t %s \t %f \n",student[year][i][k].course_code[j],student[year][i][k].mark[j],student[year][i][k].grade[j],student[year][i][k].gp[j]);
        }

        }
     }
     }

