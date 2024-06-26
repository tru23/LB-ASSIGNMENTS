#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is NO zero\n");
    }
    
    return 0;
}
