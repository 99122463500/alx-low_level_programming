#ifndef MAIN_H
#define MAIN_H

/*
 * File: 99122463500
 * Auth: kay nonyane
 * Desc: Header contains prototypes for all the functions
 *       written in the 0x15.C-file_i/O directory.
 */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
