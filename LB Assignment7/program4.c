#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
int i;

int oddfact=1;

for(i=1;i<=iNo;i++)
{
    
    if(i%2!=0)
    {
      oddfact=oddfact*i;
    }
    
}


return oddfact;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);
    printf(" Odd Factorial  is %d",iRet);

    return 0;

}