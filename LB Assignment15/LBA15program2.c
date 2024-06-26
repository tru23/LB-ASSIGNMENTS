#include<stdio.h>

void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;

for(i=0;i<=iRow;i++)
{
    int num;
        if (i % 2 == 0) {
            num = 2; 
        } else {
            num = 1; 
        }
    for(j=0;j<=iCol;j++)
    
    {
       
        printf("%d ", num);
            num += 2;
        
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