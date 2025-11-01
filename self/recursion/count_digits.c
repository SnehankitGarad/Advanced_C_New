#include<stdio.h>
int count_n(int num,int count)
{
    int r;
   
   { if(num==0)
    {
        return count;

    }
    //num=num/10;
    count++;
   r = count_n(num/10,count);
    }
    return r;
    

}
int main()
{
    int n;
    scanf("%d",&n);
    int c =count_n(n,0);
    printf("%d ",c);
}