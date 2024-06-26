#include<stdio.h>
void PrintEven(int iNo)
{
    int i=0;
    int count=0;
    if(iNo<=0)
    {
        return;
    }
    for(i=1;count<iNo;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
            count++;
        }
    }
    
}
int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
