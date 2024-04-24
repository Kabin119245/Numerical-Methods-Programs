#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) 1+x*x*x
 void main() {
    float a,b,I,h;
    printf("Enter lower limit and upper limit\n");
    scanf("%f %f", &a, &b);
    h = b -a;

    I = (h/2) * (f(a) + f(b));
    printf("Result = %.3f\n",I);

 }