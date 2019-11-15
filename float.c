#include<stdio.h>
void main()
{   //give input in keyboard and two float number sum
    float a,b,c;   // memory 4 byte   //range - 3.4 X 10 to de power -38 man rakha jabe
    printf("Enter first Float number: ");
    scanf("%f",&a);  //format spacier  %f

    printf("Enter second Float number: ");
    scanf("%f",&b);

    c = a+b;
    printf("Sum of two Float number: %f\n",c);
    printf("Sum of two Float number point last two number: %.2f",c);
}
