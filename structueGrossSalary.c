#include <stdio.h>
struct employee
{
    int id, age, salary;
    char name[25];
};
int main()
{
    int l;
    do
    {
        int i, n;
        float hr, da, gp;
        struct employee emp;
        printf("Enter employee info as id , name , age , salary\n");
        scanf("%d %s %d %d", &emp.id, emp.name, &emp.age, &emp.salary);
        hr = emp.salary * 0.25;
        da = emp.salary * 0.75;
        gp = emp.salary + hr + da;
        printf("\nEMP_ID\tEMP_NAME\tEMP_AGE\t\tEMP_SAL\n");
        printf("%d\t\t%s\t\t%d\t\t%d\n", emp.id, emp.name, emp.age, emp.salary);
        printf("THE GROSS SALARY IS %0.2f\n", gp);
    } 
    return 0;
}