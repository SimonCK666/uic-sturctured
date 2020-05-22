#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	float GPA;
	char score[5];
	printf("Please input the score: \n");
	scanf("%s", score);
	if (strcmp(score, "A") == 0)
	{
		/* code */
		GPA = 4;
	} else if (strcmp(score, "A-") == 0)
	{
		/* code */
		GPA = 3.67;
	} else if (strcmp(score, "B+") == 0)
	{
		/* code */
		GPA = 3.33;
	}
	 else if (strcmp(score, "B") == 0)
	{
		/* code */
		GPA = 3;
	} else if (strcmp(score, "B-") == 0)
	{
		/* code */
		GPA = 2.67;
	} else if (strcmp(score, "C+") == 0)
	{
		/* code */
		GPA = 2.33;
	} else if (strcmp(score, "C") == 0)
	{
		/* code */
		GPA = 2;
	} else if (strcmp(score, "C-") == 0)
	{
		/* code */
		GPA = 1.67;
	} else if (strcmp(score, "D") == 0)
	{
		/* code */
		GPA = 1;
	} else if (strcmp(score, "F") == 0)
	{
		/* code */
		GPA = 0;
	}

	printf("%.2lf\n", GPA);

	return 0;
}