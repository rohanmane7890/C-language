#include<stdio.h>
int main(){
    int empid;
    char empname[10];
    int basicsalary;
    float hra,ta,ma,pf,grosssalary;

    printf("Employee id:",empid);
    scanf("%d",&empid);
    printf("Employee name:",empname);
    scanf("%s",&empname);
    printf("basic salary",basicsalary);
    scanf("%d",&basicsalary);

    //calculation
    hra=basicsalary*0.4;
    ta=basicsalary*.09;
    ma=basicsalary*0.06;
    pf=basicsalary*0.08;

    grosssalary=basicsalary+hra+ta+ma+pf;

    printf("\n---------------------------EMPLOYEE SALARY SLIP------------------------------");
    printf("\n\temployee id:\t\t%d",empid);
    printf("\n\temployee name:\t\t%s",empname);
    printf("\n\temployee basicsalary:\t\t%d",basicsalary);
    printf("\n\tHRA:\t\t%f",hra);
    printf("\n\tTA:\t\t%f",ta);
    printf("\n\tMA:\t\t%f",ma);
    printf("\n\tPF:\t\t%f",pf);
    printf("\n\tGrosssalary\t\t%f",grosssalary);
    printf("\n----------------------------Thank you-------------------------------------------");
    return 0;
    
}