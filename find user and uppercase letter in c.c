#include <stdio.h>
int main()
{
    char a;

    printf("enter a charcter:");
    scanf("%c",&a);

    int i=a;

    if(65<=i&&i<=90){
      printf("Character is upper key");
    }

    else if(97<=i&&i<=122){
      printf("Character is lower key");
    }

    else {
     printf("Enterd is not a letter");
    }

    return 0;
}

