#include<stdio.h>
#include <stdlib.h>
#include<string.h>

struct Course{
	char CourseGrade[20];
};

struct Title{
	char titleName[20];
};

struct student{
	char ID[20];
	char Name[20];
	int GPA;
	struct Course courses[20];
};

void Import(){
	FILE *src1, *src2, *src3;
	int a, b, c, d, e, i, num , titleNum = 0, studentNum1 = 0, studentNum2 = 0, pos = 0, flag1 = 0, flag2 = 0;
	char *p, str[100], checkCourse[20], courseFileName[25], ch[100];
	struct student stu1[20];
	struct student stu2[20];
	memset(stu1, 0, sizeof(stu1));
	memset(stu2, 0, sizeof(stu2));
	struct Title title[20];
	src1 = fopen("student.txt", "w");
	printf("Please import the course name: ");
	gets(checkCourse);
	fgets(ch, sizeof(ch), src1);
	p = strtok(ch, " ");
	while( p != NULL )
	{
		strcpy(title[titleNum].titleName, p);
		p = strtok(NULL, " ");
		titleNum++;
	}
	/* ���γ����Ƿ��ظ� */
	for( i = 0; i < 20; i++ ){
		if( strcmp( checkCourse, title[i+2].titleName ) == 0 ){
			printf("This course has appeared in this file now.\n");
			printf("Do you want to replace the old grades? (Yes/No) ");
			gets(str);
			if( strcmp( str, "Yes" ) == 0 ){
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
							strcpy(stu2[studentNum2 ++].Name, p);
						}
						else 
							if (pos == 1)
							{
								strcpy(stu2[studentNum2].ID, p);
							}
							else
							{
								strcpy(stu2[studentNum2 ++].courses[pos - 2].CourseGrade, p);
							}
						p = strtok(NULL, " ");
						pos ++;
					}
					pos = 0;
				}
				for( a = 0; a < 20; a++ ){
					strcpy( stu1[a].courses[i].CourseGrade, stu2[a].courses[0].CourseGrade);
				}
				flag1 = 1;
				fclose(src2);
				break;
			}
			else if( strcmp( str, "No" ) == 0 ){
				flag1 = 1;
				break;
			}
			else{
				printf("Please input Yes or No.");
				i--;		//��Ϊѭ�����i++������Ӧ����i--
			}
		}
	}
	if( flag1 != 1 ){
		while( 1 ){
			/* ������Ŀγ�������struct Title title[20]����д��*/
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
			if( flag2 == studentNum1 /*numΪ�ļ���ѧ��������*/ ){
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

void Delete() {
	printf("Here is the Delete function\n");
	getchar();
	getchar();

	/*
	You write code here about the Delete
	*/
}
void Calculate() {
	printf("Here is the Calculate function\n");
	getchar();
	getchar();
	/*
	You write code here about the Calculate
	*/

}
void Export() {
	printf("Here is the Export function\n");
	getchar();
	getchar();
	/*
	You write code here about the Export
	*/


}
void Quit() {
	exit(0); 
}

int main() {

	
	function_list();
	

	return 0;
}


void function_list() {
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
			case 2: Delete(); break;
			case 3: Calculate(); break;
			case 4: Export(); break;
			case 5: Quit(); break;
			default: printf("Number should between 1 -- 5!\n");
		}

	} while (1);
}