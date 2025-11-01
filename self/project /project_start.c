#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    char add[50];
    char mob[11];
};
int add_contact(struct student* arr,int* size)
{
    printf("Enter the Id: ");
    scanf("%d",&arr[*size].id);
    // if(arr[*size].id >= '0' && arr[*size].id <= '9')
    // getchar(;
    int flag = 0;
    do
    {
        char a[30];
        printf("Enter the Name: ");
        scanf("%s",a);
        if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
        {
            flag = 1;
            strcpy(arr[*size].name,a);
        }
    } while (flag == 0);
    
    printf("Enter the Name: ");
    scanf("%s",arr[*size].name);
    // getchar();
    printf("Enter the Address: ");
    scanf("%s",arr[*size].add);
    // getchar();
    printf("Enter the Mbile: ");
    scanf("%s",arr[*size].mob);

    (*size)++;
}
int  print_all_student_info(struct student* arr,int* size)
{
    for(int i=0;i<*size;i++)
    {
        printf("Id : %d \n",arr[i].id);
        printf("Name : %s \n",arr[i].name);
        printf("Address : %s \n",arr[i].add);
        printf("mobile : %s \n",arr[i].mob);
          
    }
}
int main()
{
    struct student arr[50];
    int i=1;
    int size =0;
    int ch;

    while(i)
    {
        printf("1.Add contact\n2.Print all student list\n3.Search specific stdent data\n\n");
        

        printf("Press the Option: ");
        scanf("%d",&ch);


        switch (ch)
        {
        case 1:
            add_contact(arr,&size);
            
    
            break;
        case 2:
            print_all_student_info(arr,&size);
            break;
        case 3:
           // Search_data(arr,size);
            break;
        default:
            break;
        }
            printf("\n");
        printf("If you want to add press 1 or end it press 0: ");
        scanf("%d",&i);
    }
}