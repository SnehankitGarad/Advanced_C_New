#include <stdio.h>
#include <string.h>
struct Contact
{
    char name[50];
    char phone[20];
    char email[50];
};
struct Addressbook
{
    struct Contact contacts[100];
    int contactcount;

};
int check_email(char* demo)
{
    int flag=0;
    int i=0;
    int at=0;int dot=0;
    char c,o,m;
    while(demo[i]!='\0')
    {
        if(demo[i]=='@')
        {
        demo[i]=at;
        }
        else if(demo[i] == '.')
        {
        demo[i]=dot;
        }
        i++;
        
    }
    printf("%d %d",at,dot);
    
    for(int j=0;j<dot;j++)
    {
        if(j<at)
        {
            if(!((demo[j]>='a' && demo[j]<='z') || (demo[j]>='0'&& demo[j]<='9')))
            {
                printf("Invalid Input");
                return flag=1;
            }
        }
        else if (j>at && j<dot)
        {
             if(!((demo[j]>='a' && demo[j]<='z') || (demo[j]>='0'&& demo[j]<='9')))
            {
                printf("Invalid Input");
                return flag=1;
            }
            
        }
        else if (j>dot)
        {
            if(!((demo[j]==c)&&(demo[j+1]==o)&&(demo[j+2]==m)))
            {
                printf("Invalid Input,Do It again ");
                return flag =1;
            }
        }
        
    }
    return flag;

}
int check_num(char* demo,int* len)
{
      int flag=0;int j=0;
      while(demo[j] != '\0')
   {
      if(!((demo[j]>='0'&&demo[j]<='9')&& *len == 10))
      {
            
            printf("Invalid Input,Do Try Again\n");
             return flag=1;
            
      }
      j++;
    }
    return flag;
}
void creat_contact(struct Addressbook* addressbook)
{
    addressbook->contactcount = 0;
    int i = addressbook->contactcount;
    int res = 0;
    printf("Enter The Name: ");
    scanf("%[^\n]",addressbook->contacts[i].name);


    do{
        getchar();
        char demo[11];
        printf("Enter The Mobile Num: ");
        scanf("%s",demo);
        int len=strlen(demo);
        //printf("%d ",len);
        res = check_num(demo,&len);
        if(res == 0)
    {
        strcpy(addressbook->contacts[i].name , demo);
    }
    }while(res!=0);

     do{
        getchar();
        char demo1[50];
        printf("Enter The Email: ");
        scanf("%[^\n]",demo1);
       
    int keep = check_email(demo1);
    if(keep == 0)
    {
        strcpy(addressbook->contacts[i].email, demo1);
    }
    }while(res!=0);
    

    

}
int main()
{
    struct Addressbook addressbook;
    creat_contact(&addressbook);
}

