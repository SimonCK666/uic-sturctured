/**
* example1.c
* @author bulbasaur
* @description 
* @created 2020-03-15T21:59:32.498Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-15T22:04:48.640Z+08:00
*/

#include <stdio.h>
int main() {
    int a[5];
    int i;
    
    // for (i = 0; i < 5; i++)
    for (i = 0; i <= 5; i++)
    {
        /* code */
        a[i] = i;
    }

    // for (i = 0; i < 5; i++)
    for (i = 0; i <= 5; i++)
    {
        /* code */
        printf("a[%d] = %d\n", i, a[i]);
    }
        
    return 0;
}

/*

1. What is the output of this program?
Answers:
The output is:
a[0] = 0
a[1] = 1
a[2] = 2
a[3] = 3
a[4] = 4

2. Can we change i < 5 to i <= 5?
Answers:
When we change i < 5 to i <= 5, the output change as :
a[0] = 0
a[1] = 1
a[2] = 2
a[3] = 3
a[4] = 4
a[5] = 5

*/