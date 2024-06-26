#include<stdio.h>

int Factorial(int iNo)
{

    if(iNo<0)
    {
        iNo=-iNo;
    }
    int fact=1;
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        fact=fact*i;
        
    }
return fact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}