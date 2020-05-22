#include<stdio.h>
int fileexport(char*);
int main() 
{ 
	char fileName[20]; 
	printf("please enter the name of the file you want to export to:");
	scanf("%s", fileName); // read name of file (.txt) to export to
	int result = fileexport(fileName); 
	if (result == 1) printf("export success");
	else printf ("export failure");
	return 0;
}
int fileexport(char *fn) {
    FILE *src,*dst;
    char str[100];
    src = fopen("students.txt", "r") ;//read the file
    dst = fopen("fn", "w") ;//open the second file and prepare to copy into it 
    while((fgets(str,100,src))!= NULL)//get data from student.txt
        fputs(str,dst);//put into the designated file
    fclose(src);//close the file
    fclose(dst);//close the file
    return 1;
}
