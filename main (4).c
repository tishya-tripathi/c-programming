/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int sumSqr(int m)
{
    int sum=0;
    while(m != 0)
    {
        sum += pow(m%10, 2);
        m /= 10;
    }
    
    return sum;    
}
int main()
{
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);
    
    int s = sumSqr(n);
    
    while(s != 4 && s != 1)
    {
        s = sumSqr(s);
    }
    
    
    if(s==1)
        printf("%d is a Happy No\n", n);
        
    else
        printf("%d is not a Happy No\n", n);
    
    return 0;
}
