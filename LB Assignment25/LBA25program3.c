#include<stdio.h>

int Count(char *str)
{
    int Capcount=0;
    int SmallCount=0;

    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            Capcount++;
        }
        else if(*str>='a'&&*str<='z')
        {
            SmallCount++;

        }
        str++;

    }

    return SmallCount-Capcount;


}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    iRet=Count(arr);

    printf("diff - %d",iRet);

    return 0;
}