#include<stdio.h>
int recur(int X,int y)
{
    if(y == 0)
    {
        return 1;
    }
    
    return X*recur(X,y-1);
}
int main()
{
    int X,y;
    printf("Enter Base: ");
    scanf("%d",&X);

    printf("Enter Complement: ");
    scanf("%d",&y);

    int n = recur(X,y);
    printf("Power is: %d\n",n);
}