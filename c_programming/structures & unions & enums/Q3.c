#include <stdio.h>
#include <stdlib.h>

struct scomplex{
float real;
float imaginary;};

struct scomplex read_complex(char name[]){
struct scomplex c;
printf("For %s complex number\n",name);
printf("Enter real and imaginary respectively :");
scanf("%f %f",&c.real,&c.imaginary);
return c;
}

struct scomplex add_complex(struct scomplex x,struct scomplex y){
    struct scomplex r;
    r.real=x.real+y.real;
    r.imaginary=x.imaginary+y.imaginary;
    return r;
}
struct scomplex print_complex(struct scomplex r){
printf("sum=%f+%fi",r.real,r.imaginary);}

int main()
{ struct scomplex x,y,r;
  x=read_complex("first");
  y=read_complex("second");
  r=add_complex(x,y);
  print_complex(r);
    return 0;
}
