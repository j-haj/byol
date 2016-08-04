#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

// declare buffer for uesr in put of size 2048
static char input[2048];

int main(int argc, char** argv) {
    // Print version and exit information
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl-c to Exit\n");

    // Never ending loop
    while (1) {
        // output prompt and get input
        char *input = readline("lispy> ");

        // Add input to histroy
        add_history(input);

        // Echo back to user
        printf("No you're a %s\n", input);

        free(input);
    }
    return 0;
}
