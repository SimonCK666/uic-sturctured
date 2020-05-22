/**
* main.c
* @author bulbasaur
* @description 
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-18T14:46:29.593Z+08:00
*/


#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#pragma GCC optimize(3)
/**
* main.c
* @author Simon
* @description Student Struct
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-14T09:37:15.108Z+08:00
*/

struct Course{
	char CourseGrade[20];
};

struct Title{
	char titleName[20];
};

struct Student{
	char ID[20];
	char Name[20];
	float GPA;
	struct Course courses[20];
};

void function_list(struct Student *students, int num, struct Title *title);
void function_subList(struct Student *students, int num, struct Title *title);

int func(char *ch1, char (*ch2)[20])
{
	int num = 0, b = 0;
	for (int i = 0; i < strlen(ch1); ++ i)
	{
		if (isalpha(ch1[i]) || isdigit(ch1[i]))
		{
			ch2[num][b] = ch1[i];
			b ++;
		}
		if (ch1[i] == ' ')
		{

			if ( (! isalpha(ch1[i + 1])) && (! isdigit(ch1[i + 1])) ) continue;
			else
			{
				num ++;
				b = 0;
				continue;
			}
		}
	}
	return num + 1;
}

void Import()
{
	getchar();
    FILE *src1, *src2, *src3;
	
	char checkCourse[20], courseFileName[25], check[20];
	char ch1[100], ch2[10][20];
	struct Student stu1[20];
	struct Student stu2[20];
	struct Title title[20];

	memset(ch1, 0, sizeof(ch1));
	memset(ch2, 0, sizeof(ch2));
	memset(stu1, 0, sizeof(stu1));
	memset(stu2, 0, sizeof(stu2));
	memset(title, 0, sizeof(title));
	memset(checkCourse, 0, sizeof(checkCourse));

	src1 = fopen("student.txt", "r");
	printf("Please import the course name: ");
	gets(checkCourse);

	fgets(ch1, sizeof(ch1), src1);
	int n = func(ch1, ch2);
	for (int i = 0; i < n; ++ i)
	{
		strcpy(title[i].titleName, ch2[i]);
	}
	fclose(src1);
	
	//�ÿγ̷��������ڣ�����
	for (int i = 0; i < n; ++ i)
	{
		if ( strcmp(checkCourse, title[i + 2].titleName) != 0 )
		{
			printf("Please input the file name to import: ");
			gets(courseFileName);
			src2 = fopen(courseFileName, "r");
			memset(ch1, 0, sizeof(ch1));
			memset(ch2, 0, sizeof(ch2));
			int pos = -1;

			while ( fgets(ch1, sizeof(ch1), src1) )
			{
				int n = func(ch1, ch2);
				if (pos == -1)
				{
					for (int j = 0; j < n; ++ j)
					{
						strcpy(title[j].titleName, ch2[j]);
					}
				}
				else
				{
					int tag = 0;
					for (int j = 0; j < n; ++ j)
					{
						if (j == 0)
						{
							strcpy(stu1[pos].Name, ch2[j]);
						}
						else
						{
							if (j == 1)
							{
								strcpy(stu1[pos].ID, ch2[j]);
							}
							else
							{
								strcpy(stu1[pos].courses[tag].CourseGrade, ch2[j]);
								tag ++;
							}
						}
					}
				}
				pos ++;
			}
			fclose(src2);
			break;
		}

		//�ÿγ̷����Ѵ��ڣ��Ƿ񸲸�
		else
		{
			printf("This course has appeared in this file now.\n");
			printf("Do you want to replace the old grades? (Yes / No) ");
			gets(check);
			if ( strcmp(check, "Yes") == 0 )
			{
				printf("Please input the file name to import: ");
				gets(courseFileName);
				src3 = fopen(courseFileName, "r");
				memset(ch1, 0, sizeof(ch1));
				memset(ch2, 0, sizeof(ch2));
				int pos = -1;

				while ( fgets(ch1, sizeof(ch1), src1) )
				{
					int n = func(ch1, ch2);
					if (pos == -1)
					{
						for (int j = 0; j < n; ++ j)
						{
							strcpy(title[j].titleName, ch2[j]);
						}
					}
					else
					{
						int tag = 0;
						for (int j = 0; j < n; ++ j)
						{
							if (j == 0)
							{
								strcpy(stu2[pos].Name, ch2[j]);
							}
							else
							{
								if (j == 1)
								{
									strcpy(stu2[pos].ID, ch2[j]);
								}
								else
								{
									strcpy(stu2[pos].courses[tag].CourseGrade, ch2[j]);
									tag ++;
								}
							}
						}
					}
					pos ++;
				}
				fclose(src3);

				//����Yesʱ���������
				for (int i = 0; i < 10; ++ i)
				{
					printf("%s ", title[i].titleName);
				}
				printf("\n");
				for (int i = 0; i < 10; ++ i)
				{
					printf("%s %s ", stu2[i].Name, stu2[i].ID);
					for (int j = 0; j < 10; ++ j)
					{
						printf("%s", stu2[i].courses[j].CourseGrade);
					}
					printf("\n");
				}
				break;
			}
			else
			{
				if ( strcmp(check, "No") == 0 )
				{
					break;
				}
				else
				{
					printf("Please input Yes or No.\n");
					continue;
				}
			}
		}
	}

	
}

void Quit() 
{
	exit(0); 
}

int main()
{
    
    /* Define Student Struct and Student Number */
    struct Student students[100];
	struct Title title[20];

    int num = 0;

    function_list(students, num, title);


    return 0;
}


void function_list(struct Student *students, int num, struct Title *title) {
    int i;
    do {

        printf("\t\t|###############################################|\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|    Welcome to Use Grade management System     |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|   Please Select The Following Functions:      |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|   $$ 1 -Import grades for a course            |\n");
        printf("\t\t|   $$ 2 -Delete a course                       |\n");
        printf("\t\t|   $$ 3 -Calculate GPA                         |\n");
        printf("\t\t|   $$ 4 -Export file with GPA                  |\n");
        printf("\t\t|   $$ 5 -Quit                                  |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|###############################################|\n");

        printf("\n\n\n\n");

        printf("Please Input Number:");
        scanf("%d", &i);

        switch (i) {

            case 1: Import(); break;
            case 5: Quit(); break;
            default: printf("Number should between 1 -- 5!\n");
        }

    } while (1);
}