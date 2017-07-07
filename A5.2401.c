#include <stdio.h>
#include <ctype.h>

int main(){
	//pull a while loop 
	
	int value, lower, upper; 
	char  c1,c2,c3;
	char array[250];
	
	while(1){
		
		//Created the QQQ checker 
		c3  = c2;
		c2  = c1;
		scanf("%c", &c1);
		
	 	if(c1 & c2 & c3 == 'Q'){
	 		printf("Hello World "); 
	 		
		 }
		 if(c1 >= 'A' && c1 <= 'Z'){
		 	printf("Uppercase"); 
		 	c1 = tolower(c1);
		 
		 }
		 else if (c1 >='a' && c1 <= 'z'){
		 	c1 = toupper(c1);
		 }
		
		else {
			
		}
		
		printf("%c",c1); 
		 
		
	}
	 
	return 0;
}
