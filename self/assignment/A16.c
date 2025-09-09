#include<stdio.h>
void sorting(int size,int* arr)
{    
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
   // printf("Mx: %d ",max);
   int s_max=arr[0];
   for(int i=0;i<size;i++)
   {
	   if(arr[i]>max && arr[i] != max)
	   {
		   s_max=arr[i];
	   }
   }
    int min= arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    //printf("Mn : %d",min);
   for(int i=0;i<size-1;i++)
    {
        if(arr[i]<s_max && arr[i] >min)
        {
            min=arr[i];
        }
        printf("%d ",min);

    }
   printf("%d",max); 
    

  
}
int main()
{
  
   int size;
   scanf("%d",&size);
    int arr[size];
   for(int i=0;i<size;i++)
   {
    scanf("%d ",&arr[i]);
   }
   
    
    
    printf("After sorting: ");
    sorting (size,arr);
    

    


    
    
     
    
    
}


