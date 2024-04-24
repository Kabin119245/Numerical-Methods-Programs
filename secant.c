#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float E = 0.0001;


float f(float x) {
return( pow(x, 2) - 4 * x -10);
  }

void main() {
        float x1,x2,x0, f0, e;
        printf("Enter two initial values\n");
        scanf("%f %f", &x0, &x1);

do {

        x2 = x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
        x0=x1;
        x1=x2;


        e = fabs((x2 - x1)/2);
        } while( e > E);
             printf("Root = %f\n", x2);

       
 }
        
            
        

    

   
