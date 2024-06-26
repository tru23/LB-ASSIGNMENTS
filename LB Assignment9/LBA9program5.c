#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
int i;

for(i=iEnd;i>=iStart;i--)
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}