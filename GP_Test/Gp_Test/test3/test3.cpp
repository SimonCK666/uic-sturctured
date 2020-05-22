/**
* main.c
* @author bulbasaur
* @description 
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T20:03:32.068Z+08:00
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

void function_list(struct Student *stu1, struct Student *stu2, int num, struct Title *title);
void function_subList(struct Student *stu1, struct Student *stu2, int num, struct Title *title);

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
		if (ch1[i] == ' ' || ch1[i] == '\t')
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

void Import(struct Student *stu1, struct Student *stu2, struct Title *title)
{
	getchar();
    FILE *src1, *src2, *src3;
	
	char checkCourse[20], courseFileName[25], check[20];
	char ch1[100], ch2[10][20];
	//struct Student stu1[20];
	
	//struct Title title[20];

	memset(ch1, 0, sizeof(ch1));
	memset(ch2, 0, sizeof(ch2));

	
	
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
				memset(ch2, 0, sizeof(ch2));
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
					memset(ch2, 0, sizeof(ch2));
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

				
				printf("--------------------------------------------\n");
				printf("The information you installed are: \n\n");
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
					printf("--------------------------------------------\n");
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

/**
* main.c
* @author Simon
* @description Display the Courses' Information by single & Delete Course
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-14T09:37:15.108Z+08:00
*/

int Course_searchByName(char name[], int num, struct Title *title) {
    int i;
    for ( i = 0; i < num; i++)
    {
		if (strcmp(title[i].titleName, name) == 0)
        {
            /* code */
            return i;
        }
        
    }
    return -1;
    
}

// Display the Courses' Information By Single
void Course_DisplaySingle(int index, struct Student *students, char courseName[20]) {
    printf("%10s%10s%8s\n", "Name", "ID" ,courseName);
    printf("-------------------------------------------------------\n");
    if (courseName == "C Programming")
    {
        /* Print C Marks */
        printf("%10s%10s%8.2f\n", students[index].ID, students[index].Name, students[index].courses);
    }
    else if (courseName == "English")
    {
        /* Print English Marks */
        printf("%10s%10s%8.2f\n", students[index].ID, students[index].Name, students[index].courses);
    }
    
    printf("%10s%10s%8.2f\n", students[index].ID, students[index].Name, students[index].courses);
}


void Delete(struct Student *students, int num, struct Title *title) {
    int i;
    int index;
    while ( 1 )
    {
        /* Delete Course */
        char courseName[20];
        int index;
        printf("Please input the Course Name you want to Delete: ");
        scanf("%s", courseName);
        getchar();
        index = Course_searchByName(courseName, num, title);
        if (index == -1)
        {
            /* judge the course exist */
            printf("The Course Is Not Exist!\n");
        } else
        {
            // Print the course information
            printf("The deleted course's information is: ");
            Course_DisplaySingle(index, students, courseName);
            printf("Really Deleted? (Y/N)\n");
            if (getchar() == 'Y')
            {
                /* code */
                for ( i = 0; i < num - 1; i++)
                {
                    /* code */
                    students[i].courses[i] = students[i].courses[i + 1];           // Move the next object forward
                }
                num--;
            }
            getchar();
            printf("Delete Correctly!\n");
            
        }
        
        printf("Continue or Not(Y/N), Please choose: ");
        if (getchar() == 'N')
        {
            /* code */
            break;
        }
        
    }
    
}


/**
* main.c
* @author Liang
* @description Calculus and Sort
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-14T09:37:15.108Z+08:00
*/

void sort_ID(struct Student *std)
{
    for (int i = 0; i < 10 - 1; ++ i)
    {
        for (int j = 0; j < 10 - i - 1; ++ j)
        {
            if (strcmp(std[j].ID, std[j + 1].ID) < 0)
            {
                char tmp[20];
                strcpy_s(tmp, std[j].ID);
                strcpy_s(std[j].ID, std[j + 1].ID);
                strcpy_s(std[j + 1].ID, tmp);
            }
        }
    }
}

