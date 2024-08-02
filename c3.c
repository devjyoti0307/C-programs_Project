#include <stdio.h>
struct student {
    char firstName[100],address;
    int roll;
    float marks;
} s[50];

int main() {
    int i;
    printf("Enter information of students:\n");

     for (i = 0; i < 15; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter address: ");
        scanf("%s", &s[i].address);

    }


  
    for (i = 0; i < 15; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
        printf("Address ");
        puts(s[i].address);
    }
    return 0;
}
