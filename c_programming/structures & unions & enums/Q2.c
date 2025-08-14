#include <stdio.h>
#include <stdlib.h>

struct sdistance{
float feet;
float inches;};

struct sdistance read_distance(char name[]){
struct sdistance s;
printf("Enter information of %s distance:\n",name);
printf("Enter feet:");
scanf("%f",&s.feet);
printf("Enter inches:");
scanf("%f",&s.inches);
return s;
}

struct sdistance add_distance(struct sdistance d1,struct sdistance d2){
    struct sdistance r;
    r.feet=0;
    r.inches=d1.inches+d2.inches;
    while(r.inches>12){
        r.inches-=12;
        r.feet++;
    }
    r.feet=r.feet+d1.feet+d2.feet;
    return r;
}
struct sdistance print_distance(struct sdistance r){
printf("sum of distances =%f'-%f''",r.feet,r.inches);}

int main()
{ struct sdistance d1,d2,r;
  d1=read_distance("first");
  d2=read_distance("second");
  r=add_distance(d1,d2);
  print_distance(r);
    return 0;
}
