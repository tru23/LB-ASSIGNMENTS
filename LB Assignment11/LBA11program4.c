#include <stdio.h>


int MulDigit(int iNo)
{
    int mul=1;
    int digit=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        digit=iNo%10;

        mul=mul*digit;
        
        iNo = iNo / 10;
    }

    return mul;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MulDigit(iValue);
    printf("Multiplication is :%d ",iRet);

    return 0;
}
