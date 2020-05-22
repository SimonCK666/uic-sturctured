#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct student
{
    char id[20];
    char name[20];
    float GPA;
};
void sort_1(student *std);
void sort_2(student *std);

int main()
{
    student std[10];
    for (int i = 0; i < 10; ++ i)
    {
        cin >> std[i].id >> std[i].name >> std[i].GPA;
    }
    cout << endl;
    
    sort_1(std);
    for (int i = 0; i < 10; ++ i)
    {
        cout << std[i].id << " " << std[i].name << " " << std[i].GPA << endl;
    }
    cout << endl;

    sort_2(std);
    for (int i = 0; i < 10; ++ i)
    {
        cout << std[i].id << " " << std[i].name << " " << std[i].GPA << endl;
    }
    return 0;
}

void sort_1(student *std)
{
    for (int i = 0; i < 10 - 1; ++ i)
    {
        for (int j = 0; j < 10 - i - 1; ++ j)
        {
            if (strcmp(std[j].id, std[j + 1].id) < 0)
            {
                char tmp[20];
                strcpy(tmp, std[j].id);
                strcpy(std[j].id, std[j + 1].id);
                strcpy(std[j + 1].id, tmp);
            }
        }
    }
}

void sort_2(student *std)
{
     for (int i = 0; i < 10 - 1; ++ i)
    {
        for (int j = 0; j < 10 - i - 1; ++ j)
        {
            if (std[j].GPA - std[j + 1].GPA > 1e-12)
            {
                float tmp;
                tmp = std[j].GPA;
                std[j].GPA = std[j + 1].GPA;
                std[j + 1].GPA = tmp;
            }
        }
    }
}