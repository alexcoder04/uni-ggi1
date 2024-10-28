#include <stdio.h>

int main(){
    int counter = 1;
    while (counter <= 6){
        for (int i = 0; i < counter; i++){
            printf("*");
        }
        printf("\n");
        counter += 1;
    }
    return 0;
}

