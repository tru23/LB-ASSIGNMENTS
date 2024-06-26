#include <stdio.h>


int CountFour(int iNo)
{
    int count=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        if(iNo % 10 == 4)
        {
            count=count+1;
        }
        iNo = iNo / 10;
    }

    return count;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);
    printf("the number of 4's are:%d ",iRet);

    return 0;
}
