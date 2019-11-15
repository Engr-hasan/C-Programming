#include<stdio.h>
void main()
{   //give input in keyboard and two long long integer number sum
    long long int a,b,c;  //memory 8 byte  //long long //signat  //unsignat
    printf("Enter a first Number: ");
    scanf("%lld",&a);  //format spacier  %lld

    printf("Enter a second Number: ");
    scanf("%lld",&b);

    c = a+b;
    printf("Sum of Two number: %lld",c);

}

