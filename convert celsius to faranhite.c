#include <stdio.h>

int main()
{
    float x;
    printf("enter value in celsius=");
    scanf("%f",&x);

    float y;
    y=(x*9/5)+32;//how to work operators

    printf("fahrenheit=%.2f",y);
    return 0;
}
