#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
int i;
int evenfact=1;

for(i=1;i<=iNo;i++)
{
    
    if(i%2==0)
    {
      evenfact=evenfact*i;
    }
     
}


return evenfact;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number: ");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("Even Fctorial  is %d",iRet);

    return 0;

}