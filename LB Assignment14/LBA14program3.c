#include<stdio.h>

void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;

for(i=0;i<iRow;i++)
{
    for(j=1;j<=iCol;j++)
    {
        
            printf("%c ",'A'+i);
       
        
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