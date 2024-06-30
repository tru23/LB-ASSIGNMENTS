
#include<stdio.h>

void DisplayASCII(char ch)
{

    printf("Decimal: %d \n Hexadecimal: %X \n Octal: %o \n",ch,ch,ch);

}

int main()
{
    char cValue='\0';
   

    printf("enter the character\n");
    scanf("%c",&cValue);

    DisplayASCII(cValue);
    
    return 0;
}