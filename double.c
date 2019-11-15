#include<stdio.h>
void main()
{    //give input in keyboard and two double number sum
    double a,b,c;  //memory 8 byte   //Memory range - 1.7 X 10 to de power 308 man rakha jabe
    printf("First double number: ");
    scanf("%lf",&a);  //format spacier  %lf

    printf("Second double number: ");
    scanf("%lf",&b);

    c = a+b;
    printf("Sum of Two double number: %lf",c);
}
