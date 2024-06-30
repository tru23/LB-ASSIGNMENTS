#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;
BOOL ChkVowel(char *str)
{
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            return True;

        }
        else{
            return False;
        }
       
    }
}

int main()
{
    char arr[20];
    BOOL bRet=False;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    bRet=ChkVowel(arr);

    if(bRet==True)
    {
        printf("Vowel is present ");
    }
    else{
        printf("Vowel not present");
    }

    return 0;
}