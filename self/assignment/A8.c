//A8 - WAP to find the median of two unsorted arrays?
#include <stdio.h>
int main()
{
    int a,b,i;
    
    scanf("%d",&a);
    int arr1[a];
    
    scanf("%d",&b);
    int arr2[b];
    
    float median1;
    float median2;
    
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<(a-i-1);j++)
        {
            if(arr1[j] > arr1[j+1])
            {
            int temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
            }
        }
        
    }
    
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<(b-i-1);j++)
        {
            if(arr2[j] > arr2[j+1])
            {
            int temp=arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]=temp;
            }
        }
    }
    
    
        if(a%2==0)
        {
           i= a/2;
            median1 =(arr1[i]+arr1[i-1])/(float)2;
            
        }
        else
        {
            i = a/2 ;
        median1 = arr1[i];
        }
    
    printf("Median of array1: %g",median1);
    
    printf("\n");
    
    
    
       if(b%2==0)
        {
            i=b/2;
            median2 = (arr2[i]+arr2[i-1])/(float)2;
            
        }
        else
        {
            i  = b/2 ;
            median2 =  arr2[i];
        }
        printf("Median of array2: %g",median2);
        
        printf("\n");
    
    float median3 = (median1 + median2)/(float)2;
    printf("Median of both arrays: %g",median3);
}
    
    
    
    
    
    
    
    
