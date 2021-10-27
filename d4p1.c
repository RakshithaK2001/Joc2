#include <stdio.h>

int main(){
  char s[100];
  printf("Enter the String:\n");
  gets(s);
  printf("The acronym is:");
  for(int i=0;s[i]!='\0';i++){
    if(s[i] >= 65 && s[i] <= 90)
      printf("%c", s[i]);
    for(;s[i] != ' ';i++);
  }

  return 0;
}
