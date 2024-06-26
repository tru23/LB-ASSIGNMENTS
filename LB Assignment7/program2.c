#include<stdio.h>

int Display(int iNo){
    int doll=70;
    int inr=0;
   inr=iNo*doll;

   return inr;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    iRet=Display(iValue);
    printf("Value in INR %d",iRet);
    return 0;
}