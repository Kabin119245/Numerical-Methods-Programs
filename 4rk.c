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
    y=y+(f(x)+2*f(x+h/2)+2*f(x+h/2)+f(x+h))/6*h;
    x=x+h;
    
 }

 printf("\nValue of y at x = %.2f is %f",x, y);
}
