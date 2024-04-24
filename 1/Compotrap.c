#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) 1 + x*x*x
void main() { 

    float a,b,h,I,X=0,p =0;
    int n,i;
    printf("Enter lower limit and upper limit\n");
    scanf("%f%f", &a, &b);
    printf("Enter the number of strips");
    scanf("%d", &n);

    h = (b-a) / n;
        for(i = 1 ; i <= n-1 ; i++) {
            p = (a + i * h);
            X = X +  (f(p));
        }
         I =  (h / 2) * (f(a) + 2*X + f(b));


    printf("Result is: %f\n", I);


}