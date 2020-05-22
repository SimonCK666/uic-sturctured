#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void sort_Gpa(Student* st);
//void Sfile_Import();
//void readFile(Student* st);
//void import_Course(Student* st);
//void delet_Course(Student* st);
//void cala_PGA(Student* st);
//void Sorted_Id(Student* st);
//void sub_menu(Student* st);

//typedef struct {
//	int num;
//	char course[10][20];
//}Course;
//Course cours;
//

typedef struct {
	int score[7];
	char ch[7];
}Course;
double num1[7] = { 0 };
char ch1[7] = { 0 };
double num2[7] = { 0 };
char ch2[7] = { 0 };
double num3[7] = { 0 };
char ch3[7] = { 0 };
typedef struct n
{
	char courseName[20];
	double score;
	char Sn;
	struct n* next;
}Data;

typedef struct st
{
	Data *data;
	char name[10];
	int ID;
	double Pga;
}Student;

/**/
void ipfile()
{
	char ch;
	double num;
	FILE* fp;
	fp = fopen("C.txt", "w");
	for (int i = 0; i < 7; i++)
	{
		
		printf("N£º"); scanf("%c", &ch);
		getchar();
		printf("S£º"); scanf("%lf", &num);
		getchar();
		fprintf(fp,"%0.2f\t%c\n", num, ch);
	}
	fclose(fp);

}

/*Read the scores for each subject*/
void readLeson()
{
	
	Course math;
	int i=0;
	FILE* fp;
	fp = fopen("Math.txt", "r");
	//for ( i = 0; i < 7; i++)
	//{
	//	fscanf(fp, "%f %c", cs[0].score[i], cs[0].ch[i]);
	//	printf("%0.2f,%c\n", cs[0].score[i], cs[0].ch[i]);
	//}
	while (fscanf(fp, "%lf %c",  &num1[i],&ch1[i] ) != EOF)
	{
		//printf("%0.2f %c\n", num1[i], ch1[i]);
		i++;
	}
	fclose(fp);
	fp = fopen("English.txt", "r");

	while (fscanf(fp, "%lf %c", &num2[i], &ch2[i]) != EOF)
	{
		//printf("%0.2f %c\n", num2[i], ch2[i]);
		i++;
	}
	fclose(fp);

	fp = fopen("C.txt", "r");

	while (fscanf(fp, "%lf %c", &num3[i], &ch3[i]) != EOF)
	{
		//printf("%0.2f %c\n", num3[i], ch3[i]);
		i++;
	}
	fclose(fp);
}
/*Initializes student information*/
Student* init_Student()
{
	int i;
	Student *p=(Student*)malloc(sizeof(Student)*7);
	for (i = 0; i < 7; i++)
	{
		p[i].data = (Data*)malloc(sizeof(Data));
		/*strcpy(p[i].data->courseName, "asdsad");
		p[i].data->score = 3.5;
		p[i].data->Sn = 'A';*/
		p[i].data->next = NULL;
	}
	
	return p;
}

/*import student information*/
void Sfile_Import(Student *st)
{
	char name[10];
	int num;
	FILE* fp;
	fp = fopen("Student.txt", "w");
	fprintf(fp, "Name\t ID\t\n");
	for (int i = 0; i < 7; i++)
	{
		
		printf("name:"); scanf("%s", name);
		printf("num:"); scanf("%d", &num);
		fprintf(fp, "%s\t %d\n", name, num);
		Data* p = st[i].data->next;
		while (p)
		{
			fprintf(fp,"%d\t", p->Sn);
			p = p->next;

		}
	}


	fclose(fp);
}
/*Enter student information into the text*/
void Sfile_Import1(Student* st)
{
	char name[10];
	int num;
	FILE* fp;
	fp = fopen("Student1.txt", "w");
	fprintf(fp, "Name\t ID\t");
	Data* p = st[0].data->next;
	while (p)
	{
		fprintf(fp, "%s\t", p->courseName);
		p = p->next;
	}
	fprintf(fp, "GPA");
	for (int i = 0; i < 6; i++)
	{
	
		fprintf(fp, "\n%s\t %d\t", st[i].name,st[i].ID);
		Data* p = st[i].data->next;
		while (p)
		{
			fprintf(fp, "%c\t", p->Sn);
			p = p->next;

		}
		fprintf(fp, "%0.2f\t", st[i].Pga);
	}
	

	fclose(fp);
}
/*Reading student information*/
void readFile(Student* st)
{

	int i = 0;
	FILE* fp;
	fp = fopen("Student.txt", "r");
	while (fscanf(fp, "%s%d", st[i].name, &st[i].ID) != EOF)
	{
		//printf("%s\t %d\n", st[i].name, st[i].ID);
		i++;
	}
	fclose(fp);
}
/*Enter course information*/
void import_Course(Student* st)
{
	int choose;
	int i, j;
	char course[20];
	printf("Please input the course name(length of course name is less than 20.(English,Math,C)):\n");
	scanf("%s", course);
	if (strlen(course) < 20)
	{
		for (i = 0; i < 7; i++)
		{
			Data* p = st[i].data->next;
			while (p!=NULL)
			{
				if (!strcmp(p->courseName, course))
				{
					printf("Warning:the course name inputted by user exists You can choose to replace the old grades with new or not(1/0)\n");
					scanf("%d", &choose);
					if (choose == 1)
					{
						break;
					}
					else
					{
						return;
					}
					return;
				}
				p = p->next;
			}
			if (!strcmp("English", course))
			{
				Data* data = (Data*)malloc(sizeof(Data));
				strcpy(data->courseName, course);
				data->score = num3[i];
				data->Sn = ch3[i];
				data->next = st[i].data->next;
				st[i].data->next = data;
			}
			else if (!strcmp("Math", course))
			{
				Data* data = (Data*)malloc(sizeof(Data));
				strcpy(data->courseName, course);
				data->score = num1[i];
				data->Sn = ch1[i];
				data->next = st[i].data->next;
				st[i].data->next = data;
			}
			else if(!strcmp("C", course))
			{
				Data* data = (Data*)malloc(sizeof(Data));
				strcpy(data->courseName, course);
				data->score = num2[i];
				data->Sn = ch2[i];
				data->next = st[i].data->next;
				st[i].data->next = data;
			}
			
		}
	}
	else
	{
		printf("Warnign:length of course name is than 20");
	}

	Sfile_Import1(st);
}

