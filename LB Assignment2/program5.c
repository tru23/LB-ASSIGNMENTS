#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
   if(iNo%2==0)
   {
    return TRUE;
   }
   else
   {
    return FALSE;
   }

}
int main()
 {
    int iValue=0;
    BOOL bRet=FALSE;

    printf("enter number");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
    if(bRet==TRUE){
        printf("this is even number");
    }
    else{
        printf("this is not even number");
    }
    return 0;
}