#include <stdio.h>

// Function to count the digits between 3 and 7 in a given number
int CountRange(int iNo)
{
    int count = 0;
    int digit = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    while(iNo != 0)
    {
        digit = iNo % 10; 
        if(digit > 3 && digit < 7)
        {
            count++; 
        }
        iNo = iNo / 10;  
    }

    return count;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

   
    iRet = CountRange(iValue);

   
    printf("The number of digits between 3 and 7 is: %d\n", iRet);

    return 0;
}
