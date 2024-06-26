#include<stdio.h>

void Display(iNo)
{

    if(iNo<0)
    {
        iNo=-iNo;
    }
    int i=0;
 for(i=1;i<=iNo;i++)
 {
    printf("* ");
 }
 for(i=1;i<=iNo;i++)
 {
    printf("# ");
 }
}

int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}