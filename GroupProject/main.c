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

void function_list();
void function_subList();



/**
* main.c
* @author Simon
* @description Student Struct
* @created 2020-05-14T09:20:14.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-14T09:37:15.108Z+08:00
*/
struct Course
{
    /* data */
    char courseName[20];
    char courseGrade[20];
};

struct Student
{
    /* data */
    char ID[20];           // ID
    char Name[20];         // Name
    // float C_Mark;          // c programming marks
    // float English;         // English marks
    struct Course *courses;
    float GPA;
};


void Import() {
    FILE *fp;
    fopen("student.txt", "r");
    struct Student *students;
    
    while ( 1 )
    {
        /* code */
        fscanf(fp, "%s %d %c", students->Name, &students->ID, students->courses);
    }
    
    fclose(fp);

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

int Course_searchByName(char name[], int num, struct Student *students) {
    int i;
    for ( i = 0; i < num; i++)
    {
        if (strcmp(students[i].courses[i].courseName, name) == 0)
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


void Delete(struct Student *students, int num) {
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
        index = Course_searchByName(courseName, num, students);
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
                strcpy(tmp, std[j].ID);
                strcpy(std[j].ID, std[j + 1].ID);
                strcpy(std[j + 1].ID, tmp);
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
    src = fopen("students.txt", "rw") ;//read the file
    while((fgets(str,100,src))!= NULL)//get data from student.txt
        fputs(str, src);//put into the designated file
    fclose(src);//close the file
}


void Quit() {
exit(0); 
}

int main() {
    
    /* Define Student Struct and Student Number */
    struct Student students[100];
    int num = 0;

    function_list(students, num);


    return 0;
}


void function_list(struct Student *students, int num) {
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
            case 2: Delete(students, num); break;
            case 3: function_subList(students, i); break;
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

void function_subList(struct Student *students, int num) {
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
            function_list(students, num);
            break;
            default:
            printf("Number should between 1 -- 3!\n");
        }
    } while ( 1 );
    
}