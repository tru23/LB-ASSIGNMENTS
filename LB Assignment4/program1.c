#include<stdio.h>

int MulFactor(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
int i;


int mul=1;
for(i=1;i<iNo;i++)
{
    if(iNo%i==0)
    {
        
        printf(" %d \n", i );
        mul=mul*i;
    }
    
}

return mul;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);
printf("factors are \n");
    iRet=MulFactor(iValue);

    printf(" multiplication of Factors  is %d\n",iRet);

    return 0;

}