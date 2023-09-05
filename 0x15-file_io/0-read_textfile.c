#include "main.h"

/**
 * create_file.
 * @filename: A pointer to name of the fil.
 * @text content: A pointer to the string to write the file.
 *
 * Return: If the function fails - 0.
 *         Otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char buffer[letters];
    ssize_t read_bytes = fread(buffer, sizeof(char), letters, file);
    if (read_bytes < 0) {
        fclose(file);
        return 0;
    }

    ssize_t write_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);
    fclose(file);

    if (write_bytes != read_bytes) {
        return 0;
    }

    return write_bytes;
}#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char buffer[letters];
    ssize_t read_bytes = fread(buffer, sizeof(char), letters, file);
    if (read_bytes < 0) {
        fclose(file);
        return 0;
    }

    ssize_t write_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);
    fclose(file);

    if (write_bytes != read_bytes) {
        return 0;
    }

    return write_bytes;
}
