/**
* floatArray.c
* @author bulbasaur
* @description 
* @created 2020-05-18T22:35:50.962Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-18T22:46:43.685Z+08:00
*/

struct Course
{
    /* data */
    char courseName[20];
    char courseGrade[20];
};

struct Student
{
    /* data */
    int ID[20];           // ID
    char Name[20];         // Name
    // float C_Mark;          // c programming marks
    // float English;         // English marks
    struct Course *courses;
    float GPA;
};

struct Student students[100];
struct Title 

void Export(struct Student *stu1, struct Student *stu2, struct Title *title) 
{
    FILE *fp;
	char ch[100];
	memset(ch, 0, sizeof(ch));
    fp = fopen("student.txt", "w");
	for (int i = 0; i < 10; ++ i)
	{
		strcat(ch, title[i].titleName);
		strcat(ch, " ");
	}
	fputs(ch, fp);

	for (int i = 0; i < 10; ++ i)
	{
		memset(ch, 0, sizeof(ch));
		strcat(ch, stu2[i].Name);
		strcat(ch, " ");
		strcat(ch, stu2[i].ID);
		strcat(ch, " ");
		//fprintf(fp, stu1[i].GPA);
		for (int j = 0; j < 10; ++ j)
		{
			strcat(ch, stu2[i].courses[j].CourseGrade);
			strcat(ch, " ");
		}
		fputs(ch, fp);
		fputs("\n", fp);
	}
    fclose(fp);
}