#include <stdio.h>


int CountDiff(int iNo)
{
    int addeven=0;
    int addodd=0;
    int digit=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        digit=iNo%10;
        if(digit % 2==0 )
        {
          addeven=addeven+digit; 
        }
        else
        {
            addodd=addodd+digit;
        }
        iNo = iNo / 10;
    }
    int diff=addeven-addodd;
    return diff;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("the difference is :%d ",iRet);

    return 0;
}
