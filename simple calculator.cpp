#include <iostream>
using namespace std;

int main()
{
    float a,b,result;
    char c;

    cout<<"enter operate you want(+,-,*,/):";
    cin>>c;

    cout<<"enter first value:";
    cin>>a;

    cout<<"enter second value:";
    cin>>b;

    switch(c){

    case('+'):
    result=a+b;

    case('-'):
    result=a-b;

    case('*'):
    result=a*b;

    case('/'):
    result=a/b;

    break;
    }

    cout<<"result="<<result;




    return 0;
}

