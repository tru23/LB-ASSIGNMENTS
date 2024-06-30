#include<stdio.h>

int Count(char *str)
{
    int count=0;

    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            count++;
        }
        str++;

    }

    return count;


}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    iRet=Count(arr);

    printf("%d",iRet);

    return 0;
}