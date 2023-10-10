#include <stdio.h>

int main(){
    float x;
    float y;

    printf("enter a number for x?\n");
    scanf("%f" , &x);

    printf("enter a number for y?\n");
    scanf("%f" , &y);

    float z = x * y;

    printf("the value for z is %f \n" , z);

    return 0;
}