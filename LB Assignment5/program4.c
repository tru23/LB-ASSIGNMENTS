#include<stdio.h>

void Display(int iNo)
{
    int i=0;
for(i=1;i<=iNo;i++){
    if(i%2!=0)
    {
        printf("%d\t",i);
    }
}
}
int main(){
    int iValue=0;
    printf("enter number-");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}