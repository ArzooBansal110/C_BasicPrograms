#include<stdio.h>

int main()
{
     const float pie = 3.14;
    int r,a,p;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
     
    a=(pie*r*r);
    printf("Area=%d\n",a);
    p=(2*pie*r);
    printf("Perimeter=%d",p);
    return 0; 


}
