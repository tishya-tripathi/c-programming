/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);
    
    
    //Check if Pronic no
    int isPronic=0;
    for(int i=1; i<n; i++)
    {
        if(n == i*(i+1))
        {
                isPronic = 1;
                break;
        }
    }
    
    if(isPronic==1)
        printf("Pronic no\n");
    else 
        printf("Not a Pronic no\n");
    
    return 0;
}
