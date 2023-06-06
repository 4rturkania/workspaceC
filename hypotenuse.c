#include <stdio.h>
#include <math.h>

int main() {

double legA;
double legB;

printf("Enter length of leg A\n"); 
scanf("%lf", &legA);
printf("Enter length of leg B\n"); 
scanf("%lf", &legB); 

double hypotenuse = sqrt(pow(legA, 2) + pow(legB, 2));
printf("Hypotenuse: %lf\n", hypotenuse); 

    return 0;
}
