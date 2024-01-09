#include <stdio.h>

int main()
{
     int m=40,n=20,o=20,p=30;

     m>n&&m!=0;//answer=1

     printf("%d\n",m>n&&m!=0);

     o>p||p!=20;//answer=1

     printf("%d\n",o>p||p!=20);

     (!(m>n&&m!=0));//answer=0

     printf("%d",!(m>n&&m!=0));

    return 0;
}
