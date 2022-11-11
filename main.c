#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=============\n");
    printf("POINT OF SALE\n");
    printf("==============\n");
    char item1, item2;
    double item1_price, item2_price, item1_qty, item2_qty, total_cost, cash_paid, cash_to_pay;
    printf("Enter   item1:");
    scanf("%s", &item1);
    printf("Enter qty in kgs:");
    scanf("%lf", &item1_qty);
    printf("Enter price per kg:");
    scanf("%lf", &item1_price);
    printf("item1 total cost: %.2lf", item1_qty * item1_price);
    printf("\nEnter   item2:");
    scanf("%s", &item2);
    printf("Enter qty in kgs:");
    scanf("%lf", &item2_qty);
    printf("Enter price per kg:");
    scanf("%lf", &item2_price);
    printf("item2 total cost: %.2lf", item2_qty * item2_price);

    printf("\ntotal cost: %.2lf", item1_qty * item1_price + item2_qty * item2_price);
    double vat;
    printf("\nEnter total cost:");
    scanf("%lf",&total_cost);
    printf("Cash to pay: %.2lf\n",total_cost * 0.16 + total_cost);

    printf("\nenter cash paid:");
    scanf("%lf", &cash_paid);

    printf("\nenter cash  to pay:");
    scanf("%lf", &cash_to_pay);
    printf("Balance: %.2lf",cash_paid - cash_to_pay);























    return 0;
}
