#include<stdio.h>

void Pattern(int iRow,int iCol)
{
int i=0;
int j=0;

for(i=1;i<=iRow;i++)
{
    for(j=0;j<iCol;j++)
    {
        if(i%2==0){
        printf("%c ",'a'+j);
        }
        else{
            printf("%c ",'A'+j);
        }
        
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