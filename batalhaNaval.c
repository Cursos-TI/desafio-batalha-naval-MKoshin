#include <stdio.h>

int main(){


  // campo final
  char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  printf("-------------BATALHA NAVAL-----------\n");

    int campoNavalSoma[10][10] = 
    {
      // 0  1  2  3  4  5  6  7  8  9 COLUNAS
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //0 LINHAS
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //1
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //2
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //3
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //4
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //5
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //6
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //7
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //8
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  //9
    };


    // MATRIZES PARA AS HABILIDADES -- CONE // CRUZ // OCTAEDRO
    int cone[5][5] = {{0, 0, 5, 0, 0}, {0, 5, 5, 5, 0}, {5, 5, 5, 5, 5}};
    int octaedro[3][3] = {{0, 5, 0}, {5, 5, 5}, {0, 5, 0}};
    int cruz[1] = {5};

    // declarando navio
    int navio[1] = {3};

    // loop para colocar o barco vertical
    for(int i = 1; i < 4; i++)
    {
      for(int j = 0; j < 1; j++)
      {
        campoNavalSoma[i][j] = navio[0];
      }
    }

    // loop para barco horizontal
    for(int i = 6; i < 7; i++)
    {
      for(int j = 5; j < 8; j++)
      {
        campoNavalSoma[i][j] = navio[0];
      }
    }

    // Loop para barco diagonal
    for(int i = 2; i < 5; i++)
    {
      for(int j = 2; j < 5; j++)
      {
        if(i == j)
        {
        campoNavalSoma[i][j] = navio[0];
        }
      }
    }

    // Loop para barco diagonal inversa
    for(int i = 1; i < 4; i++)
    {
      for(int j = 6; j < 9; j++)
      {
        if(i + j == 9)
        {
        campoNavalSoma[i][j] = navio[0];
        }
      }
    }

    // Loop para o ataque cone área afetada C6, B7 C7 D7, A8 B8 C8 D8 E8;
    for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 5; j++)
      {
        campoNavalSoma[5+i][j] = cone[i][j];
      }
    }

    //loop para octaedro áre afetada H8, G9 H9 I9, H10.
    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        campoNavalSoma[7+i][6+j] = octaedro[i][j];
      }
    }

    // loop para a cruz
    // J coluna I linha
    // Favor nao ligar para o garrancho um dia eu arrumo perfeitamente <3
    // cordenadas F1, D2 E2 F2 G2 H2, F3.
    for(int i = 0; i < 3; i++)
    {
      for(int j = 3; j < 8; j++)
      {
        if(j == 5)
        {
          campoNavalSoma[0][5] = cruz[0];
          campoNavalSoma[1][5] = cruz[0];
        } else if(i == 1){
          campoNavalSoma[i][j] = cruz[0];
          campoNavalSoma[2][5] = cruz[0];
        }
      }
    }

    // loop para colocar as letras
    printf("   ");
    for(int i = 0; i < 10; i++)
    {
      printf("  ");
      printf("%c", letras[i]);
    }
    
    printf(" \n");
    
    // loop para exibir o campo naval
    for(int i = 0; i < 10; i++)
    {
      if(i <= 8)
      {
        printf(" %d  ", i + 1);
      } else
      {
        printf("%d  ", i + 1);
      }

      for (int j = 0; j < 10; j++)
      {
        printf(" %d ", campoNavalSoma[i][j]);
      }
      printf(" \n");
    }

    return 0;
}
