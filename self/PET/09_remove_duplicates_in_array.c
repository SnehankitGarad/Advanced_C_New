#include<stdio.h>
 int removeDuplicates(int arr[], int n)
 {
    int k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                for( k = j ;k < n ;k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
            }
        }
    }
    return n;
 }
 
  int main()
  {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
 
  int new_n = removeDuplicates(arr, n);
  for (int i = 0; i < new_n; ++i)
  printf("%d ", arr[i]);
  printf("\n");
  return 0;
 }