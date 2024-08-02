#include <stdio.h>
struct student
{
char name[100],age;
int roll;
float marks;
} s[100];

int main()
{
int i,n;
struct student s[100];

printf("Enter total of students:\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\n Enter information of student %d:\n",i+1);
printf("Enter name: ");
scanf("%s", s[i].name);

printf("Enter roll number: ");
scanf("%d", &s[i].roll);

printf("Enter marks: ");
scanf("%f", &s[i].marks);

printf("Enter age: ");
scanf("%c", &s[i].age);
}
for(i=0;i<n;i++)
{
printf("\n %d no. student info\n",i+1);
printf("\tName:%s\n ",s[i].name);


printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks: %.1f\n\n",s[i].marks);
printf("\t Age: %c\n",s[i].age);

}

return 0;
}