#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float E = 0.0001;



float f(float x) {
return(3 * x + exp(x) );
  } 

 // float f(float x) {
//return(x * tan(x) -1 );
  //}

float ff(float x) {
  return (3 + exp(x));
}

//float ff(float x) {
  //  return (x * pow(1/cos(x),2) + tan(x));
//}
void main() {

        float x1,x0, f0, f1,e ;

        
        printf("Enter the initial values\n");
        scanf("%f", &x0);



do {

        x1 = x0 - (f(x0) / ff(x0));
        x0 = x1;



        e = fabs((x1 - x0) / x1);
        } while( e > E);
             printf("Root = %f\n", x1);

       
 }
        
            
        

    

   
