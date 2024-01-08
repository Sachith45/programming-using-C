#include <stdio.h>

int main()
{
    //this shows how to work postprix and prefix
    int a=1,b,c,d,e;

    printf("%d\n",a);//answer=1

    b=a++;//answer=1

    a=1;

    c=++a;//answer=2

    a=1;

    d=a--;//answer=1

    a=1;

    e=--a;//answer=0

    printf("%d\n%d\n%d\n%d\n",b,c,d,e);

    return 0;
}
