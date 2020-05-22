#include <cstdio>
#include <cstdlib>
#include <cstring>

struct Course
{
    char courseName[20];
    char courseGrade[20];
};

struct Student
{
    char ID[20];
    char Name[20];
    struct Course *courses;
    float GPA;
};

int main()
{
	struct Student stu[10];
	FILE *fin;
	char c, *p, ch[100];
	int pos = 0;
	fin = fopen("student.txt", "r");


	fgets(ch, sizeof(ch), fin);
	printf("%s", ch);
	p = strtok(ch, " ");
	while(p != NULL)
	{
		printf("p = %s\n", p);
		p = strtok(NULL, " ");
	}


	while (fgets(ch, sizeof(ch), fin))
	{	
		printf("%s", ch);
		p = strtok(ch, " ");
		while(p != NULL)
		{
			printf("p = %s\n", p);
			p = strtok(NULL, " ");
		}
	}
	fclose(fin);
    system("pause");
    return 0;
}