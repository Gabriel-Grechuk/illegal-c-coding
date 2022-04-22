#include <stdio.h>
#include <stdlib.h>


// Definindo um tipo com 8 bytes de tamanho, o mesmo que um ponteiro no meu
// processador x64.
typedef unsigned long int pointer;

// O array dinâmico de memória e uma variável para guardar o número de 
// alocações de memória.
pointer *allocated_memory = NULL;
unsigned int count = 0;



// Nosso próprio alocador de memória.
// Assim podemos registrar os endereços alocados e retornar o espaço
// solicitado.
void* galloc(size_t size)
{
  printf("Allocating memory...\n");
  pointer buff = 0;

  if((void*)allocated_memory == NULL)
  {
    allocated_memory = malloc(sizeof(pointer));
  }
  else
    allocated_memory = realloc(allocated_memory, (count + 1) * sizeof(pointer));

  buff = (pointer) malloc(size);
  allocated_memory[count] = buff;
  allocated_memory[count + 1] = (pointer) NULL;

  printf("Count: %d\n", count);
  printf("Address: %0lX\n\n", buff);

  count++;
  return (void*) buff;
}



// Essa função deve ser chamada no final do programa, assim podemos liberar
// toda a memória que alocamos.
void free_all(void)
{
  for (int i = 0; allocated_memory[i] != (pointer) NULL; i++)
  {
    printf("Freeing: %0lX\n\n", allocated_memory[i]);
    free((void*)allocated_memory[i]);
  }
}



int main(void)
{
  int *i = NULL;
  char *c = NULL;
  
  i = (int*) galloc(sizeof(int));
  c = (char*) galloc(sizeof(char));

  *i = 50;
  *c = 'A';

  printf("Valor de *i: %d\n", *i);
  printf("Valor de *c: %c\n\n", *c);

  free_all();

  return 0;
}

