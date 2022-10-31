#include <stdio.h>
int main() {
   char sentence[150];
   
   printf("Enter a string: ");
   fgets(sentence, sizeof(sentence), stdin); // take input


   for (int i = 0, j; sentence[i] != '\0'; ++i) {

      // enter the loop if the character is not an alphabet
      // and not the null character
      while (!(sentence[i] >= 'a' && sentence[i] <= 'z') && !(sentence[i] >= 'A' && sentence[i] <= 'Z') && !(sentence[i] == '\0')) {
         for (j = i; sentence[j] != '\0'; ++j) {

            // if jth element of sentence is not an alphabet,
            // assign the value of (j+1)th element to the jth element
            sentence[j] = sentence[j + 1];
         }
         sentence[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(sentence);
   return 0;
}
