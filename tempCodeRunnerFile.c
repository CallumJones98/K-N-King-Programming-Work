#include <stdio.h>
#include <ctype.h>
int main(void){

    char new_string[100]; 
    char ch;
    int i = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && i < 99) {
        if (ch == 'a' || ch == 'A') {
            new_string[i] = '4'; 
        } 
        else if (ch == 'b' || ch == 'B'){
            new_string[i] = '8';
        }
        else if (ch == 'e' || ch == 'E'){
            new_string[i] = '3';
        }
        else if (ch == 'i' || ch == 'I'){
            new_string[i] = '1';
        }
        else if (ch == 'o' || ch == 'O'){
            new_string[i] = '0';
        }
        else if (ch == 's' || ch == 'S'){
            new_string[i] = '5';
        }
        else {
            ch = toupper(ch);
            new_string[i] = ch;  
        }
        i++; 
    }

    new_string[i] = '\0'; 

    printf("Modified sentence: %s\n", new_string);

    return 0;
}