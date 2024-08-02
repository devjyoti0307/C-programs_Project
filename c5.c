#include<stdio.h>
#include<stlib.h>
struct complex
{
    int r,img;
}
int main()
{
    int ch,a,b,c;
    struct complex x,y,z,k;
    while(1)
    {
        printf("1 to add 2 complex no");
         printf("1 to substract 2 complex no");
          printf("1 to multiply 2 complex no");
          printf("4 to exit");
           printf("enter your choice");
           scanf("%d",&ch);
           if(ch==4)
           exit(0);
           if(ch>=1&&ch<=3)
           {
               printf("enter x and y where x+iy is 1st complex no");
               scanf("%d",&x.r);
               scanf("%d",&y.img);
                printf("enter z and k where z+ik is 1st complex no");
               scanf("%d",&z.r);
               scanf("%d",&k.img);


           }
    }
}