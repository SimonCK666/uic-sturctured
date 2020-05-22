/**
* deleteTest.c
* @author bulbasaur
* @description 
* @created 2020-05-19T09:15:00.843Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-19T22:42:22.871Z+08:00
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Title{
	char titleName[20];
};

struct Title title[] = {"C", "English"};

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

void Delete( int num, struct Title *title) {
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
            
            printf("Really Deleted? (Y/N)\n");
            if (getchar() == 'Y')
            {
                /* code */
                // for ( i = 0; i < num - 1; i++)
                // {
                //     /* code */
                //     students[i].courses[i] = students[i].courses[i + 1];           // Move the next object forward
                // }
                // num--;
                printf("xxxxxxx\n");
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

int main(int argc, char const *argv[])
{
    int num = 2;
    char name[20];
    printf("Please input the name: \n");
    scanf("%s", name);
    getchar();
    
    int a = Course_searchByName(name, num, title);
    printf("%d\n\n", a);

    Delete(num, title);
    
    return 0;
}
