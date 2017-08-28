#include <stdio.h>
#include <ctype.h>



int main(){
	int i = 0; 
	char s[20]; char t[20]; // <--- is there a limit to the char value?? 
	
	s[0]='S'; s[1]='U'; s[2]='E'; s[3]='\0';
	t[0]='S'; t[1]='U'; t[2]='E'; t[3] = '6'; t[4]='\0';
	
	while (s[i] != '\0'){
		
		if(s[i] != t[i]){
			printf("The strings do not match"); 
			return 0;
		}
		
		i++;
		
		
		
	}
	//printf("Integer value is %d\n" , length);
	return 0; 
}
