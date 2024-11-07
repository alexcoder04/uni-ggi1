#include <stdio.h>

int main(){
    char word[100];

    printf("Enter a word: ");
    scanf("%99s", word); // & NOT necessary

    int i = 0;
    int count = 0;

    while (word[i] != '\0') {
        if (word[i] == 'e') {
            count++;
        }
        i++;
    }

    printf("Word %s contains the letter 'e' %d time(s).\n", word, count);
}

