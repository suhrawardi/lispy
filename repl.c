#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

  puts("Lispy version 0.0.1");
  puts("Press Ctrl+c to Exit");

  while(1) {
    char* input = readline("lispy> ");

    add_history(input);

    printf("No, you're a %s", input);

    free(input);
  }

  return 0;
}
