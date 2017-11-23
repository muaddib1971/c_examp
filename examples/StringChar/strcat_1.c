/* This program demonstrates the use of strcat() function */
/* updated by Paul Miller december 2015 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TEXT 20

int main(void) 
{
   char text1[MAX_TEXT] = "Hello";   
   char text2[MAX_TEXT] = "World";

   printf("\n Original Text1 = (%s) \n Original Text2 = (%s)\n", text1, text2);

   /** The strcat() function below, takes two strings as arguments and 
    *  concatenates/joins them together. The concatenated string is pointed
    *  to by the first (text1) string parameter.
    *
    *  It is your responsibility to ensure that there is enough space in
    *  text1 to also contain text2
    **/
   strcat(text1, text2);
   printf("\n Text1 after strcat() = (%s)", text1);
   printf("\n Text2 after strcat() = (%s)\n\n", text2);

   return EXIT_SUCCESS;
}

