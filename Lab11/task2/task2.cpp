// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.27
// Task no: Week11_Task_2
/* Requirements:
Write a program to read students’information (name, score and major) and
sort students' information by name in ascending order. Assume that the total
number of students is inputted from the keyboard but will not exceed 50. If you
use array to store the information, you need to check if the input number is
beyond the array upper limit.
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50

struct studentIntro
{
    /* declare the datas */
    char name[SIZE];
    int score;
    char major[SIZE];
};

// Define the functions
void scoreSort(struct studentIntro stu[], int n);
void scoreName(struct studentIntro stu[], int n);

int main() {
    int studentNumber;
    printf("Please input the number of students (<=50): ");
    
    /* Input and judge the studenet numbers */
    scanf("%d", &studentNumber);
    while (studentNumber > 50)
    {
        /* judge the situation is not */
        printf("Please input the number of students again (<=50): ");
        scanf("%d", &studentNumber);
        
        if (studentNumber < 50)
        {
            /* the situation is right */
            break;
        }
        
    }

    // printf("number: %d", studentNumber);      // Test


    /* Call the structure and input information */
    struct studentIntro studentInform[50];
    printf("Please input the student information: \n");
    for (int i = 0; i < studentNumber; i++)
    {
        /* input the student information one by one */
        scanf("%s %d %s", studentInform[i].name, &studentInform[i].score, studentInform[i].major);
    }
    

	/* Test */
    //printf("-----------------------------\n");
    //printf("The studnet information:\n ");
    //for (int i = 0; i < studentNumber; i++)
    //{
        /* print out one by one */
    //    printf("%s %d %s\n", studentInform[i].name, studentInform[i].score, studentInform[i].major);    // Test
    //}
    //printf("-----------------------------\n");

    
    

    // int score = studentInform.score;
    // printf("%d\n", score);

    // scoreSort(studentInform, studentNumber);

    printf("-----------------------------\n");

	// Call the function
    scoreName(studentInform, studentNumber);
    
    return 0;
}


// Sort with names
void scoreName(struct studentIntro stu[], int n) {
    struct studentIntro temp;
    
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        for (int j = 0; j < n - i; j++)
        {
            /* compare stu[j] and stu[j + 1] */
            if (strcmp(stu[j].name, stu[j + 1].name) > 0)
            {
                /* code */
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
            
        }
        
    }

    // printf("\n");
    printf("The student list in ascending order by name: \n");

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%s %d %s\n", stu[i].name, stu[i].score, stu[i].major);
    }
    
    
}





// Test sort with scores
void scoreSort(struct studentIntro stu[], int n) {
    struct studentIntro temp;
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i + 1; j < n - 1; j++)
        {
            /* code */
            if (stu[i].score > stu[j].score)
            {
                /* code */
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
            
        }
        
    }

    // printf("\n");
    printf("The student list in ascending order by name: \n");

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%s %d %s\n", stu[i].name, stu[i].score, stu[i].major);
    }
    
    
}


