#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch>='0'&& ch<='9'))
    {
        return True ;
    }
    else
    {
        return False;
    }

}
int main()
{
    char cValue='\0';
    BOOL bRet=False;

    printf("enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkDigit(cValue);
    if(bRet==True)
    {
        printf("It is a Digit");
    }
    else{
        printf("It is not a Digit");
    }
    return 0;
}