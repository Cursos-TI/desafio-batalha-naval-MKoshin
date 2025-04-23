#include <stdio.h>

int main(){


    /*NAVIO VERTICAL: TAMANHO 3  [8,3] [8,4] [8,5]
      NAVIO VERTICAL: TAMANHO 4  [1,4] [1,5] [1,6] [1,7]
      NAVIO VERTICAL: TAMANHO 2  [6,3] [6,4]
      NAVIO HORIZONTAL: TAMANHO 2 [4,2] [5,2]
      NAVIO HORIZONTAL: TAMANHO 3 [2,0] [3,0] [4,0]
      NAVIO HORIZONTAL: TAMANHO 4 [3,9] [4,9] [5,9] [6,9]
      */
    // CAMPO NAVAL

    int campoNaval[10][10] ={
      // 0  1  2  3  4  5  6  7  8  9
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 0}, //0
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //1
        {0, 0, 0, 0, 2, 2, 0, 0, 0, 0}, //2
        {0, 0, 0, 0, 0, 0, 2, 0, 3, 0}, //3
        {0, 4, 0, 0, 0, 0, 2, 0, 3, 0}, //4
        {0, 4, 0, 0, 0, 0, 0, 0, 3, 0}, //5
        {0, 4, 0, 0, 0, 0, 0, 0, 0, 0}, //6
        {0, 4, 0, 0, 0, 0, 0, 0, 0, 0}, //7
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //8
        {0, 0, 0, 4, 4, 4, 4, 0, 0, 0}  //9
    };

    // loop para exibição do campo
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
        printf("%d ", campoNaval[i][j]);
      }
      printf(" \n");
    }

    return 0;
}
