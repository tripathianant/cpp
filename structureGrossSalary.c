#include <stdio.h>
struct employee
{
    int id, age, salary;
    char name[25];
};
int main()
{
    int i, n;
    float hr, da, gp;
    struct employee emp;
    printf("ENTER EMPLOYE ID , NAME , AGE  AND SALARY\n");
    scanf("%d %s %d %d", &emp.id, emp.name, &emp.age, &emp.salary);
    hr = emp.salary * 0.25;
    da = emp.salary * 0.75;
    gp = emp.salary + hr + da;
    printf("\nEMP_NAME\tEMP_NAME\tEMP_AGE\t\tEMP_SAL\n");
    printf("%d\t\t%s\t\t%d\t\t%d\n", emp.id, emp.name, emp.age, emp.salary);
    printf("GROSS SALAR OF THE EMPLOYEE IS %0.2f\n", gp);
}