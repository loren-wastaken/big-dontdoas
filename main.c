#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1 && strcmp(argv[1], "--sandbox") == 0) {
        printf("Didn't sandboxed doas.\n");
    } else {
        printf("Didn't doas.\n");
    }

    return 0;
}
