/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("1st No.");
    scanf("%d",&a);
    printf("2nd No.");
    scanf("%d",&b);
    printf("3rd No.");
    scanf("%d",&c);
    
    a>b && a>c ?printf("a is maximum."):b>a && b>c?printf("b is maximum."):printf("c is maximum.");
    
    return 0;
}
