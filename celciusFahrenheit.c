#include <stdio.h>
#include <ctype.h> // for toupper, but I could instead just add more condition to if-else and while statemants

int main()
{
    char unit;
    float temp;
    float convertedTemp;

    printf("Is the temperature in Fahrenheit (F) or Celsius (C)?\n");
    scanf(" %c", &unit);
    unit = toupper(unit);

    // continually ask for the correct value
    while (unit != 'F' && unit != 'C')
    {
        printf("Valid inputs are only F or C.\n");
        scanf(" %c", &unit);
        unit = toupper(unit);
    }

    printf("Please enter the temperature.\n");
    scanf("%f", &temp);

    if (unit == 'F')
    {
        convertedTemp = (temp - 32) * 5 / 9;
        printf("%0.1f in Fahrenheit is %0.1f in Celsius\n", temp, convertedTemp);
    }
    else if (unit == 'C')
    {
        convertedTemp = (temp * 9 / 5) + 32;
        printf("%0.1f in Celsius is %0.1f in Fahrenheit\n", temp, convertedTemp);
    }

    return 0;
}