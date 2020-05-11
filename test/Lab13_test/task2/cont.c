/**
* cont.c
* @author bulbasaur
* @description 
* @created 2020-05-11T10:00:13.138Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-11T10:26:37.893Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>

struct stuRec
{
    char name[20];
    int id;
    char gender;
};

int main(int argc, char const *argv[])
{
    struct stuRec *p;
    // dynamic allcate the size of struct strRec to p
    p = (struct stuRec *)malloc(sizeof(struct stuRec));
    if ( p )
    {
        printf("Please input name, id and gender\n");
        scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
        printf("name: %10s, ID: %d, Gender: %c\n", p->name, p->id, p->gender);
        free(p);
    }
    
    return 0;
}


/*
Answer the questions:

1. What is this program supposed to do?
    Answer: The program supposed to dynamic allcate a memory which size of one struct 'stuRec' to the pointer p. The input and output the student information through pointer p.

2. Is the memory dynamically allocated or statically allocated?
    Answer: The memory is dynamically allocated.

3. What is %*c used for?
    Answer: Here, the %*c is used for just reading one character and ignore the others

4. If %-10s is changed to %10s, what happened?
    Answer: The output will change from '''name: Simon     , ID: 123, Gender: m''' to '''name:      Simon, ID: 123, Gender: m'''. Which means that -10s stands giving 10 spaces for outputing and left justifying, and 10s stands giving 10 spaces for outputing an right justifying. 

5. Why do we need to add free(p)?
    Answer: Because we dynamically allocated memory to the pointer p, after using the memory, we must give these memory back or your memory in the computer will be always occupied. For a long time, the memory in your computer will be run out of.

*/