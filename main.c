#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    const char* flag;
    const char* message;
} Flag;

// Function to print file content
void print_file_content(const char* filename) {
    FILE* file = fopen(filename, "r");
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

int main(int argc, char* argv[]) {
    const Flag flags[] = {
        {"--help", "Didn't provide help."},
        {"--sandbox", "Didn't sandboxed doas."},
        {"--veromikka", "sowwy, couldn't dwoas :c"},
    };
    const int flags_len = sizeof(flags) / sizeof(flags[0]);

    if (argc > 1) {
        // Special case for --kotekun
        if (strcmp(argv[1], "--kotekun") == 0) {
            printf("Didn't provide help, but here's avatar of user kondzii_ (kotekun) from discord!\n");
            print_file_content("kotekun-logo.txt");
            return 0;
        }

        // Loop through predefined flags
        for (int i = 0; i < flags_len; ++i) {
            if (strcmp(argv[1], flags[i].flag) == 0) {
                printf("%s\n", flags[i].message);
                return 0;
            }
        }
    }

    printf("Didn't doas.\n");

    return 0;
}
