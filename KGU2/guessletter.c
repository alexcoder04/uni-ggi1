#include <stdio.h>

#define LETTER 'b'
#define TRIES 3

int main(){
    char input;
    printf("%p\n", &input);

    for (int i = 1; i <= TRIES; i++){
        printf("Guess the letter (try %d): ", i);
        input = getchar();
        getchar();

        if (input == LETTER) {
            printf("You successfully guessed the letter!\n");
            return 0;
        }

        printf("This is unfortunaletly not the right letter.\n");
    }

    printf("You ran out of attempts. The letter was %c.\n", LETTER);
    return 1;
}

