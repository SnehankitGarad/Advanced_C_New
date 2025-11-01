#include <stdio.h>
struct bill
{
    char name[30];
    int quantity;
    float cost;
};
int main()
{
    struct bill arr[50];
    int size = 0;
    int i = 1;
    int tq = 0;
    float tc = 0;
    double ta = 0;

    while (i)
    {
        printf("Enter the Prdouct: ");
        scanf("%s", arr[size].name);

        printf("Enter no. of pcs: ");
        scanf("%d", &arr[size].quantity);

        printf("Enter the cost: ");
        scanf("%g", &arr[size].cost);

        printf("Enter 1 to add next item or 0 for bill: ");
        scanf("%d", &i);

        size++;
    }

    printf("Name\t\tQuantity\t\tCost\t\tAmount\n");
    printf("---------------------------------------------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\t\t%d\t\t\t%g\t\t%lf\n", arr[i].name, arr[i].quantity, arr[i].cost, arr[i].cost * arr[i].quantity);
        tq = arr[i].quantity + tq;
        tc = arr[i].cost + tc;
        ta = ta + arr[i].cost * arr[i].quantity;
    }
     printf("---------------------------------------------------------------------------\n");
    printf("grand total\t\t%d\t\t\t%g\t\t%lf\n",tq, tc, ta);
}