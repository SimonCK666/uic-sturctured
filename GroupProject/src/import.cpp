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
void function_list();
void Import(){
	FILE *src1, *src2, *src3;
	int a, b, c, d, e, i, num , flag1 = 0, flag2 = 0;
	char str[100], checkCourse[20], courseFileName[25];
	struct student stu1[20];
	struct student stu2[20];
	struct Title title[20];
	src1 = fopen("student.txt", "w");
	printf("Please import the course name: ");
	gets_s(checkCourse);
	/* ��ȡstudent.txt��title����Ϣ����д�� */
	/* ���γ����Ƿ��ظ� */
	for( i = 0; i < 20; i++ ){
		if( strcmp( checkCourse, title[i+2].titleName ) == 0 ){
			printf("This course has appeared in this file now.\n");
			printf("Do you want to replace the old grades? (Yes/No) ");
			gets_s(str);
			if( strcmp( str, "Yes" ) == 0 ){
				printf("Please input the file name to import: ");
				gets_s(courseFileName);
				src2 = fopen( courseFileName, "r" );
				/* ���ļ��ж�ȡnewGrade (��д��*/
				for( a = 0; a < 20; a++ ){
					strcpy( stu1[a].courses[i].CourseGrade, stu2[a].courses[0].CourseGrade);
				}
				flag1 = 1;
				fclose(src2);
				break;
			}
			else if( strcmp( str, "No" ) == 0 ){
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
			/* ������Ŀγ�������title����д��*/
			printf("Please input the file name to import: ");
			gets_s(courseFileName);
			src3 = fopen( courseFileName, "r" );
			/* ���ļ��ж�ȡѧ����Ϣ (��д��*/
			for( b = 0; b < 20; b++ ){ 
				for( c = 0; c < 20; c++ ){
					if( stu2[b].ID == stu1[c].ID ){
						flag2++;
					}
				}
			}
			if( flag2 != num /*numΪ�ļ���ѧ��������*/ ){
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
		}
	}
	fclose(src1);
	fclose(src3);
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