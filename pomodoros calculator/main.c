#include<stdio.h>
#include<math.h>


float calcpom(float hrs);

int
main()
{

    float hrs;
    printf(" Enter the number of PURE WORK HOURS  to convert to POMODOROES: ");
    scanf(" %f", &hrs);

    printf
    ("\n The Approximate number of POMODOROES you need to cover %.1f work hours are: %.1f",
        hrs, ceil(calcpom(hrs)));


}

float
calcpom(float hrs)
{


    return 2.4 * hrs;
}
