#include <stdio.h>
#include <math.h>
int main(void) {
  int i,n;
  double ex=1,x,nume=1,deno=1;
  printf("enter the value of x");
  scanf("%lf",&x);
  printf("enter the number of terms (n)");
  scanf("%d",&n);
  for (i=1;i<=n-1;i++)
    {
      nume *= x;
      deno *= i;
      ex += nume/deno;
    }
  printf("The approximate value of e^%f: %.12f",x,ex);
  printf("The value of e^%f using C library function: %.12f",x,exp(x));
  printf("The absolute difference between the two values: %.12f",fabs(ex-exp(x)));
  
  return 0;
}