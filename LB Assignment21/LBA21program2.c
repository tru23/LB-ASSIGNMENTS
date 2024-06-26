#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
            return TRUE;
        }
           
    }
    return FALSE;
}
int main()
{
    int iSize = 0;
    BOOL bRet = FALSE;
    int iCnt = 0;
    int *p = NULL;

    printf("enetr the number of elements ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element=");
        scanf("%d", &p[iCnt]);
    }
    bRet =Check (p, iSize);
    if (bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);

    return 0;
}