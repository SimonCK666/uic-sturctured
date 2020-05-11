// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.27
// Task no: Week11_Task_1
/* Requirements:
Declare structures Point, Line and Triangle (refer to the lecture)
and define the point, line and triangle in the following picture.
Calculate the length of the line and the circumference of the
triangle
*/

#include <stdio.h>

#include <math.h>

// Declare the structures
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

// Define the function
float length(struct point a, struct point b);
int main() {
    // struct point t[3];
    struct triangle t;

    
    printf("Please input the three paires of the triangle in one line with spaces: \n");
	
	// input the paires
    scanf("%f %f %f %f %f %f", &t.p1.x, &t.p1.y, &t.p2.x, &t.p2.y, &t.p3.x, &t.p3.y);

	// Call the function
    float line1 = length(t.p1, t.p2);
    float line2 = length(t.p1, t.p3);
    float line3 = length(t.p2, t.p3);

    float circum = line1 + line2 + line3;

    printf("The lines' length are: %f\t%f\t%f\n", line1, line2, line3);
    printf("The circumference of the triangle is %f\n", circum);
    
    return 0;
}


// Function to calculus the length
float length(struct point a, struct point b) {
    return sqrt((b.x- a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

