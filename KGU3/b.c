#include <stdio.h>

// for fixed size: define size in const

int input[4][4] = {{4,2,6,6}, {2,7,9,5}, {2,7,5,7}, {7,4,1,0}};

int printMultidimArr(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void transpose(int rows, int cols, int input[rows][cols], int output[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            output[j][i] = input[i][j];
        }
    }
}

int main(){
    printMultidimArr(4, 4, input);

    // use one temp variable for switching, not a whole new array
    int output[4][4];
    transpose(4, 4, input, output);

    printf("\n");
    printMultidimArr(4, 4, output);
}

