#include <stdio.h>
#include <string.h>

void stringToWords(char* string) {
    char words[10][20];  // Assuming a maximum of 10 words with 20 characters each
    char tempStr[20];    // Temporary string to store each word
    int wordIndex = 0;   // Index for `words` array
    int tempIndex = 0;   // Index for `tempStr`

    for (int i = 0; i <= strlen(string); i++) {
        if (string[i] == ' ' || string[i] == '\0') {
            tempStr[tempIndex] = '\0';  // Null-terminate the current word
            strcpy(words[wordIndex], tempStr);  // Copy tempStr into words array
            wordIndex++;              // Move to the next word
            tempIndex = 0;            // Reset tempStr index
        } else {
            tempStr[tempIndex] = string[i];  // Append character to tempStr
            tempIndex++;
        }
    }

    // Print the words
    for (int i = 0; i < wordIndex; i++) {
        printf("%s\n", words[i]);
    }
}

int main() {
    char string[] = "This is a test";
    stringToWords(string);
    return 0;
}

