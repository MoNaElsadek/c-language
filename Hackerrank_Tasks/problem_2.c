#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,sum;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for (i=1;i<6;i++)
    { 
        sum =sum +(n%10);
       n /= 10;
    }
     printf("%d",sum);
    return 0;
}
