#include<stdio.h>

void Pattern(int iNo)
{
    int i=0;
    
   for(i=iNo;i>=1;i--){
    printf(" %d # ",i);

   }
}

int main()
{
    int iValue=0;
    printf("enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}