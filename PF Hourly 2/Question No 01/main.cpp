#include <iostream>

void findcost(int quantity[],int unitprice[]){
    int totalcost[10];
    for(int i=0;i<10;i++){
        int cost = quantity[i]*unitprice[i];
        totalcost[i]= cost;
        printf("\nTotal Cost for Item %d = %d",i+1,cost);
    }
}

int main(){
    int quantity[10];
    int unitprice[10];
    
    for(int i=0;i<10;i++){
        printf("ITEM: %d",i+1);
        printf("\nEnter the quantity purchased: ");
        scanf("%d",&quantity[i]);
        printf("Enter the unit price: ");
        scanf("%d",&unitprice[i]);
        printf("\n");
    }
    
    findcost(quantity,unitprice);
    
    return 0;
}
