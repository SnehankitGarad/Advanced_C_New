#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    char add[50];
    char mob[11];
};
// struct book
// {
//     int size;
//     struct student s[100];
// };

void add_contact(struct student *a, int *s)
{
    int x = 0;
    do
    {
        printf("Enter the Id: ");
        scanf("%d",&a[*s].id);
        printf("Enter the Name: ");
        scanf("%s",a[*s].name );
        printf("Enter the Address: ");
        scanf("%s",a[*s].add);
        printf("If you want to add press 1 or end it press 0: ");
        scanf("%d", &x);
        (*s)++;
    } while (x);
    

    // for (int i = 0; i < a->size; i++)
    // {
    //     printf("Enter the Id: ");
    //     scanf("%d",);
    //     printf("Enter the Name: ");
    //     scanf("%s", );
    //     printf("Enter the Address: ");
    //     scanf("%s", );
    // }
}

int print_all_student_info(struct student *arr, int *size)
{
    for (int i = 0; i < *size; i++)
    {
        printf("\nId: %d ", arr[i].id);
        printf("\nName: %s ", arr[i].name);
        printf("\nAddress: %s \n", arr[i].add);
    }
}

int main()
{
    struct student s[10];
    int i = 1;
    int size = 0;
    int ch;

    while (i)
    {
        printf("1.Add contact\n2.Print all student list\n3.Search specific stdent data\n\n");
        printf("Press the Option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add_contact(s,&size);
            break;
        case 2:
            print_all_student_info(s, &size);
            break;
        case 3:
            // Search_data(arr,size);
            break;
        default:
            break;
        }
        printf("\n");
        printf("If you want to add press 1 or end it press 0: ");
        scanf("%d", &i);
    }
}