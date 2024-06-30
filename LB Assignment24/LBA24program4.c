#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;
BOOL Display(char ch)
{
    if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
    {
        return False ;
    }
    else
    {
        return True;
    }

}


int main()
{
    char cValue='\0';
    BOOL bRet=False;

    printf("enter the character\n");
    scanf("%c",&cValue);

    bRet=Display(cValue);
    if(bRet==True)
    {
        printf("It is a special character");
    }
    else{
        printf("It is not a  special character");
    }
    return 0;
}