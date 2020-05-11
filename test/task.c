#include<stdio.h>

struct student{
	char name[20];
	float score;
	char major[20];
};

int main(){
	int x;
	printf("Please input the number of students(<=50): ");
	scanf("%d",&x);
	while (x>50){
		printf("Warning:Please input a number which does not exceed 50.\nInput again:");
		scanf("%d",&x);
	}
	struct student stu[50];
	printf("Please input students' information:\n");
	for(int i=0;i<x;i++){
		scanf("%s %f %s",stu[i].name,stu[i].score,stu[i].major);
	}
	for(int j=0;j<x;j++){
		printf("%s %f %s",stu[j].name,stu[j].score,stu[j].major);
	}
	return 0;
}