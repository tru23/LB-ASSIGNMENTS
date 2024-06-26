#include<stdio.h>

void Display(int iNo){
  int iCnt = 0;
  if (iNo < 0){
    iNo = - iNo;
  }
  for (iCnt = 1 ; iCnt <= (iNo / 2); iCnt ++){
      if (iNo % iCnt == 0) {
        if (iCnt == 1 ){                // To match sir's output
          printf("%d ", iCnt);
        }
        if (iCnt % 2 == 0){
          printf("%d ", iCnt);
        }
      }
  }
}
int main (){
  int iValue   = 0;

  printf ("Number : ");
  scanf ("%d",&iValue);

  Display (iValue);
  return 0;
}