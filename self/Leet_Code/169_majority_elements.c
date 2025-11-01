#include<stdio.h>
#include<stdlib.h>
int majoritynum(int* arr,int size)
{
    int count;
    int max=0;
    
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                //break;
            }
        }
        if(count>max)
        {
            max = count;
            
            printf("majority Num is: ");
             printf("%d ",arr[i]);
        }
    
        
    }
      
}
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    majoritynum(arr,size);
}