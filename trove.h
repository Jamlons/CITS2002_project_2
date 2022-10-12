#ifndef TROVE_H
#define TROVE_H

extern char *default_file_name;

extern void file_attributes(char *filename);
extern void read_file(char *filename);
extern void create_trove(char *trovename);
extern FILE *open_trove(char *filename);
extern FILE *read_trove(char *filename);

extern int min_word_length;

typedef struct {
    char *file_name;
    char *word;
}file_structure;

extern file_structure globalStruct;
