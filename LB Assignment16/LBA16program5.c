#include<stdio.h>

void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;
if(iRow!=iCol)
    {
        printf("no. of rows and col should be same");
        return;
    }

for(i=1;i<=iRow;i++)
{
    for(j=1;j<=iCol;j++)
{
    if(i==1 || i==iRow || j==1 || j==iCol)

    {
       printf(" %d ",j);
    }
    else{
        printf(" * ");
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