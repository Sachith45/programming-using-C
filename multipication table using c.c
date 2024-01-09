#include <stdio.h>
int main()
{
    int a;
    for(int k=1;k<11;k++){
        printf("  %d\t",k);
    }

    printf("\n");

    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
                a=i*j;
            printf("  %d\t",a);
        } printf("\n\n");
    }



    return 0;
}
