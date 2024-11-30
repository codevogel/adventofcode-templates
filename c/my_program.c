#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int getFileSize(FILE *file) {
    long long size = 0;
    int ch;

    if (file == NULL) {
        return -1; // Error: file is NULL
    }

    // Set file position to the beginning
    if (fseeko(file, 0, SEEK_SET) != 0) {
        return -1; // Error
    }

    // Count characters, handling \r\n
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\r') {
            int next_ch = fgetc(file);
            if (next_ch != '\n') {
                // If the next character is not '\n', put it back
                if (next_ch != EOF) {
                    ungetc(next_ch, file);
                }
            }
            // Increment size for '\r'
            size++;
        }
        size++;
    }

    // Reset file pointer to the beginning
    if (fseeko(file, 0, SEEK_SET) != 0) {
        return -1; // Error
    }

    return size;
}

size_t line_count;

char** parseInput(char* path) {
    FILE* file = fopen(path, "r");
    if (file == NULL) {
        printf("Error: File not found\n");
        exit(1);
    }

    size_t size = getFileSize(file);
    if (size == -1) {
        printf("Error: Could not get file size\n");
        exit(1);
    }

    char* buffer = (char*)malloc(size + 1);

    fread(buffer, 1, size, file);
    buffer[size] = '\0';

    fclose(file);

    char** lines = (char**)malloc(sizeof(char*));

    line_count = 0;

    char* line = strtok(buffer, "\n");

    while (line != NULL) {
        lines = (char**)realloc(lines, (line_count + 1) * sizeof(char*));

        lines[line_count] = line;
        line_count++;

        line = strtok(NULL, "\n");
    }

    free(buffer); // Free the buffer

    return lines;
}

int main() {
    char** lines = parseInput("my_input_file.txt");

    for (size_t i = 0; i < line_count; i++) {
        printf("%s\n", lines[i]);
    }

    free(lines); // Free the lines
    return 0;
}
