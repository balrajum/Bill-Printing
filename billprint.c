#include <stdio.h>

#define MAX_ITEMS 100
typedef struct bill {
        char itemname[50];
        int quantity;
        float price;
        float total;
}Items;
void print(int count,Items items[])
{
        printf("  -----------------------------------------\n");
        printf("\t   :: BILL INFORMATION ::\t\n");
        printf("  -----------------------------------------\n");
        printf("   Item\t\tQty.\tPrice\ttotal\n");
        for(int i=0;i<count;i++)
        {
                printf("   %s\t\t",items[i].itemname);
                printf("%d\t",items[i].quantity);
                printf("%.2f\t",items[i].price);
                printf("%.2f\t\n",items[i].total);
        }
        float sum=0;
        for(int i=0;i<count;i++)
        {
                sum = sum+items[i].total;
        }
        printf("  -----------------------------------------\n");
        printf("\t\t    Total Bill: %.2f\n",sum);
        printf("  ------------------------------------------\n");
        printf("\n");
        printf(" Thank you for shopping! Visit again.\n");

}

int main()
{
        Items items[MAX_ITEMS];
        int i=0;
        char ch;
        do
        {
                printf("Enter the item name:");
                scanf("%[^\n]",items[i].itemname);

                printf("Quantity of the item:");
                scanf("%d",&items[i].quantity);

                printf("Price of the item:");
                scanf("%f",&items[i].price);

                items[i].total = items[i].quantity * items[i].price;
                i++;

                printf("Do you want to add more(Y/N) :");
                scanf(" %c",&ch);
                getchar();
                }while(ch == 'y' || ch == 'Y');
                print(i,items);

                return 0;
}
