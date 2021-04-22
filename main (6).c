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
    printf("Enter a decimal no\n");
    scanf("%d", &n);
    
    int bin[100];
    int i = 0;
    
    while(n != 0)
    {
        int rem=n%2;
        bin[i++] = rem;
        n /= 2;
    }
    
    //print bin[] in reverse
    for(int j=i-1; j>=0; j--)
        printf("%d ", bin[j]);
        

    return 0;
}