void sort_GPA(struct Student *std)
{
     for (int i = 0; i < 10 - 1; ++ i)
    {
        for (int j = 0; j < 10 - i - 1; ++ j)
        {
            if (std[j].GPA - std[j + 1].GPA > 1e-12)
            {
                float tmp;
                tmp = std[j].GPA;
                std[j].GPA = std[j + 1].GPA;
                std[j + 1].GPA = tmp;
            }
        }
    }
}




/**
* main.c
* @author Li
* @description Export
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-14T09:37:15.108Z+08:00
*/
void Export(struct Student *stu1, struct Student *stu2, struct Title *title) 
{
    FILE *fp;
	char ch[100], GPAarr[10];
	memset(ch, 0, sizeof(ch));
    fp = fopen("student.txt", "w");
	for (int i = 0; i < 10; ++ i)
	{
		if (i == 1)
		{
			strcat(ch, title[i].titleName);
			strcat(ch, "\t");
			strcat(ch, "\t");
		}
		else
		{
			strcat(ch, title[i].titleName);
			strcat(ch, "\t");
		}
	}
	fputs(ch, fp);
	fputs("\n", fp);

	for (int i = 0; i < 10; ++ i)
	{
		memset(ch, 0, sizeof(ch));
		strcat(ch, stu2[i].Name);
		strcat(ch, "\t");
		strcat(ch, stu2[i].ID);
		strcat(ch, "\t");
		//gcvt(stu2[i].GPA, 3, GPAarr);
		//strcat(ch, GPAarr);
		//strcat(ch, "\t");
		for (int j = 0; j < 10; ++ j)
		{
			strcat(ch, stu2[i].courses[j].CourseGrade);
			strcat(ch, "\t");
		}
		fputs(ch, fp);
		fputs("\n", fp);
	}
    fclose(fp);
}


void Quit() {
exit(0); 
}

// struct Course
// {
//     /* data */
//     char courseName[20];
//     char courseGrade[20];
// };

// struct Student
// {
//     /* data */
//     int ID[20];           // ID
//     char Name[20];         // Name
//     // float C_Mark;          // c programming marks
//     // float English;         // English marks
//     struct Course *courses;
//     float GPA;
// };


int main() {
    
    /* Define Student Struct and Student Number */
    struct Student stu1[100];
	struct Student stu2[20];
	struct Title title[20];
	memset(stu1, 0, sizeof(stu1));
	memset(stu2, 0, sizeof(stu2));
	memset(title, 0, sizeof(title));
	struct Student *p1 = stu1;
	struct Student *p2 = stu2;
	struct Title *p3 = title;


    int num = 0;

    function_list(p1, p2, num, p3);


    return 0;
}


void function_list(struct Student *stu1, struct Student *stu2, int num, struct Title *title) {
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

            case 1: Import(stu1, stu2, title); break;
            case 2: Delete(stu2, num, title); break;
            case 3: function_subList(stu1, stu2, i, title); break;
            case 4: Export(stu1, stu2, title); break;
            case 5: Quit(); break;
            default: printf("Number should between 1 -- 5!\n");
        }

    } while (1);
}


/**
* main.c
* @author Simon
* @description sub-menu
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-14T09:24:38.966Z+08:00
*/

void function_subList(struct Student *stu1, struct Student *stu2, int num, struct Title *title) {
    int i;
    
    do
    {
        /* code */
        printf("\t\t|###############################################|\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|    Welcome to Use Grade management System     |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|   Please Select The Following sub-Functions:  |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|   $$ 1 -Sorted in ID (ascending)              |\n");
        printf("\t\t|   $$ 2 -Sort in GPA (descending)              |\n");
        printf("\t\t|   $$ 3 -Back to main menu                     |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|###############################################|\n");

        printf("\n\n\n\n");
        
        printf("Please Input Number: ");
        scanf("%d", &i);

        switch (i)
        {
            case 1:
            /* Sort in ID function */
            sort_ID(stu2);
            // printf("ID\n\n");
            break;
            case 2:
            sort_GPA(stu2);
            // printf("GPA\n\n");
            break;
            case 3:
            function_list(stu1, stu2, num, title);
            break;
            default:
            printf("Number should between 1 -- 3!\n");
        }
    } while ( 1 );   
}