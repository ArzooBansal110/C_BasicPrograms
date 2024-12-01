#include<stdio.h>

int main(){
    int a,num,even,odd,negative,positive;
    printf("Input an integer: ");
    scanf("%d",&a);

    if(num=a%2==0){
        printf("Even");
    }
    if(num=a%2!=0){
        printf("odd");
    }
    if(num=+a){
        printf("Positive");
    }
    if(num=-a){
        printf("Negative");
    }
    return 0;
}