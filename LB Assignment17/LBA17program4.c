#include<stdio.h>

void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;

for(i=1;i<=iRow;i++)
{
    for(j=1;j<=iCol;j++)
{
    if(j<i )
    {
        printf("   ");
    }
    
    else
    {
        printf(" %d ",j);
    }
}
printf("\n");
}
}

int main()
{
    int iValue=0;
    int iValue2=0;

    printf("enter number of rows=");
    scanf("%d",&iValue);

    printf("enter number of columns");
    scanf("%d",&iValue2);

    Pattern(iValue,iValue2);

    return 0;
}