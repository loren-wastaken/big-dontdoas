#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_file_content(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "--help") == 0) {
            printf("Didn't provide help.\n");
        } 
        else if (strcmp(argv[1], "--sandbox") == 0) {
            printf("Didn't sandboxed doas.\n");
        } 
        else if (strcmp(argv[1], "--kotekun") == 0) {
            printf("Didn't provide help, but here's avatar of user kondzii_ (kotekun) from discord!\n");
            print_file_content("kotekun-logo.txt");
        }
        return 0;
    }

    printf("Didn't doas.\n");
    return 0;
}
