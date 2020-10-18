#include<stdio.h>
#include<math.h>
void main()
{float a,y,X,Y,h,end; 
 printf("\nEnter Xo:");
 scanf("%f",&a);
 printf("\nEnter Yo:");
 scanf("%f",&y);
 printf("\nEnter h:");
 scanf("%f",&h);
 printf("\nEvaluate upto X=");
 scanf("%f",&end);
 for(float x=a;x<end;x+=h)
 {
     Y=y+h*( -x*x*y );
    X=x+h;
     y=y+0.5*h*(( -x*x*y )+( -X*X*Y ));
 }
 printf("Hence, Yn= %f\n",y);
}