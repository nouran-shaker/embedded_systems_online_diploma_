#include <stdio.h>
#include <stdlib.h>

#define pi 3.14
#define area(r) r*r*pi

int main()
{float radius;
    printf("Enter radius:");
    scanf("%f",&radius);
    printf("Area=%.2f",area(radius));
    return 0;
}
