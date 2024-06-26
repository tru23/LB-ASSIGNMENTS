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
        if(iNo % 10 <6 )
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
    printf("the number less than  6's are:%d ",iRet);

    return 0;
}
