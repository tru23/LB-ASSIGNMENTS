#include <stdio.h>


int CountEven(int iNo)
{
    int count=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        if(iNo % 2==0 )
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

    iRet = CountEven(iValue);
    printf("the even number are:%d ",iRet);

    return 0;
}
