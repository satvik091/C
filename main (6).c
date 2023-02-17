#include <stdio.h>

int main()
{
    char a;
    int b,c;
    printf("enter a word:");
    scanf("%c",&a);
    
    ((a>='a' && a<='z') || (a>='A' && a<='Z'))?(printf("ALPHABET")):(printf("NOT AN ALPHABET"));
    
    
    
    return 0;
}
