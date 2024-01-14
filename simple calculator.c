#include <stdio.h>
int main()
{
    char c;
    float a,b,result;

    printf("Enter operoter you want('+','-','*','/'):");
    scanf("%c",&c);

    printf("Enter first value:");
    scanf("%f",&a);

    printf("Enter second value:");
    scanf("%f",&b);


    if(c=='+'){
        result=a+b;
    }

     else if(c=='-'){
        result=a-b;
    }

     else if(c=='*'){
        result=a*b;
    }

     else{
        result=a/b;
    }

    printf("result=%.2f",result);




    return 0;

}
