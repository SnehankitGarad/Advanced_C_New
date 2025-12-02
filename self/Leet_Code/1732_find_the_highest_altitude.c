#include<stdio.h>
int largestAltitude(int* gain, int gainSize) 
{
    int current = 0;
    int max = 0;
    for(int i=0;i<gainSize;i++)
    {
        current += gain[i];
        if(current > max)
        {
            max= current;
        }
    }     
    return max;
}
int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);

    int gain[size];
    printf("Enter the Matrix: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&gain[i]);
    }

    int res = largestAltitude(gain,size);
    printf("Output is: %d\n",res);
}