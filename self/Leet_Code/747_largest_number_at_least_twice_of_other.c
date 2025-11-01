#include<stdio.h>


int dominantIndex(int nums[], int size) {
    int max = nums[0];
    int max_index = 0;

    
    for (int i = 1; i < size; i++) {
        if (nums[i] > max) {
            max = nums[i];
            max_index = i;
        }
    }

    
    for (int i = 0; i < size; i++) {
        if (i != max_index && max < 2 * nums[i]) {
            return -1;
        }
    }

    return max_index;
}

int main()
 {
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);

    int arr[num];
    printf("Enter the elements of array: ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }


    int result = dominantIndex(arr, num);
    printf("%d\n", result);

    return 0;
}
