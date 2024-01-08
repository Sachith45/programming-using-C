#include <stdio.h>

int main()
{
     int a=1;

     printf("%d\n",a);

     a=a++;//this is post incriment because 'a' value not change

     printf("%d\n",a);

     a=1;

     a=++a;//pre incriment because 'a' value is up to one

     printf("%d\n",a);

     a=1;

     a=a--;//this is post incriment because 'a' value not change

     printf("%d\n",a);

     a=1;

     a=--a;//pre incriment because 'a' value is up to one

     printf("%d\n",a);

    return 0;
}
