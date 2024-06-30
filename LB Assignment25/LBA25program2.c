#include<stdio.h>

int CountSmall(char *str)
{
    int count=0;

    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
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

    iRet=CountSmall(arr);

    printf("%d",iRet);

    return 0;
}