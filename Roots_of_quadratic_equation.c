#include <math.h>
void main() 
{
     int a,b,c,d;
     printf("enter the  a,b,c value ");
     scanf("%d %d %d",&a,&b,&c);
     d=b*b-4*a*c;
     if(d>0)
     printf("roots are real");
     else if(d==0)
     printf("roots are equal");
     else 
     printf("roots are imaginary");
}     