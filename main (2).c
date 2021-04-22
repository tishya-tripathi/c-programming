/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);
    
    printf("printing factors of %d:\n", n);
    
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
            printf("%d\t", i);
    }
    

    return 0;
}
