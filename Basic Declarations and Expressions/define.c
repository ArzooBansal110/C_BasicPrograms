#include<stdio.h>

#define AREA(l,b)(l*b)
#define PI 3.141

int main(){
    int l=12,b=30,area;
    area=AREA(12,30);

    printf("The area of rectangle= %d",area);
    return 0;
}