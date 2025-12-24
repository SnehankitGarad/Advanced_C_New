#include<stdio.h>
int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int l,w,h;
        scanf("%d%d%d",&l,&w,&h);

        if(h <= 41)
        {
            printf("%d\n",l*w*h);
        }
        else
        {
            printf("Cannot pass\n");
        }
    }
    return 0;
}