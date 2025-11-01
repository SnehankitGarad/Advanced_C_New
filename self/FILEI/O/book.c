#include<stdio.h>
struct Book
{
    int id;
    char Name[20];
    int cost;

};
int add_book_info(struct Book arr[],int* s,FILE* fp)
{
    
    printf("Enter the book id: ");
    scanf("%d",&arr[*s].id);
    printf("Enter the book Name: ");
    scanf(" %s",arr[*s].Name);
    printf("Enter the book cost: ");
    scanf("%d",&arr[*s].cost);
    fprintf(fp,"%d %s %d",arr[*s].id,arr[*s].Name,arr[*s].cost);
    *s = *s +1;
    
}
int main()
{
    struct Book arr[20];
    FILE* fptr = fopen("student.txt","a+");
    int size=0;
    int i=1;
    while(i)
    {
        printf("1.Add Book\n2.Exit\n");
        int opt;
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
            add_book_info(arr,&size,fptr);
            break;

            case 2:
            printf("Thank You\n");
            return 0;
        }
        printf("Do you want to add more: ");
        scanf("%d",&i);
    }
}