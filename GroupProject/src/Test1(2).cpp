#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char *p;

	FILE *fin;
	char c, ch[100];
	int pos = 0;

	fin = fopen("student.txt", "r");
	fgets(ch, sizeof(ch), fin);
	fclose(fin);
	printf("%s", ch);

	p = strtok(ch, " ");
    while(p != NULL)
	{
        printf("p = %s\n", p);
        p = strtok(NULL, " ");
    }
    system("pause");
    return 0;
}