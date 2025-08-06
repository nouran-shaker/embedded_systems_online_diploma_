#include <stdio.h>
#include <stdlib.h>
void reverse_sentence(){
  char c;
  scanf("%c",&c);
  if(c!='\n'){
      reverse_sentence();
      printf("%c",c);
  }
  
}

int main() {
	printf("Enter a sentence:");
	
	reverse_sentence()	;
   
}
