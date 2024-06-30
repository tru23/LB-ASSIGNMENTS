#include<stdio.h>
#include<stdlib.h>



void DisplaySchedule(char ch)
{
    if((ch>='A'&& ch<='D')||(ch>='a'&&ch<='d'))
    {
        if((ch=='a')||(ch=='A'))
        {
            printf("Exam at 7 am");

        }
        else if((ch=='b')||(ch=='B'))
        {
            printf("Exam at 8:30 am");
            
        }
        else if((ch=='c')||(ch=='C'))
        {
            printf("Exam at 9:20 am");
            
        }
        else if((ch=='d')||(ch=='D'))
        {
            printf("Exam at 10:30 am");
            
        }
    }
    else{
        printf("Invalid input\n");
    }
 

}
int main()
{
    char cValue='\0';
  

    printf("enter the character\n");
    scanf("%c",&cValue);

   DisplaySchedule(cValue);
    
    return 0;
}