#include <stdio.h>

int main(){
  char s[50];
  printf("Enter string:\n");
  gets(s);
  int f[26] = {0};
  int c = 0;
  for(int i=0;s[i]!='\0';i++){
    if(s[i] != ' '){
      f[s[i]-'a']++;
      if(f[s[i]-'a'] > f[c])
        c = s[i]-'a';
    }
  }

  printf("%c occurs a maximum of %d times.", c+'a', f[c]);
  return 0;
}
