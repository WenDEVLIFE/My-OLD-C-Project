#include <stdio.h>

int main () {
        float price;
        int quantity, compute;
        printf("Enter Your  Unit Price:\n");
        scanf("%f",&price);
        printf("Enter Your Contain quantity:\n");
        scanf("%d",&quantity);
        compute = price * quantity;
        printf("The Result of price and quantity value is:%d",compute);
        return 0;
}