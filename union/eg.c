#include<stdio.h>
#include<string.h>
// define the union
union college{
char stu_name[50];
int age;
char College_name[50];
int fee;
};
int main(){
union college c;
strcpy(c.stu_name, "akshaya");
printf("student_name: %s\n", c.stu_name);
c.age=20;
printf("age: %d\n", c.age);
strcpy(c.College_name, "gct");
printf("college_name: %s\n", c.College_name);
c.fee=150005;
printf("fee structure: %d\n", c.fee);
return 0;
}
