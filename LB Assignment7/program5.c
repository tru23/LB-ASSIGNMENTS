#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
int i;
int evenfact=1;
int oddfact=1;
int diff=0;
for(i=1;i<=iNo;i++)
{
    
    if(i%2==0)
    {
      evenfact=evenfact*i;
    }
    else{
        oddfact=oddfact*i;
    }  
}
diff=evenfact-oddfact;

return diff;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Fctorial difference is %d",iRet);

    return 0;

}