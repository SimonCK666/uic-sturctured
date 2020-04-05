/**
* test8.c
* @author bulbasaur
* @description 
* @created 2020-03-29T20:30:19.458Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-31T11:48:59.824Z+08:00
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
/*Exercise 1 */
    // char str[10] = {'y', 'e'};
    // printf("%s\n", str);

    
    // char str2[] = 'o';
    // printf("%s\n", str2);

    // A string is an array of chars terminated with a null character ‘\0’.
    
    
    // char str3[] = "This is a message";
    // printf("%s\n", str3);


/* Exercise 2 */
    // char str[15] = "unix and c";
    
    // printf("%s", str);
    // printf("\n");
    // str[6] = '\0';
    // printf("%s", str);
    // printf("\n");
    // str[2] = '%';
    // printf("%s", str);
    // printf("\n");


/* Exercise 3 */
    // char str[] = "This is a message~";
    // puts(str);
    
    // printf("------------------\n");

    char lName[81], fName[81];
    int id_num;
    puts("Enter the last name, firstname, ID number separated by spaces ");
    puts("then press Enter \n");
    scanf("%s %s %d", lName, fName, &id_num);
    printf("3 items entered : %s %s %d\n", fName, lName, id_num);

    // char your_line[100];
    // printf("Enter a line: \n");
    // gets(your_line);
    // puts("Your input follows: \n");
    // puts(your_line);
    
    // strlen
    // char your_line[100] = "Hello";
    // int l;
    // l = strlen(your_line);
    // printf("The length of your_line is %d", l);

    // strcpy
    // char my_line[100];
    // char your_line[100] = "Hello";
    // int l;
    // strcpy(my_line, your_line);
    // printf("my line is %s", my_line);

    //strncpy : Objective : copy n characters from source to destination
    // char my_line[100];
    // char your_line[100] = "Hello";
    // strncpy(my_line, your_line, 2);
    // my_line[2] = '\0';
    // printf("my_line is %s", my_line);

    // strcmp
    // char my_line[100] = "Hello world";
    // char your_line[100] = "Hello World";
    // int l;
    // l = strcmp(my_line, your_line);
    // printf("%d\n", l);
    
    // char name1[16] = "Frans Coenen";
    // char name2[16] = {'F', 'r', 'a', 'n', 's', ' ', 'C', 'o', 'e', 'n', 'e', 'n'};
    // char name3[16] = {70, 114, 97, 110, 115, 32, 67, 111, 101, 110, 101, 110, 0};
    // printf("name1 = %s\n", name1);
    // printf("name2 = %s\n", name2);
    // printf("name3 = %s\n", name3);

    
/* Exercise 4 */
    
    // char name[2][8] = {"Frans", "Coenen"};
    // printf("names = %s, %s\n", name[0], name[1]);
    // printf("names = %s\n", name);
    // printf("Initials = %c.%c. \n", name[0][0], name[1][0]);
    

    
    return 0;
}

