#include<stdio.h>
int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) 
{
  int count = 0;
  for(int i=0;i<hoursSize;i++)
  {
    if(hours[i] >= target)
    {
        count++;
    }
  }
  return count;
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array values: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    int count = numberOfEmployeesWhoMetTarget(arr, size,  target); 
    printf("Number of Emplyess Meet target: %d\n",count);
}