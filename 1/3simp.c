#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) 1 + x*x*x
void main() { 

    float a,b,h,I;
    printf("Enter lower limit and upper limit\n");
    scanf("%f %f", &a, &b);

    h = (b-a) / 2;
     I = (h/3) * (f(a) + 4 * (f((a+b) / 2)) + f(b));

     printf("Result is: %f\n", I);


}