#include <stdio.h>
#include <ctype.h>

//This program checks to see if 2 strings match.


int main(){

   char input[80]; char output[80];
   printf("Enter a string\n");
   scanf("%s",input);

   int i = 0;
   int increment = 0;
   while(input[i] != '\0'){

     if(input[i] != 'a' && input[i] != 'i'&& input[i] != 'e' && input[i] != 'o' && input[i] != 'u' ){
       //copy the chars into a new string variable
       output[increment++] = input[i];
     }
     i++;
   }
   output[increment] = '\0';
   printf("%s\n",output );
	return 0;
}
