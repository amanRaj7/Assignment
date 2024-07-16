#include <stdio.h>
#include <string.h>

typedef struct{
    int dd;
    int mm;
    int yyyy;
} date;

typedef struct{
    char code[10];
    char name[50];
    int salary;
    int department;
    date date_joining;
}employee;

void print_detail(employee emp){
    printf("Employee Code: %s\n", emp.code);
    printf("Employee Name: %s\n", emp.name);
    printf("Salary: %d\n", emp.salary);
    printf("Department Number: %d\n", emp.department);
    printf("Date of Joining: %d/%d/%d\n",emp.date_joining.dd, emp.date_joining.mm, emp.date_joining.yyyy);
    printf("\n");
}

int main(){
    employee emp[10];
    char temp[50];
    int i;
    for(i = 0; i<10; i++){
        printf("Enter the imformation of Employee %d: \n", i+1);
        printf("Enter employee code: ");
        gets(emp[i].code);
        //gets(word);
        //strcpy(emp[i].code, word);
        //scanf("%[^\n]*%c", emp[i].code);
        printf("Enter employee name: ");
        gets(emp[i].name);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
        printf("Enter department number: ");
        scanf("%d", &emp[i].department);
        printf("Enter Date of Joining: \n");
        //scanf("%d/%d/%d", &emp[i].date_joining.dd, &emp[i].date_joining.mm, &emp[i].date_joining.yyyy);
        printf("dd: ");
        scanf("%d", &emp[i].date_joining.dd);
        printf("mm: ");
        scanf("%d", &emp[i].date_joining.mm);
        printf("yyyy: ");
        scanf("%d", &emp[i].date_joining.yyyy);
        gets(temp);
    }
    for(i=0; i<10; i++){
        if(emp[i].salary>=10000){
            print_detail(emp[i]);
        }
    }
    return 0;
}