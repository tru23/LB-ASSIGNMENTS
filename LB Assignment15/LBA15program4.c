#include<stdio.h>

void Pattern(int iRow,int iCol)
{
for (int i = 0; i < iRow; i++) {
        if (i % 2 == 0) {
          
            
            for (int j = 1; j <= iCol; j++) {
                printf("%d\t", j);
                
            }
        } else {
            
            
            for (int j = 1; j <= iCol; j++) {
                printf("%d\t", -j);
                
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