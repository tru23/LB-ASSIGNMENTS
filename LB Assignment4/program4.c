#include<stdio.h>
int SumNonFactor(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
       

int i;
int add=0;


for(i=1;i<=iNo;i++)
{
    if(iNo%i!=0)
    {
        
      add=add+i;  
        
    }
    
}
return add;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);
    iRet=SumNonFactor(iValue);
printf("sum of all non factors is %d",iRet);
    return 0;

}