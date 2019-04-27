#include <stdio.h>
#include "header.h"
#include <string.h>
void input_result()
{
    int year,sem,i,j,k=0;
    float sum=0.00;
    FILE * fp;

    printf("Enter number of completed semesters:");
    scanf("%d",&sem);

    if(sem==0)
    {
        printf("No result can be input if the studenta have not finished a semester yet.");
        menu();
    }

    year=(sem-1)/2;

    if(year==0)
    {
        fp=fopen("resultyear1.txt","w");

        if(fp==NULL)
        {
            printf("Cannot open file.");
            menu();

        }

        fprintf(fp,"%d \n",sem);

          for(i=0;i<sem;i++)
        {
            printf("Input for semester %d:\n",i+1);
            if(i>0)
            {
                printf("Press enter to continue \n");
            }
            getchar();

            printf("Enter roll:");
            fgets(student[year][i][k].roll,sizeof(student[year][i][k].roll),stdin);
            fprintf(fp,"%s",student[year][i][k].roll);
            getchar();

            printf("\n");

            for(j=0;j<6;j++)
            {
                printf("Enter course code:");
                fgets(student[year][i][k].course_code[j],sizeof(student[year][i][k].course_code[j]),stdin);
                fprintf(fp,"%s \n",student[year][i][k].course_code[j]);
                    getchar();
                printf("\nEnter marks of the course:");
                scanf("%d",&student[year][i][k].mark[j]);
                fprintf(fp,"%d \n",student[year][i][k].mark[j]);
                getchar();

                printf("\n");

                if(student[year][i][k].mark[j]>=80)
                {
                    strcpy(student[year][i][k].grade[j],"A+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=4.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }
                else if(student[year][i][k].mark[j]>=75 && student[year][i][k].mark[j]<80)
                {
                    strcpy(student[year][i][k].grade[j],"A");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=70 && student[year][i][k].mark[j]<75)
                {
                    strcpy(student[year][i][k].grade[j],"A-");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=65 && student[year][i][k].mark[j]<70)
                {
                   strcpy(student[year][i][k].grade[j],"B+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=60 && student[year][i][k].mark[j]<65)
                {
                    strcpy(student[year][i][k].grade[j],"B");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                   student[year][i][k].gp[j]=3.00;
                   fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=55 && student[year][i][k].mark[j]<60)
                {
                    strcpy(student[year][i][k].grade[j],"B-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=50 && student[year][i][k].mark[j]<55)
                {
                    strcpy(student[year][i][k].grade[j],"C+");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=45 && student[year][i][k].mark[j]<50)
                {
                    strcpy(student[year][i][k].grade[j],"C");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=40 && student[year][i][k].mark[j]<45)
                {
                    strcpy(student[year][i][k].grade[j],"C-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else
                {
                    strcpy(student[year][i][k].grade[j],"F");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=0.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                sum = sum+student[year][i][k].gp[j];
            }


            student[year][i][k].gpa=(sum*3.0)/18.0;
             fprintf(fp,"%f \n",student[year][i][k].gpa);

             student[year][i][k].semester  = i+1;
             fprintf(fp,"%d \n",student[year][i][k].semester);
        }

        fclose(fp);

    }



    else if(year==1)
    {

        fp=fopen("resultyear2.txt","w");

        if(fp==NULL)
        {
            printf("Cannot open file.");
            menu();

        }

        fprintf(fp,"%d \n",sem);
         for(i=0;i<sem;i++)
        {
            printf("Input for semester %d:\n",i+1);
            getchar();

            printf("Enter roll:");
            fgets(student[year][i][k].roll,sizeof(student[year][i][k].roll),stdin);
            fprintf(fp,"%s",student[year][i][k].roll);
            getchar();

            printf("\n");

            for(j=0;j<6;j++)
            {
                printf("Enter course code:");
                fgets(student[year][i][k].course_code[j],sizeof(student[year][i][k].course_code[j]),stdin);
                fprintf(fp,"%s \n",student[year][i][k].course_code[j]);
                    getchar();
                printf("\nEnter marks of the course:");
                scanf("%d",&student[year][i][k].mark[j]);
                fprintf(fp,"%d \n",student[year][i][k].mark[j]);
                getchar();

                printf("\n");

                if(student[year][i][k].mark[j]>=80)
                {
                    strcpy(student[year][i][k].grade[j],"A+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=4.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }
                else if(student[year][i][k].mark[j]>=75 && student[year][i][k].mark[j]<80)
                {
                    strcpy(student[year][i][k].grade[j],"A");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=70 && student[year][i][k].mark[j]<75)
                {
                    strcpy(student[year][i][k].grade[j],"A-");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=65 && student[year][i][k].mark[j]<70)
                {
                   strcpy(student[year][i][k].grade[j],"B+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=60 && student[year][i][k].mark[j]<65)
                {
                    strcpy(student[year][i][k].grade[j],"B");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                   student[year][i][k].gp[j]=3.00;
                   fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=55 && student[year][i][k].mark[j]<60)
                {
                    strcpy(student[year][i][k].grade[j],"B-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=50 && student[year][i][k].mark[j]<55)
                {
                    strcpy(student[year][i][k].grade[j],"C+");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=45 && student[year][i][k].mark[j]<50)
                {
                    strcpy(student[year][i][k].grade[j],"C");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=40 && student[year][i][k].mark[j]<45)
                {
                    strcpy(student[year][i][k].grade[j],"C-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else
                {
                    strcpy(student[year][i][k].grade[j],"F");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=0.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                sum = sum+student[year][i][k].gp[j];
            }


            student[year][i][k].gpa=(sum*3.0)/18.0;
             fprintf(fp,"%f \n",student[year][i][k].gpa);

             student[year][i][k].semester  = i+1;
             fprintf(fp,"%d \n",student[year][i][k].semester);
        }


        fclose(fp);
    }



    else if(year==2)
    {

            fp=fopen("resultyear3.txt","w");

        if(fp==NULL)
        {
            printf("Cannot open file.");
            menu();

        }

        fprintf(fp,"%d \n",sem);

         for(i=0;i<sem;i++)
        {
            printf("Input for semester %d:\n",i+1);
            getchar();

            printf("Enter roll:");
            fgets(student[year][i][k].roll,sizeof(student[year][i][k].roll),stdin);
            fprintf(fp,"%s",student[year][i][k].roll);
            getchar();

            printf("\n");

            for(j=0;j<6;j++)
            {
                printf("Enter course code:");
                fgets(student[year][i][k].course_code[j],sizeof(student[year][i][k].course_code[j]),stdin);
                fprintf(fp,"%s \n",student[year][i][k].course_code[j]);
                    getchar();
                printf("\nEnter marks of the course:");
                scanf("%d",&student[year][i][k].mark[j]);
                fprintf(fp,"%d \n",student[year][i][k].mark[j]);
                getchar();

                printf("\n");

                if(student[year][i][k].mark[j]>=80)
                {
                    strcpy(student[year][i][k].grade[j],"A+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=4.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }
                else if(student[year][i][k].mark[j]>=75 && student[year][i][k].mark[j]<80)
                {
                    strcpy(student[year][i][k].grade[j],"A");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=70 && student[year][i][k].mark[j]<75)
                {
                    strcpy(student[year][i][k].grade[j],"A-");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=65 && student[year][i][k].mark[j]<70)
                {
                   strcpy(student[year][i][k].grade[j],"B+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=60 && student[year][i][k].mark[j]<65)
                {
                    strcpy(student[year][i][k].grade[j],"B");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                   student[year][i][k].gp[j]=3.00;
                   fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=55 && student[year][i][k].mark[j]<60)
                {
                    strcpy(student[year][i][k].grade[j],"B-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=50 && student[year][i][k].mark[j]<55)
                {
                    strcpy(student[year][i][k].grade[j],"C+");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=45 && student[year][i][k].mark[j]<50)
                {
                    strcpy(student[year][i][k].grade[j],"C");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=40 && student[year][i][k].mark[j]<45)
                {
                    strcpy(student[year][i][k].grade[j],"C-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else
                {
                    strcpy(student[year][i][k].grade[j],"F");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=0.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                sum = sum+student[year][i][k].gp[j];
            }


            student[year][i][k].gpa=(sum*3.0)/18.0;
             fprintf(fp,"%f \n",student[year][i][k].gpa);

             student[year][i][k].semester  = i+1;
             fprintf(fp,"%d \n",student[year][i][k].semester);
        }
        fclose(fp);

    }

    else if(year==3)
    {

        fp=fopen("resultyear4.txt","w");

        if(fp==NULL)
        {
            printf("Cannot open file.");
            menu();

        }

        fprintf(fp,"%d \n",sem);

          for(i=0;i<sem;i++)
        {
            printf("Input for semester %d:\n",i+1);
            getchar();

            printf("Enter roll:");
            fgets(student[year][i][k].roll,sizeof(student[year][i][k].roll),stdin);
            fprintf(fp,"%s",student[year][i][k].roll);
            getchar();

            printf("\n");

            for(j=0;j<6;j++)
            {
                printf("Enter course code:");
                fgets(student[year][i][k].course_code[j],sizeof(student[year][i][k].course_code[j]),stdin);
                fprintf(fp,"%s \n",student[year][i][k].course_code[j]);
                    getchar();
                printf("\nEnter marks of the course:");
                scanf("%d",&student[year][i][k].mark[j]);
                fprintf(fp,"%d \n",student[year][i][k].mark[j]);
                getchar();

                printf("\n");

                if(student[year][i][k].mark[j]>=80)
                {
                    strcpy(student[year][i][k].grade[j],"A+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=4.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }
                else if(student[year][i][k].mark[j]>=75 && student[year][i][k].mark[j]<80)
                {
                    strcpy(student[year][i][k].grade[j],"A");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=70 && student[year][i][k].mark[j]<75)
                {
                    strcpy(student[year][i][k].grade[j],"A-");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=65 && student[year][i][k].mark[j]<70)
                {
                   strcpy(student[year][i][k].grade[j],"B+");
                    fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=3.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=60 && student[year][i][k].mark[j]<65)
                {
                    strcpy(student[year][i][k].grade[j],"B");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                   student[year][i][k].gp[j]=3.00;
                   fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=55 && student[year][i][k].mark[j]<60)
                {
                    strcpy(student[year][i][k].grade[j],"B-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.75;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=50 && student[year][i][k].mark[j]<55)
                {
                    strcpy(student[year][i][k].grade[j],"C+");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.50;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=45 && student[year][i][k].mark[j]<50)
                {
                    strcpy(student[year][i][k].grade[j],"C");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.25;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else if(student[year][i][k].mark[j]>=40 && student[year][i][k].mark[j]<45)
                {
                    strcpy(student[year][i][k].grade[j],"C-");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=2.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                else
                {
                    strcpy(student[year][i][k].grade[j],"F");
                     fprintf(fp,"%s \n",student[year][i][k].grade[j]);
                    student[year][i][k].gp[j]=0.00;
                    fprintf(fp,"%f \n",student[year][i][k].gp[j]);
                }

                sum = sum+student[year][i][k].gp[j];
            }


            student[year][i][k].gpa=(sum*3.0)/18.0;
             fprintf(fp,"%f \n",student[year][i][k].gpa);

             student[year][i][k].semester  = i+1;
             fprintf(fp,"%d \n",student[year][i][k].semester);
        }
        fclose(fp);

    }

    }











