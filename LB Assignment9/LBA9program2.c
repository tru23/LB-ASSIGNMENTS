#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{

    if(iStart<0)
    {
        iStart=-iStart;
    }
    if(iStart>iEnd)
    {
        printf("INVALID");
    }
int i=0;
for(i=iStart;i<=iEnd;i++)
{
    if(i%2==0 )
    {
        printf(" %d ",i);
    } 
    
}
     
}

int main()
{
    int iValue1=0, iValue2=0;
    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}