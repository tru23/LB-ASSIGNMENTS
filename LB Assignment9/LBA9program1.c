#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
int i;

for(i=iStart;i<=iEnd;i++)
{
    printf(" %d ",i);
}

}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}