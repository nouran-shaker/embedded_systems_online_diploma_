#include <stdio.h>
#include <stdlib.h>

struct Sstudent{
char name[50];
int roll;
int marks;};

int main()
{ struct Sstudent s1;
    printf("Enter information of students :\n");
    printf("Enter your name:");
    scanf("%s",s1.name);
    printf("Enter your roll:");
    scanf("%d",&s1.roll);
    printf("Enter your marks:");
    scanf("%d",&s1.marks);

    printf("\nDisplaying Information: \n name:%s \n roll:%d \n marks:%d",
           s1.name,s1.roll,s1.marks);
    return 0;
}
