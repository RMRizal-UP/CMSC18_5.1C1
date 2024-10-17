#include <stdio.h>
#include <math.h>

#define pi 3.1415

void rectangle();
void circle();

float main() {
    int shape;
    printf("Enter the shape you want to calculate: \n");
    printf("[1] Rectangle\n[2] Circle\n");
    scanf("%d", &shape);
    switch (shape) {
        case 1:
            rectangle();
        break;

        case 2:
            circle();
        break;

        default:
            printf("Invalid input");
        break;
    }
}

void rectangle(){
    float length, width;
    printf("Enter the length of the rectangle:");
    scanf("%f", &length);
    printf("Enter the width of the rectangle:");
    scanf("%f", &width);
    float area = length * width;
    float perimeter = 2*(length+width);
    printf("The area of the rectangle is %f. \n", area);
    printf("The perimeter of the rectangle is %f.", perimeter);
    return 0;
}

void circle() {
    float radius;
    float area, perimeter;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = pi * (radius * radius);
    perimeter = 2 * pi * radius;
    printf("The area of the circle is %. \n", area);
    printf("The circumference of the circle is %f.", perimeter);
    return 0;
    }