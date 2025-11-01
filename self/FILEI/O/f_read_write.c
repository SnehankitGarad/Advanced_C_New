#include<stdio.h>
int main()
{
    FILE* fp=(fopen("student.txt","w+"));
    int arr[5] ={1,2,3,4,5};
    fwrite(arr,sizeof(int),5,fp);
    int brr[5];
    rewind(fp);
    fread(brr,sizeof(int),5,fp);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",brr[i]);
    }
    fclose(fp);
    
}