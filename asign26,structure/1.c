#include<stdio.h>
#include<stdlib.h>
void display(struct employee b);
struct employee
    {
        int id;
        char name[15];
        float salary;
    };
void display(struct employee b)
{
    printf("employee ID is='%d',\nNAME-'%s',\nSALARY -'%0.2f'\n",b.id,b.name,b.salary);

}

struct employee input()
{
    struct employee b;
    printf("enter employee id ,name and salary");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,15,stdin);
    scanf("%f",&b.salary);
    return (b);
    
}
int main(){
    struct employee a={42,"ankur",354.6},a2;
    display(a);
    a2=input();
    display(a2);
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// struct employee {
//     int id;
//     char name[15];
//     float salary;
// };

// void display(struct employee b) {
//     printf("Employee ID: %d, Name: %s, Salary: %.2f\n", b.id, b.name, b.salary);
// }

// struct employee input() {
//     struct employee b;
    
//     printf("Enter employee id: ");
//     scanf("%d", &b.id);

//     printf("Enter employee name: ");
//     fflush(stdin);
//     // scanf(" %14[^\n]", b.name); // Read up to 14 characters for the name
//     fgets(b.name,15,stdin);
//     printf("Enter employee salary: ");
//     scanf("%f", &b.salary);

//     return b;
// }

// int main() {
//     struct employee a = {42, "ankur", 354.6};
//     struct employee a2;

//     display(a);

//     a2 = input();
//     display(a2);

//     return 0;
// }
