/*In a small office, there's a unique challenge that the staff faces every day. They have a special machine that helps them process letters, but the machine can only display the ASCII values of characters.



Your task is to help the staff by creating a program that converts characters to their opposite cases and shows the ASCII value of the resulting character. If they enter any other character (e.g., a number or punctuation mark), the machine should simply show the ASCII value of that character.

Input format :
The input consists of the character value c.

Output format :
The ASCII value of the resulting character after conversion or the original character if no conversion is applicable.*/



#include <stdio.h>

int main() {
    char charInput;
    scanf(" %c", &charInput);
    int asciiValue = (int)charInput;
    if (asciiValue >= 65 && asciiValue <= 90) {
        asciiValue += 32;
    }                                                    /*Uppercase letters (A-Z) are converted to lowercase by adding 32 to their ASCII value.
Lowercase letters (a-z) are converted to uppercase by subtracting 32 from their ASCII value.  If the input is not a letter (e.g., digits, punctuation), no conversion occurs, and the original ASCII value is displayed.*/
    
    else if (asciiValue >= 97 && asciiValue <= 122) {               
        asciiValue -= 32;
    }                                                    /*ASCII values for uppercase letters (A-Z) are 65 to 90.
ASCII values for lowercase letters (a-z) are 97 to 122.*/
    
    else {
        printf("ASCII Value: %d", asciiValue);       //it no. is less than 65 than it print same no.
        return 0;
    }
    printf("ASCII Value: %d", asciiValue);
    return 0;
}
