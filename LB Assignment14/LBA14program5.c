#include<stdio.h>

void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;
int num=1;

for(i=1;i<=iRow;i++)
{
    for(j=0;j<iCol;j++)
    {
        
            printf("%d ",num);
            num++;
        
    }
    
    printf("\n");
    
}

}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter number of rows");
    scanf("%d",&iValue1);

    printf("enter number of col");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}