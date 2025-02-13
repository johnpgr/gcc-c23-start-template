#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {
    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
