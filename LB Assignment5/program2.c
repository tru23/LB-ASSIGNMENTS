#include<stdio.h>

void display(int iNo)
{
int i=0;
for(i=1;i<=iNo;i++)
{
    printf("%d\t",i);
}
}

int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}