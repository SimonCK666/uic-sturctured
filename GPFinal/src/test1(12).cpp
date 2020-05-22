#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
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

//typedef struct {
//	int num;
//	int isok;
//}Isok;

typedef struct {
	int score[7];
	char ch[7];
}Course;

typedef struct n
{
	char courseName[20];
	double score;
	char Sn[2];
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
double conversion(char *ch)
{
	//printf("111\n");
	if (!strcmp(ch,"A+"))
	{
		return 4;
	}
	else if (!strcmp(ch, "A"))
	{
		//printf("222\n");
		return 3.67;
	}
	else if (!strcmp(ch, "B+"))
	{
		return 3.33;
	}
	else if (!strcmp(ch, "B"))
	{
		return 3;
	}
	else if (!strcmp(ch, "B-"))
	{
		return 2.67;
	}
	else if (!strcmp(ch, "C+"))
	{
		return 2.33;
	}
	else if (!strcmp(ch, "C"))
	{
		return 2;
	}
	else if (!strcmp(ch, "C-"))
	{
		return 1.67;
	}
	else if (!strcmp(ch, "D"))
	{
		return 1;
	}
	else if (!strcmp(ch, "F"))
	{
		return 0;
	}
	return 0;
}
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
void readLeson(double* num11, char ch11[][2], double* num21, char ch21[][2], double* num31, char ch31[][2])
{
	char name[10];
	int n;
	Course math;
	int i=0;
	FILE* fp;
	fp = fopen("Math.txt", "r");
	//for ( i = 0; i < 7; i++)
	//{
	//	fscanf(fp, "%f %c", cs[0].score[i], cs[0].ch[i]);
	//	printf("%0.2f,%c\n", cs[0].score[i], cs[0].ch[i]);
	//}
	while (fscanf(fp, "%s %d  %c",name,&n,&ch11[i] ) != EOF)
	{
		//printf("%0.2f %c\n", num1[i], ch1[i]);
		num11[i] = conversion(ch11[i]);
		i++;
	}
	fclose(fp);
	fp = fopen("English.txt", "r");
	i = 0;
	while (fscanf(fp, "%s %d  %c", name, &n, &ch21[i]) != EOF)
	{
		//printf("%0.2f %c\n", num21[i], ch21[i]);
		num21[i] = conversion(ch21[i]);
		i++;
	}
	fclose(fp);

	fp = fopen("C.txt", "r");
	i = 0;
	while (fscanf(fp, "%s %d %c", name, &n, &ch31[i]) != EOF)
	{
		//printf("%0.2f %c\n", num3[i], ch3[i]);
		num31[i] = conversion(ch31[i]);
		i++;
	}
	//for (int i = 0; i < 7; i++)
	//{
	//	printf("%s,%lf\n", ch11[i], num11[i]);
	//}
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
	fprintf(fp, "Name\t    ID\t\t");
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
			fprintf(fp, "%s\t", p->Sn);
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
void import_Course(Student* st, double* num11, char ch11[][2], double* num21, char ch21[][2], double* num31, char ch31[][2])
{
	/*for (int i = 0; i < 7; i++)
	{
		printf("%c %f\n", ch21[i], num21[i]);
	}*/
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
					if (choose == 1)/*Determine if the course input is repeated, and if so, override it, otherwise exit*/
					{
						return;
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
				data->score = num21[i];
				strcpy(data->Sn , ch21[i]);
				//printf("E:%c\n", ch11[i]);
				data->next = st[i].data->next;
				st[i].data->next = data;
			}
			else if (!strcmp("Math", course))
			{
				Data* data = (Data*)malloc(sizeof(Data));
				strcpy(data->courseName, course);
				data->score = num11[i];
				strcpy(data->Sn , ch11[i]);
				//printf("E:%c\n", ch11[i]);
				data->next = st[i].data->next;
				st[i].data->next = data;
			}
			else if(!strcmp("C", course))
			{
				Data* data = (Data*)malloc(sizeof(Data));
				strcpy(data->courseName, course);
				data->score = num21[i];
				strcpy(data->Sn ,ch21[i]);
				//printf("E:%c\n", data->Sn);
				data->next = st[i].data->next;
				st[i].data->next = data;
			}
			else
			{
				printf("Warning:There is no course\n");
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
		/*To delete the corresponding node*/
		Data* p = st[i].data->next;
		Data* q = st[i].data;
		Data* q1;
		while (p->next)
		{
			if (!strcmp(p->courseName, course_name))
			{
				q1 = p;
				p = p->next;
				q->next = p;
				free(q1);
				printf("successfully delete\n");
				break;
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
/*calculate PGA*/
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
/*In ascending order by Id*/
void Sorted_Id(Student *st)
{
	int i, j;
	int id_list[7] = { 0 };
	int num;
	FILE* fp;
	fp = fopen("student1.txt", "r");
	fprintf(fp, "Name\t    ID\t\t");
	Data* p = st[0].data->next;
	while (p)
	{
		fprintf(fp, "%s\t", p->courseName);
		p = p->next;
	}
	//for (j = 0; j < 7; j++)
	//{
	//	/*if (id_list[i] == st[j].ID)
	//	{*/
	//		Data* p = st[j].data->next;
	//		printf("\n%s\t%d\t", st[j].name, st[j].ID);
	//		while (p)
	//		{
	//			printf("\t%c\t", p->Sn);
	//			p = p->next;
	//		}
	//	//}

	//}
	for ( i = 0; i < 7; i++)
	{
		id_list[i]=st[i].ID;
	}
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			if (id_list[j]>id_list[j+1])
			{
				num = id_list[j];
				id_list[j] = id_list[j + 1];
				id_list[j + 1] = num;
			}
		}
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j <7; j++)
		{
			if (id_list[i] == st[j].ID)
			{
				Data* p = st[j].data->next;
				printf("\n%s\t%d\t", st[j].name, st[j].ID);
				fprintf(fp,"\n%s\t%d\t", st[j].name, st[j].ID);
				while (p)
				{
					printf("\t%s\t", p->Sn);
					p = p->next;
				}
				printf("%0.2f\t", st[j].Pga);
				fprintf(fp,"%0.2f\t", st[j].Pga);
				
			}

		}
	}
	printf("\n");
	fclose(fp);
}
/*In ascending order by PGA*/
void sort_Gpa(Student *st)
{
	int i, j;
	double id_list[7] = { 0 };
	double num;
	FILE* fp;
	fp = fopen("student1.txt", "r");
	fprintf(fp, "Name\t    ID\t\t");
	Data* p = st[0].data->next;
	while (p)
	{
		fprintf(fp, "%s\t", p->courseName);
		p = p->next;
	}
	/*Because GPA is prone to repeat, and then there is a matching process in the output process after sorting, so mark with Isok,
It's used to determine whether the corresponding person is going to output, if there's no isok=1 otherwise isok=0*/
	int isok[7] = {0};
	for ( i = 0; i < 7; i++)
	{
		
		isok[i] = 1;
	}
	for (i = 0; i < 7; i++)
	{
		id_list[i]=st[i].Pga;
	}
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6-i ; j++)
		{
			if (id_list[j] > id_list[j + 1])
			{
				num = id_list[j];
				id_list[j] = id_list[j + 1];
				id_list[j + 1] = num;
			}
		}
	}
	/*for (int i = 0; i < 7; i++)
	{
		printf("%0.2f\n", id_list[i]);

	}*/

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (id_list[i] == st[j].Pga&&isok[j]==1)
			{
				Data* p = st[j].data->next;
				printf("\n%s\t%d\t", st[j].name, st[j].ID);
				fprintf(fp,"\n%s\t%d\t", st[j].name, st[j].ID);
				while (p)
				{
					printf("%s\t", p->Sn);
					p = p->next;
				}
				printf("%0.2f\t", st[j].Pga);
				fprintf(fp,"%0.2f\t", st[j].Pga);
				isok[j] = 0;
				break;
			}
			
		}
	}
	printf("\n");
	fclose(fp);
}
/*sort menu*/
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
		printf("Warning:Please enter the correct option\n");
		break;
	}

}

int main()
{
	double num11[7] = { 0 };
	char ch11[7][2] = { 0 };
	double num21[7] = { 0 };
	char ch21[7][2] = { 0 };
	double num31[7] = { 0 };
	char ch31[7][2] = { 0 };
	int choose;
	Student* st = init_Student();
	//Sfile_Import(st);
	readFile(st);
	//ipfile();
	readLeson(num11,ch11,num21,ch21,num31,ch31);
	//import_Course(st);
	 //print( st);
	// Sfile_Import();
	//cours.num = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%f,%c", num1[i], ch1[i]);
//}
	/*for (int i = 0; i < 7; i++)
	{
		printf("%c %0.2f\n", ch21[i], num21[i]);
	}*/
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
			import_Course(st, num11, ch11, num21, ch21, num31, ch31);
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
			printf("Warning:Please enter the correct option\n");
			break;
		}
		getchar();
		printf("Please press any key to continue\n");
		getchar();
		system("CLS");
	}
	
	return 0;
}