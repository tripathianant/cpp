#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} h1, h2, result;
int main()
{
    // take first distance input
    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &h1.feet);
    printf("Enter inch: ");
    scanf("%f", &h1.inch);
    // take second distance input
    printf("\nEnter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &h2.feet);
    printf("Enter inch: ");
    scanf("%f", &h2.inch);
    // display distance
    printf("\nFirst distance = %d feet %.2f inch", h1.feet, h1.inch);
    printf("\nSecond distance = %d feet %.2f inch\n", h2.feet, h2.inch);
    // adding distances
    result.feet = h1.feet + h2.feet;
    result.inch = h1.inch + h2.inch;
    printf("\nSum of distances = %d feet %.2f inch\n", result.feet, result.inch);
    // subtracting distances
    if (h1.feet > h2.feet)
        result.feet = h1.feet - h2.feet;
    else
        result.feet = h2.feet - h1.feet;
    if (h1.inch > h2.inch)
        result.inch = h1.inch - h2.inch;
    else
        result.inch = h2.inch - h1.inch;
    printf("\nDifference of distances = %d feet %.2f inch\n", result.feet, result.inch);
    return 0;
}