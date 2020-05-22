/**
* exportTest.c
* @author bulbasaur
* @description 
* @created 2020-05-18T10:31:55.114Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-18T10:48:25.832Z+08:00
*/

#include <stdio.h>

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

/* 学生数组 & 学生数量 */
struct Student students[100];
int num = 0;


void Export() {
    FILE *fp;
    int i;
    if ((fp = fopen("Student.txt", "wb")) == NULL)
    {
        /* code */
        printf("Cannot open file!\n");
        return;
    }

    if (fwrite(&num, sizeof(int), 1, fp) != 1)
    {
        /* code */
        printf("Written Error!\n");
    }
    for ( i = 0; i < num; i++)
    {
        /* code */
        if (fwrite(&students[i], sizeof(struct Student), 1, fp) != 1)
        {
            /* code */
            printf("Written Error!\n");
        }
        
    }
    
    fclose(fp);
}



int main(int argc, char const *argv[])
{
    Export();
    return 0;
}
