#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        char ch = iCnt;
        printf("%d  %X  %o  %c\n",iCnt,iCnt,iCnt,ch);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}