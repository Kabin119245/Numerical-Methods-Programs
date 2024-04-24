#include<stdio.h>
#include<conio.h>

float f(float x) {
    return(1 + 3*x*x);
    }

int main()
{
 float x, y, xp, h,n;
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


 for(i=1; i <= n; i++)
 {

  y = y + h * f(x);
  x = x+h;
  
 }

 
 printf("\nValue of y at x = %.2f is %.2f",x, y);


 return 0;
}