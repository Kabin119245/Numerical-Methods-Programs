#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main() {
	int i,j;
    float x[7] = {3,4,5,6,7,8,9}, y,p, f[7]= {4.8, 8.4, 14.5, 23.6, 36.2, 52.8, 73.9}, l[7], xp;

    
    printf("Enter the interpolating value\n");
    scanf("%f", &xp);



    for(i =0; i < 7; i++) {
        l[i] = 1;
        for (j = 0; j < 7; j++) {
            if (i  != j) {
                l[i] = l[i] * ((xp - x[j]) / (x[i] - x[j]));
            }
        }
        p = p + (f[i] * l[i]);
    }
    printf("Root = %f", p);
}
