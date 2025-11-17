#include<stdio.h>
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) 
{
    int sum = 0;
    for(int i=0;i<seatsSize;i++)
    {
        for(int j=i+1;j<seatsSize;j++)
        {
            if(seats[i] > seats[j])
            {
                int temp = seats[i];
                seats[i] =seats[j];
                seats[j] = temp;

            }
        }
    }

    for(int i=0;i<studentsSize;i++)
    {
        for(int j=i+1;j<studentsSize;j++)
        {
            if(students[i] > students[j])
            {
                int temp = students[i];
                students[i] =students[j];
                students[j] = temp;
                
            }
        }
    }
    
    for(int i = 0;i<studentsSize;i++)
    {
     sum =(abs(students[i] - seats[i])) + sum;
        
    }
    return sum;
}
int main()
{
    int size,stusize;
    printf("enter the size of seats size :");
    scanf("%d",&size);

    

}