#include<stdio.h>
int odd(int num){
    int res=num%2;
    return res;
}
int main(){
    int a,b,c,d,e,x,y,z,s,t,add;
 printf("Input the first number: ");
 printf("Input the second number: ");
printf("Input the third number: ");
printf("Input the fourth number: ");
printf("Input the five number: ");

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

x=a;
odd(x);
y=b;
odd(y);
z=c;
odd(z);
s=d;
odd(s);
t=e;
odd(t);

if(x==odd&&y==odd&&z==odd&&s==odd&&t==odd);{
add=x+y+z+s+t;
}
printf("Sum of odd: %d",add);
return 0;
}












 





