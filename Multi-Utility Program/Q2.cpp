#include <stdio.h>

int main()
{
    float salary, hra, da, ta, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra);

    printf("Enter DA percentage: ");
    scanf("%f", &da);

    printf("Enter TA percentage: ");
    scanf("%f", &ta);

    gross = salary + (salary * hra / 100) + (salary * da / 100) + (salary * ta / 100);

    printf("Gross Salary = %.2f", gross);

    return 0;
}