//void print(Student*st)
//{
//	for (int i = 0; i < 6; i++)
//	{
//		Data* p = st[i].data->next;
//		printf("%s %d", st[i].name, st[i].ID);
//		while (p)
//		{
//			printf("%s:%c\t",p->courseName, p->Sn);
//			p = p->next;
//		}
//	}
//	getchar();
//}
/*Delete student information*/
void delet_Course(Student* st)
{
	int i;
	char course_name[10];
	printf("Please enter the course name£º"); scanf("%s", course_name);
	
	for ( i = 0; i < 7; i++)
	{
		Data* p = st[0].data->next;
		Data* q = st[0].data;
		Data* q1;
		while (p)
		{
			if (!strcmp(p->courseName, course_name))
			{
				q1 = p;
				p = p->next;
				q->next = p;
				free(q1);
			}
			p = p->next;
			if (p==NULL)
			{
				printf("Warning:Couldn't find this course!!\n");
				return;
			}
		}
	}
	Sfile_Import1(st);
}
/**/
void cala_PGA(Student* st)
{
	int i;
	int n=0;
	double avgNum[7] = { 0 };
	for ( i = 0; i < 7; i++)
	{
		n = 0;
		Data* p = st[i].data->next;
		while (p)
		{
			n++;
			avgNum[i] += p->score;
			p = p->next;
		}
		avgNum[i] = avgNum[i] / n;
		printf("%0.2f\n", avgNum[i]);
		st[i].Pga = avgNum[i];
	}
	Sfile_Import1(st);
}
void Sorted_Id(Student *st)
{
	int i, j;
	int id_list[7] = { 0 };
	int num;
	for ( i = 0; i < 7; i++)
	{
		id_list[i]=st[i].ID;
	}
	for ( i = 0; i < 7; i++)
	{
		for (j = i; j < i - 1; j++)
		{
			if (id_list[j]>id_list[j+1])
			{
				num = id_list[j];
				id_list[j] = id_list[j + 1];
				id_list[j + 1] = num;
			}
		}
	}

	for ( i = 0; i < 7; i++)
	{
		for ( j = 0; j < 7; j++)
		{
			if (id_list[i] == st[j].ID)
			{
				Data* p = st[j].data->next;
				printf("\n%s %d\t", st[i].name, st[i].ID);
				while (p)
				{
					printf("%0.2f\t", p->Sn);
					p = p->next;
				}
			}

		}
	}
	printf("\n");
}

void sort_Gpa(Student *st)
{
	int i, j;
	int id_list[7] = { 0 };
	int num;
	for (i = 0; i < 7; i++)
	{
		id_list[i]=st[i].Pga;
	}
	for (i = 0; i < 7; i++)
	{
		for (j = i; j < i - 1; j++)
		{
			if (id_list[j] > id_list[j + 1])
			{
				num = id_list[j];
				id_list[j] = id_list[j + 1];
				id_list[j + 1] = num;
			}
		}
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (id_list[i] == st[j].Pga)
			{
				Data* p = st[j].data->next;
				printf("\n%s %d\t", st[i].name, st[i].ID);
				while (p)
				{
					printf("%0.2f\t", p->Sn);
					p = p->next;
				}
			}

		}
	}
	printf("\n");
}

void sub_menu(Student *st)
{
	int choose;
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
	scanf("%d", &choose);
	switch (choose)
	{
	case 1:
		Sorted_Id(st);
		break;
	case 2:
		sort_Gpa(st);
		break;
	case 3:
		return;
	default:
		break;
	}

}

int main()
{
	
	int choose;
	Student* st = init_Student();
	//Sfile_Import(st);
	readFile(st);
	//ipfile();
	readLeson();
	//import_Course(st);
	 //print( st);
	// Sfile_Import();
	//cours.num = 0;
	Student* head = init_Student();
	while (1)
	{
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
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			import_Course(st);
			break;
		case 2:
			delet_Course(st);
			break;
		case 3:
			cala_PGA(st);
			break;
		case 4:
			sub_menu(st);
			break;
		case 5:
			return 0;
		default:
			break;
		}
	}
	
	return 0;
}