#include <stdio.h>
#include <stdlib.h>

union job{
char name[32];
float salary;
int worker_no;}u;

struct job1{
char name[32];
float salary;
int worker_no;
}s;
int main()
{
    printf("size of union=%d",sizeof(u)); //32
    printf("\nsize of structure=%d",sizeof(s)); //40
    return 0;
}
