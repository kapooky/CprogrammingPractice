#include <stdio.h>
#include <ctype.h>

//This program checks to see if 2 strings match.


int main(){
	int counter = 0; // 
	char s[20]; char t[20]; // <--- is there a limit to the char value??

	s[0]='S'; s[1]='U'; s[2]='E'; s[3]='\0';
	t[0]='S'; t[1]='U'; t[2]='E'; t[3] = '6'; t[4]='\0';
  int a = 0;
	while (a == 0){

		if(s[counter] < t[counter]){
			a = -1;
      printf("Nope, strings don't match" );
		}
    if(s[counter] > t[counter]){
      a = 1;
      printf("Nope, strings don't match" );
    }
    if (s[counter] == '\0' && t[counter] == '\0'){
      printf("The strings do match\n");
      break;
    }

    counter++;
	}
	return 0;
}
