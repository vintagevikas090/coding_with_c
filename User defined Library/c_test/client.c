#include <stdio.h>

#include "header/area.h"
#include "header/interest.h"

int main(){

    double interest = sim_interest(10000, 1, 2);
    double tr_area = triangle_area(2, 4);
    double rec_area = rectangle_area(4, 9);
    double cr_area = circle_area(4);

    printf("Interest is = %.2lf\n", interest);
    printf("Triangle area is = %.2lf\n", tr_area);
    printf("Rectangle area is = %.2lf\n", rec_area);
    printf("Circle area is = %.2lf\n", cr_area);

    return 0;
}