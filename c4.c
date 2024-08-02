#include<stdio.h>
struct Distance
{
    int f;
    float in;
}
d1,d2,r;
int main()
{
    printf("enter the  1st distance \n");
    printf("enter the feet and inch");
    scanf("%d",d1.f);
    scanf("%f",d1.in);

    printf("enter the  2nd distance \n");
    printf("enter the feet and inch");
    scanf("%d",d2.f);
    scanf("%f",d2.in);
    r.f=d1.f+d2.f;
    r.f=d2.in+d1.in;
    while(r.in>=12.0)
    r.in=r.in-12.o;
    ++r.f;
}
printf("sum of distances =%d %f\n",r.f.r.in);
result 0;



}