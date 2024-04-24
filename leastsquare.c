#include<stdio.h>
#include<conio.h>
int main()
{
 int n, i;
 float x[10], y[10], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
 printf("How many data points?\n");
 scanf("%d", &n);
 printf("Enter data:\n");
 for(i=0;i<n;i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &y[i]);
 }
 for(i=0;i<n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 printf("Values are: a=%f and b = %f",a,b);
 printf("\nEquation of best fit is: p = %0.2f + %0.2fw",a,b);
}