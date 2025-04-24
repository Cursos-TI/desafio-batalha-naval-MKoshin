#include <stdio.h>

int main(){


  // campo final
  char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

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
