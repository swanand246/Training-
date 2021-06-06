///Number to words program
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function to print the given number in words
void convert(char *num) {
   int len = strlen(num);
   // cases
   if (len == 0) {
      printf( "empty string\n");
      return;
   }
  
   // the first string wont be used.
   char *single_digit[] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
   // The first string is not used, it is to make
  
      char *tens_place[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
   // The first two string are not used, they are to make
      char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
      char *tens_power[] = {"hundred", "thousand"};
    printf("\n%s: ", num);

   // For single digit number
   if (len == 1) {
      printf("%s\n", single_digit[*num - '0']);
      return;
   }
   // Iterate while num is not '\0'
   while (*num != '\0') {
      // Code path for first 2 digits
      if (len >= 3) {
         if (*num -'0' != 0) {
            printf("%s ", single_digit[*num - '0']);
            printf("%s ", tens_power[len-3]); // here len can be 3 or 4
         }
         --len;
      }
      // Code path for last 2 digits
      else {
         // Need to explicitly handle 10-19. Sum of the two digits is
         //used as index of "tens_place" array of strings
         if (*num == '1') {
            int sum = *num - '0' + *(num + 1)- '0';
            printf("%s\n", tens_place[sum]);
            return;
         }
         // Need to explicitely handle 20
         else if (*num == '2' && *(num + 1) == '0') {
            printf("twenty\n");
            return;
         }
         // Rest of the two digit numbers i.e., 21 to 99
         else {
            int i = *num - '0';
            printf("%s ", i? tens_multiple[i]: "");
            ++num;
            if (*num != '0')
               printf("%s ", single_digit[*num - '0']);
         }
      }
      ++num;
   }
}
int main() {
   convert("9999");
   return 0;
}

