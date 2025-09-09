#include<stdio.h>
int main()
{
    int size;
    int count=0 ;

    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++)
    { 
        int flag = 0;
        for(int j=0;j<i;j++)
        {
            
            
            if(arr[i] == arr[j])
            {
                flag=1;
                break;
                
            }
            
        }
        
        if(flag == 0)
        {
            count++;
            printf("%d ",arr[i]);
        }
    

    }
    printf("\n");
   printf("%d\n",count);
}