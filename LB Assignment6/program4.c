#include<stdio.h>

void Table(int iNo)
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\t",iNo*i);
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}