#include<stdio.h>
#include<math.h>

int main(){ 
float x1,x2,y1,y2,x;    
printf("Value of x1:\n ");
scanf("%f",&x1);
printf("value of x2:\n ");
scanf("%f",&x2);

printf("Value of y1:\n ");
scanf("%f",&y1);
printf("value of y2:\n ");
scanf("%f",&y2);

x=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

printf("the distance between points:%f\n",x);
return 0;
}









































