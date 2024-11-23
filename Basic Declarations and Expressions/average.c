#include<stdio.h>
#include<math.h>

int main(){
int weight_item1,weight_item2,No_of_items,average;

printf("weight_item1: \n"); 
printf("No_of_items: \n");
printf("weight_item2: \n");
printf("No_of_items: \n");
scanf("%d",&weight_item1);
scanf("%d",&No_of_items);
scanf("%d",&weight_item2);
scanf("%d",&No_of_items);

average=(weight_item1+weight_item2)/(No_of_items+No_of_items);

printf("Average of weights:%d",average);

return 0;
}


