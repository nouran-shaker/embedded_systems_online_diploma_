#include <stdio.h>
int power(int x,int y){
   
    if(y<1){return 1;}
  
   return x*power(x,--y); 
}
int main(){
    int p,b;
    printf("Enter a base number: ");
    scanf("%d",&b);
    printf("Enter power number (positive integer) :");
    scanf("%d",&p);
    printf(" %d ^ %d =%d",b,p,power(b,p));
}
