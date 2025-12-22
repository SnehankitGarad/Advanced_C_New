#include<stdio.h>
int findPivot(int arr[], int n)
{
    int sum,total;
    for(int i=1;i<n-1;i++)
    {
        int j = i;
        sum=0;
        while(j != 0)
        {
            sum +=arr[j-1];
            j--;
        }
        int k = i;
        total=0;
        while(k != n)
        {
            total += arr[k+1];
            k++;
        }

        if(sum == total)
        {
            return i;
        }
    }
    return -1;
} 
int main() 
{
int n, arr[50];
scanf("%d", &n);
for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
int pivot = findPivot(arr, n);

if(pivot !=-1) 
printf("Pivot element = %d at index %d\n", arr[pivot],pivot);
else 
printf("No pivot found\n");

return 0;
}