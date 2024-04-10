//? https://www.quora.com/What-is-the-formula-of-finding-the-divisor-when-quotient-dividend-and-remainder-is-given

#include <stdio.h>
int main()
{
 int D,Q,R;
 scanf("%d %d %d",&D,&Q,&R);
 
 int q = (D-R)/Q;
 printf("%d\n",q);
return 0;
}