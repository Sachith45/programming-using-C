#include <stdio.h>

int main()
{
    float a,b,c,H;
    int p=2;
    printf("enter weight(kg):");
    scanf("%f",&a);

    printf("enter hight(m):");
    scanf("%f",&b);

    H=pow(b,p);//how to get power
    float BMI;
    BMI=a/H;

    printf("%.2f\n",BMI);
    if(BMI<18.5){
       printf("you are underweight\n");
    }
    else if(BMI>18.5&&BMI<=25.0){
       printf("you are normal weight");
    }
    else if(BMI>25.0&&BMI<30.0){
       printf("you are overweight");
    }
    else{
    printf("you are obesity");
    }

  return 0;
}
