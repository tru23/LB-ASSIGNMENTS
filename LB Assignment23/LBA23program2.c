#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch>='A'&& ch<='Z'))
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

    bRet=ChkCapital(cValue);
    if(bRet==True)
    {
        printf("It is a Capital letter");
    }
    else{
        printf("It is not a Capital letter");
    }
    return 0;
}