#include <stdio.h>
#include <stdlib.h>

struct Sstudents{
char name[50];
int roll;
int marks;};
int main()
{
    struct Sstudents students[10];
    int count=0;
    printf("Enter information of students :\n");
    do{
            printf("\nEnter roll number ");
    scanf("%d",&students[count].roll);
    printf("Enter name: ");
    scanf("%s",students[count].name);
    printf("Enter marks: ");
    scanf("%d",&students[count].marks);
    count++;

    }while(count<10);

    printf("\nDisplaying information of students: \n");
    for(int i=0;i<10;i++){
        printf("\nInformation for roll number %d \nName:%s \nMarks:%d \n",
               students[i].roll,students[i].name,students[i].marks);
    }
    return 0;
}
