/**
* test11.c
* @author bulbasaur
* @description 
* @created 2020-04-27T08:29:53.694Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-27T09:55:41.789Z+08:00
*/

#include <stdio.h>

#include <math.h>

struct point
{
    float x;
    float y;
};

struct line
{
    struct point p1, p2;
};


struct triangle
{
    struct point p1, p2, p3;
};
float length(struct point a, struct point b);
int main() {
    // struct point t[3];
    struct triangle t;

    
    printf("Please input the three paires of the triangle in one line with spaces: \n");
    // for (int i = 0; i < 3; i++)
    // {
    //     /* code */
    //     scanf("%f %f", &t[i].x, &t[i].y);
    // }
    scanf("%f %f %f %f %f %f", &t.p1.x, &t.p1.y, &t.p2.x, &t.p2.y, &t.p3.x, &t.p3.y);

    // float line1 = length(t[0], t[1]);
    // float line2 = length(t[1], t[2]);
    // float line3 = length(t[0], t[2]);

    float line1 = length(t.p1, t.p2);
    float line2 = length(t.p1, t.p3);
    float line3 = length(t.p2, t.p3);

    float circum = line1 + line2 + line3;

    printf("The lines' length are: %f\t%f\t%f\n", line1, line2, line3);
    printf("The circumference of the triangle is %f\n");
    
    return 0;
}

float length(struct point a, struct point b) {
    return sqrt((b.x- a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

// float circum(struct triangle t1) {
//     int line1 = length(t1.p1, t1.p2);
//     int line2 = length(t1.p1, t1.p3);
//     int line3 = length(t1.p2, t1.p3);

//     return line1 + line2 + line3;
// }