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
    
    for(int i=2; i<=n; i++)
    {
        if(n%i == 0)
        {
            int isPrime = 1;
            
            //Check if i is Prime
            for(int j=2; j<i; j++)
            {
                if(i%j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            
            if(isPrime==1)
                printf("%d\t", i);
            
        }
    }
    
    return 0;
}