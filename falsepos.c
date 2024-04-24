#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float E = 0.0001;
float f(float x) {

return( pow(x, 2) -  x -2);
  }

  void main () {
    float x1,x2, f1, f2, x0, f0;
    
    up:
    printf("Enter the  initial values of x1 and x2\n");
    scanf("%f %f", &x1, &x2);

    f1 = f(x1);
    f2 = f(x2);


     if ((f1 * f2) > 0) {
        printf("Take another values\n");
        goto up;
    }
      do {

            x0 = (float)(x1* f2 - x2 * f1) / (f2 - f1);
            f0 = f(x0);

            if ((f1 * f0) < 0) {
                x2 = x0;
                f2 = f0;

            }

            else {
                x1 = x0;
                f1 = f0;

            }
    
        
        } while(fabs(f0) > E);


    printf("Root = %f",x0);


}
  