 #include<stdio.h>
 void divideOddEven(int arr[], int n)
 {
   

    printf("Even Numbers: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0 && arr[i] != 0)
        {
            printf("%d ",arr[i]);
        }
       
    }
    printf("\n");
    printf("Odd numbers: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 1)
        {
            printf("%d ",arr[i]);
        }
        
        else if(arr[i] == 0)
        {
            printf("\n0 is neither odd noe even\n");
        }
    }

 }
 
 int main()
  {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
 
  divideOddEven(arr, n);
  return 0;
  }