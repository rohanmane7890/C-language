#include<stdio.h>
int main()
{
    int rollno;
    char name[10];
    int sub1,sub2,sub3,total;
    float perct;
    
    printf("Enter students rollno",rollno);
    scanf("%d",&rollno);
    printf("Enter students name",name);
    scanf("%s",&name);
    printf("Enter students subjects marks",sub1,sub2,sub3);
    scanf("%d%d%d",&sub1,&sub2,&sub3);

    total=sub1+sub2+sub3;
    perct=total/3;

    printf("\n----------------------------------------------------------");
    printf("\n\tstudents rollno %d\t\t",rollno);
    printf("\n\tstudents name %s\t\t",name);
    printf("\n\t math %d\t\t",sub1);
    printf("\n\telect %d\t\t",sub2);
    printf("\n\t comp %d\t\t",sub3);
    printf("\n\t total %d\t\t",total);
    printf("\n\t perct %f\t\t",perct);
    printf("\n---------------------------------------------------------------");
    return 0; 

}