/*Heun’s Method:
1. Declare the variables
2. Read the initial values x and y and the step size h
3. Read the value of x for which y is required, say xp
4. Calculate the total no. of steps as n=(xp-x)/h
5. for i = 1 to n
Calculate the functional value f
y=y+h/2*(m1+m2)
x=x+h
6. Print the result x and y
7. End for iNumerical Methods
BCT/BEI/BEL-II/II
19
Note:
m1 = y' = f(x,y)
m2=f(x+h, y+h*m1) */

#include <stdio.h>
#include <stdlib.h>

float f(float x) {
   return(1 + 3 *x*x);
}
void main() {

    float x,y,xp,h,n;
    int i;
    printf("Enter Initial Values\n");
 printf("x = ");
 scanf("%f", &x);
 printf("y = ");
 scanf("%f", &y);
 printf("Enter calculation point xp = ");
 scanf("%f", &xp);
 printf("Enter step size ");
 scanf("%f", &h); 

 n = (xp-x)/h;
 for(i = 0; i < n; i++) {
    y=y+h/2*(f(x)+f(x+h));
    x=x+h;
 }

 printf("\nValue of y at x = %.2f is %f",x, y);
}