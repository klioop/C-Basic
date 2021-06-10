#include <stdio.h>
// #define PI 3.141592f // 등호 없는 것 주의!
#define AI_NAME "Friday"

int main() {

    const float pi = 3.141592f;

    float radius, area, circum;

    printf("I'm %s.\n", AI_NAME);
    printf("Please, input radius\n");
    scanf("%f", &radius);

    area = pi * radius * radius; 
    circum = 2.0f * pi * radius;

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);

    return 0;
}