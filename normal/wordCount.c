#include <stdio.h>

int main(int argc, char* argv[]) {
  // Open the file for reading
  FILE* fp = fopen("../entrada.txt", "r");

  // Check if the file was opened successfully
  if (fp == NULL) {
    printf("Could not open file!\n");
    return 1;
  }

  // Define a counter variable
  int word_count = 0;

  // Define a buffer for reading the words from the file
  char word[256];

  // Read the file one word at a time until we reach the end
  while (fscanf(fp, "%s", word) == 1) {
    
    word_count++;
  }

  // Print the result
  printf("Number of words: %d\n", word_count);

  // Close the file
  fclose(fp);

  return 0;
}