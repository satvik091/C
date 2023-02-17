#include <stdio.h>

int main()
{
    int a;
    printf("enter a year:");
    scanf("%d",&a);
    
    (a%4==0 && a%100!=0)||(a%400==0)?printf("Leap year."):printf("Not a leap");
    
    
    return 0;
}
