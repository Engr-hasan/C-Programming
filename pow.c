#include<stdio.h>
#include<math.h>
void main()
{
    int base,power,result;
    printf("Entr base: ");
    scanf("%d", &base);

    printf("Entr power: ");
    scanf("%d", &power);

    result = pow(base,power);   //pow function use get power result value
    printf("Result is : %d",result);
}
