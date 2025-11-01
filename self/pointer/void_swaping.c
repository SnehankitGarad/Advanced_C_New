#include<stdio.h>
void swap(void* p,void* q,int size)
{
    for(int i=0;i<size;i++)
    {
        char t = *(char*)p;
        *(char*)p = *(char*)q;
        *(char*)q  = t;   
        p++;
        q++;
    }
}
int main()
{
    int x = 0x12345678;
    int y = 0xABCDEF12;

    swap(&x,&y,sizeof(int));
    printf("%X %X",x,y);
}