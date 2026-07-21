#include <stdio.h>
struct student
{
    int rollnum;
    char name[50];
    float marks;
};
int main()
{
    
    int n, i;
    printf("enter the number of student");
    scanf("%d",&n);

    struct student s[n];
    for (int i = 0; i < n; i++){

    printf("enter the roll num: ");
    scanf("%d", &s[i].rollnum);
    printf("enter the name: ");
    scanf("%s", &s[i].name);
    printf("enter the marks: ");
    scanf("%f", &s[i].marks);

    printf("\nstudent details\n");
    printf("rollnum=%d\n", s[i].rollnum);
    printf("name=%s\n", s[i].name);
    printf("marks=%.2f\n", s[i].marks);
    }
    return 0;
}