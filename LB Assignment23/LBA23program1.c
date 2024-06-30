#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z'))
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

    bRet=ChkAlpha(cValue);
    if(bRet==True)
    {
        printf("It is a character");
    }
    else{
        printf("It is not a character");
    }
    return 0;
}