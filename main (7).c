/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void digit(int n)
{
    if(n==0)
        return;
        
    int rem=n%10;
    
    digit(n/10);
    
    printf("%d ", rem);
    
}

int main()
{
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);

    digit(n);
    
    return 0;
}

