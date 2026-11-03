#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int roll;
int marks;
char city[20];
char dream[20];
};
void readstudent (struct student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("enter your name");
scanf("%s",s[i].name);

printf("enter your roll");
scanf("%d",s[i].roll);

printf("enter your marks");
scanf("%d",s[i].marks);

printf("enter your city");
scanf("%s",s[i].city);

printf("enter your dream");
scanf("%s",s[i].dream);
}
}
void writestudent(struct student s[],int n)
{
int i;

printf("======STUDENT DETAILS====");

for(i=0;i<n;i++)
{
printf("%s",s[i].name);
printf("%d",s[i].roll);
printf("%d",s[i].marks);
printf("%s",s[i].city);
printf("%s",s[i].dream);
}
}
int main()
{
struct student s[100];
int n;
printf("enter the number of student:");
scanf("%d",&n);
readstudent(s,n);
writestudent(s,n);
return 0;
}
