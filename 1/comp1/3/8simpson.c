#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x) {
    return (1 + x*x*x);
}
void main() { 

    float a,b,h,I,X = 0, Y =0;
    int i,n;
    printf("Enter lower limit and upper limit\n");
    scanf("%f %f", &a, &b);
    printf("Enter the number of strips");
    scanf("%d", &n);

    h = (b-a) / 3;
    
    I = ((3*h) / 8)* (f(a) + 3*f(a+h) + 3*f(a+2*h) + f(b));

     printf("Result is: %f\n", I);


}