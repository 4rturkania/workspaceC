#include <stdio.h>

int main(){
    const double PI = 3.141592653589793;
    double radius;

    printf("Enter the radius of a circle:\n"); 
    scanf("%lf", &radius); 
    double circumference = (PI*2)*radius;
    double area = PI * radius * radius;

    printf("Circumference: %lf\nArea: %lf", circumference, area); 

    return 0;
}