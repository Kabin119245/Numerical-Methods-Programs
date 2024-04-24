#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float E = 0.0001; 

float f(float x) {

return (pow(x, 3) + pow(x,2) -1);
}

float g(float x ) {
    return(1/(sqrt(x+1)));
}
void main() {
        float x1,x0,e ;
        int step = 1;
        
        printf("Enter the initial guess\n");
        scanf("%f", &x0);

        do {
            x1 = g(x0);
            step++;
            x0 = x1;

            
        }while( fabs(f(x1)) > E);

        printf("Root = %f\n", x1);

}

