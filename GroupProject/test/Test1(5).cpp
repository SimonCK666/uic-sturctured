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

void function_list(struct Student *students, int num, struct Title *title);
void function_subList(struct Student *students, int num, struct Title *title);

void Import() {
	getchar();
    FILE *src1, *src2, *src3;
	int a, b, c, d, e, i, num , titleNum = 0, studentNum1 = 0, studentNum2 = 0, pos = 0, flag1 = 0, flag2 = 0;
	char *p, str[100], checkCourse[20], courseFileName[25], ch[100];
	struct Student stu1[20];
	struct Student stu2[20];
	memset(stu1, 0, sizeof(stu1));
	memset(stu2, 0, sizeof(stu2));
	struct Title title[20];
	memset(title, 0, sizeof(title));
	memset(checkCourse, 0, sizeof(checkCourse));
	src1 = fopen("student.txt", "r");
	printf("Please import the course name: ");
	gets(checkCourse);
	fgets(ch, sizeof(ch), src1);
	p = strtok(ch, " ");

	while( p != NULL )
	{
		strcpy(title[titleNum].titleName, p);
		for (int k = 0; k < 20; ++ k)
		{
			if (! isalpha(title[titleNum].titleName[k]))
			{
				title[titleNum].titleName[k] = 0;
			}
		}
		p = strtok(NULL, " ");
		titleNum ++;
	}
	printf("%s", title[2].titleName);
	
	printf("%s", checkCourse);
	printf("%d", strcmp( checkCourse, title[2].titleName ));

	for( i = 0; i < 20; i++ )
	{
		if( strcmp( checkCourse, title[i+2].titleName ) == 0 )
		{
			printf("This course has appeared in this file now.\n");
			printf("Do you want to replace the old grades? (Yes/No) ");
			gets(str);
			if( strcmp( str, "Yes" ) == 0 )
			{
				printf("Please input the file name to import: ");
				gets(courseFileName);
				src2 = fopen( courseFileName, "r" );
				while (fgets(ch, sizeof(ch), src2))
				{
					p = strtok(ch, " ");
					while( p != NULL)
					{
						if (pos == 0)
						{
							strcpy(stu2[studentNum2].Name, p);
							for (int k = 0; k < 20; ++ k)
							{
								if (! isalpha(stu2[studentNum2].Name[k]))
								{
									stu2[studentNum2].Name[k] = 0;
								}
							}
						}
						else 
							if (pos == 1)
							{
								strcpy(stu2[studentNum2].ID, p);
								for (int k = 0; k < 20; ++ k)
								{
									if (! isalpha(stu2[studentNum2].ID[k]))
									{
										stu2[studentNum2].ID[k] = 0;
									}
								}
							}
							else
							{
								strcpy(stu2[studentNum2].courses[pos - 2].CourseGrade, p);
								for (int k = 0; k < 20; ++ k)
								{
									if (! isalpha(stu2[studentNum2].courses[pos - 2].CourseGrade[k]))
									{
										stu2[studentNum2].courses[pos - 2].CourseGrade[k] = 0;
									}
								}
							}
						p = strtok(NULL, " ");
						pos ++;
					}
					studentNum2 ++;
					pos = 0;
				}
				for( a = 0; a < 20; a++ )
				{
					strcpy( stu1[a].courses[i].CourseGrade, stu2[a].courses[0].CourseGrade);
				}
				flag1 = 1;
				fclose(src2);
				break;
			}
			else if( strcmp( str, "No" ) == 0 )
			{
				flag1 = 1;
				break;
			}
			else
			{
				printf("Please input Yes or No.");
				i--;		
			}
		}
	}
	if( flag1 != 1 )
	{
		while( 1 )
		{
			
			printf("Please input the file name to import: ");
			gets(courseFileName);
			src3 = fopen( courseFileName, "r" );
			while (fgets(ch, sizeof(ch), src3))
			{
				p = strtok(ch, " ");
				while( p != NULL)
				{
					if (pos == 0)
					{
						strcpy(stu1[studentNum1 ++].Name, p);
					}
					else 
						if (pos == 1)
						{
							strcpy(stu1[studentNum1].ID, p);
						}
						else
						{
							strcpy(stu1[studentNum1 ++].courses[pos - 2].CourseGrade, p);
						}
			p = strtok(NULL, " ");
			pos ++;
		}
		pos = 0;
	}
			for( b = 0; b < 20; b++ ){ 
				for( c = 0; c < 20; c++ ){
					if( stu2[b].ID == stu1[c].ID ){
						flag2++;
					}
				}
			}
			if( flag2 == studentNum1 ){
				printf("Warning: One of the student ID in this imported file cannot be found in students.txt.");
				break;
			}
			else{
				char str[100];
				for( d = 0; d < 20; d++ ){
					fprintf(src3, "%s            ", title[d].titleName);
				}
				fprintf(src3, "\n");
				for( d = 0; d < 20; d++ ){
					fprintf(src3, "%s         %s        ", stu1[d].Name, stu1[d].ID);
					for( e = 0; e < 20; e++ ){
						fprintf(src3, "%s        ", stu1[d].courses[e].CourseGrade);
					}
					fprintf(src3, "%d", stu1[d].GPA);
					fprintf(src3, "\n");
				}
			}
			fclose(src1);
			fclose(src3);
			break;
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
void Export() {
    FILE *src;
    char str[100];
    src = fopen("student.txt", "rw");//read the file
    while((fgets(str,100,src))!= NULL)//get data from student.txt
        fputs(str, src);//put into the designated file
    fclose(src);//close the file
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
            case 2: Delete(students, num, title); break;
            case 3: function_subList(students, i, title); break;
            case 4: Export(); break;
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

void function_subList(struct Student *students, int num, struct Title *title) {
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
            sort_ID(students);
            // printf("ID\n\n");
            break;
            case 2:
            sort_GPA(students);
            // printf("GPA\n\n");
            break;
            case 3:
            function_list(students, num, title);
            break;
            default:
            printf("Number should between 1 -- 3!\n");
        }
    } while ( 1 );
    
}