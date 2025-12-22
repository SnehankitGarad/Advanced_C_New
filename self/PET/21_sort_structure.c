#include<stdio.h>
    typedef struct Car { 
        char brand[50]; 
        char model[50]; 
        int year; 
        } yours;

void sortCars(struct Car cars[], int size)
{
    yours temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(cars[i].year > cars[j].year)
            {
                temp = cars[i];
                cars[i] = cars[j];
                cars[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    yours cars[n];
    for (int i = 0; i < n; ++i)
    scanf("%s %s %d", cars[i].brand, cars[i].model, &cars[i].year);
    sortCars(cars, n);
    printf("Output: ");
    for(int i=0;i<n;i++)
    {
        printf("%s %s %d\n",cars[i].brand,cars[i].model,cars[i].year);
    }
    return 0;

}