#include <stdio.h>
#include <stdbool.h>

bool CheckVowels(char cValue){
  if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ){
    return true;
  }
  else {
    return false;
  }
}
int main (){
  char cValue = '\0'; //Intitalization of character is '\0'
  bool bRet = false;
  printf ("Enter a character : ");
  scanf("%c", &cValue);

  bRet = CheckVowels (cValue);

  if (bRet == true ){
    printf("%c is Vowels",cValue);
  }
  else{
    printf("%c is Consonant   ",cValue);
  }

  return 0;

}