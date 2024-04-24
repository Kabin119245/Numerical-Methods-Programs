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

    h = (b-a) / n;
    for(i = 1; i < n; i++) {
            if(i % 2 == 0) {
                
                Y = Y + f(a + (i*h));
            }
            else {
            
                X = X + f(a + (i*h));
            }
    }
    I = h * (f(a) + 4*X + 2*Y + f(b))/3;

     printf("Result is: %f\n", I);


}