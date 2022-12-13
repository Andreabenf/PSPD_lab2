#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
  char *palavra;
  int qtd;
} palavras;

int main(int argc, char *argv[])
{
  // Open the file for reading
  FILE *fp = fopen("../entrada.txt", "r");

  // Check if the file was opened successfully
  if (fp == NULL)
  {
    printf("Could not open file!\n");
    return 1;
  }

  // Define a counter variable
  int word_count = 0;

  // Define a buffer for reading the words from the file
  char word[256];
  palavras *contador = malloc(sizeof(palavras) * 4);

  contador[0].palavra = "Less than 6";
  contador[0].qtd = 0;

  contador[1].palavra = "Between 6 and 10";
  contador[1].qtd = 0;

  contador[2].palavra = "Greater than 10";
  contador[2].qtd = 0;

  contador[3].palavra = "Total";
  contador[3].qtd = 0;

  // Read the file one word at a time until we reach the end
  while (fscanf(fp, "%s", word) == 1)
  {
    int tamPalavra = strlen(word);

    if (tamPalavra < 6)
      contador[0].qtd++;
    else if (tamPalavra >= 6 && tamPalavra <= 10)
      contador[1].qtd++;
    else
    {
      contador[2].qtd++;
    }
    contador[3].qtd++;
    word_count++;
  }

  // Print the result
  // printf("Number of words: %d\n", word_count);
  for (int i = 0; i < 4; i++)
    printf("%s\t%d\n", contador[i].palavra, contador[i].qtd);
  // Close the file
  fclose(fp);

  return 0;
}