#include <stdio.h>
#include <stdlib.h>

int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    int count = 0;
    int count1 = 0;
    
    for(int i = 0; i < nums1Size; i++)
    {
        for(int j = 0; j < nums2Size; j++)
        {
            if(nums1[i] == nums2[j])
            {
                count++;
                break;
            }
        }
    }
    
    for(int i = 0; i < nums2Size; i++)
    {
        for(int j = 0; j < nums1Size; j++)
        {
            if(nums2[i] == nums1[j])
            {
                count1++;
                break;
            }
        }
    }

    int* res = (int*)malloc(2 * sizeof(int));
    res[0] = count;
    res[1] = count1;
    *returnSize = 2;
    return res;
}

int main()
{
    int nums1Size, nums2Size;

    printf("Enter size of nums1: ");
    scanf("%d", &nums1Size);

    int *nums1 = (int*)malloc(nums1Size * sizeof(int));
    printf("Enter elements of nums1:\n");
    for(int i = 0; i < nums1Size; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of nums2: ");
    scanf("%d", &nums2Size);

    int *nums2 = (int*)malloc(nums2Size * sizeof(int));
    printf("Enter elements of nums2:\n");
    for(int i = 0; i < nums2Size; i++)
        scanf("%d", &nums2[i]);

    int returnSize;
    int* result = findIntersectionValues(nums1, nums1Size, nums2, nums2Size, &returnSize);

    printf("Result: [");
    for(int i = 0; i < returnSize; i++)
    {
        printf("%d", result[i]);
        if(i < returnSize - 1)
            printf(", ");
    }
    printf("]\n");

    // ✅ free allocated memory
    free(nums1);
    free(nums2);
    free(result);

    return 0;
}
