
//Ques 30. WAP to convert uppercase to lowercase letters and vice versa.

#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i;
   printf("\nEnter a string : ");
   gets(s);
   
   // Conversion according to ASCII values 
   for (i = 0; s[i]!='\0'; i++) {
   	//Convert lowercase to uppercase 
      if(s[i] >= 'a' && s[i] <= 'z')
	   {
         s[i] = s[i] - 32;
       }
      //Convert uppercase to lowercase
      else if(s[i]>='A'&&s[i]<='Z')
      {
      	s[i]=s[i]+32;
	  }
   }
   printf("\n Converted String = %s", s);
   getch();
   return 0;
}

