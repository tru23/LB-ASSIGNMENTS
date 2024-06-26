#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{

int i=0;
int add=0;
for(i=iStart;i<=iEnd;i++)
{
     if(i%2==0 )
    {
        add=add+i;
    } 
     
}
return add;
}

int main()
{
    int iValue=0,iValue2=0,iRet=0;

    printf("enter starting point");
    scanf("%d",&iValue);

    printf("enetr ending point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue,iValue2);
    printf("Addition is %d",iRet);

    return 0;
}