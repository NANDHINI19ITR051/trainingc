/******************************************************************************
Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
struct measure{
  double side;
};
typedef struct measure Measure;
void area(Measure* m){
//  printf("%lf",m->side);  
double ans=6*(pow(m->side,2));
printf("area : %lf\n",ans);
}
void volume1(Measure* m){
    double ans=pow(m->side,3);
    printf("volume : %lf",ans);
}
int main()
{
    Measure m1;
    printf("Enter the side length of the cube : ");
    scanf("%lf",&m1.side);
    printf("Using . operator\n");
    printf("area : %lf\n",(6*(pow(m1.side,2))));
    printf("volume : %lf\n",(pow(m1.side,3)));
    printf("Using -> operator\n");
    area(&m1);
    volume1(&m1);
    return 0;
}

