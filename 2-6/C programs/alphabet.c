//Checking of alphabet or not

#include <stdio.h>
int main() {
   
    char c;
   
    printf("Enter a character: ");
    scanf("%c", &c);

	//Condition for checking alphabet
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
