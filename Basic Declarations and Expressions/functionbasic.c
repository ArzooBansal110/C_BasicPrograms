#include<stdio.h>

int sum(int a,int b){
    return a+b;
}
int main(){
    int add;
    add=sum(10,50);

    printf("The sum is: %d",add);
    return 0;
    
}