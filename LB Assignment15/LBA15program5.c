#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int numm=0;
for (int i = 0; i < iRow; i++) {
        numm=i+1;
        for(int j=0;j<iCol;j++)
        {
            printf("%d ",numm+j);
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