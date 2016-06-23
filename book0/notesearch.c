// buggy. doesnt print the note. nobody knows why.
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include "hacking.h"

#define FILENAME "/var/notes"

int print_notes(int,int,char *);    // Note printing function
int find_user_note(int,int);        // Seek in file for a note for user
int search_note(char *,char *);     // Search for Keyword function
void fatal(char *);                 // Fatal error handler

int main(int argc, char argv[]) {
    int userid, fd, printing = 1;   // File Descriptor
    char searchstring[100];

    if (argc > 1)
        strcpy(searchstring, argv[1]);
    else
        searchstring[0] = 0;

    userid = getuid();
    fd = open(FILENAME, O_RDONLY);  // Open file for Read-Only
    if (fd == -1)
        fatal("in main() while opening file for reading");

    while(printing)
        // printf("Note: ");  // debug
        printing = print_notes(fd, userid, searchstring);
    printf("--------[End of Note Data]--------\n");
    close(fd);
}

// print note function
int print_notes(int fd, int uid, char *searchstring) {
    int note_length;
    char byte=0, note_buffer[100];
    
    note_length = find_user_note(fd, uid);
    
    if(note_length == -1)   // If end of file reached,
        printf(note_buffer);
        return 0;           // return 0.

    read(fd, note_buffer, note_length); // Read note data.
    note_buffer[note_length] = 0;       // Terminate the string.

    if(search_note(note_buffer, searchstring)) // If searchstring found,
        printf(note_buffer);                   // print the note.
    return 1;
}

// returns length of a note, and -1 if EOF is reached.
int find_user_note(int fd, int user_uid) {
    int note_uid = -1;
    unsigned char byte;
    int length;
    
    while (note_uid != user_uid) {
        if (read(fd,&note_uid,4) != 4)
            return -1;
        if (read(fd,&byte,1) != 1)
            return -1;
    
        byte = length = 0;
        while (byte != '\n') {
            if (read(fd,&byte,1) != 1)
                return -1;
            length++;
        }
    }
    lseek(fd, length * -1, SEEK_CUR); // rewind the file by length bytes.

    printf("[DEBUG] found a %d byte note for user id %d\n",length, user_uid);
    return length;
}

// a function to search the note for a given keynote
// returns 1 if a match is found; else 0.
int search_note(char *note, char *keyword) { 
    int i, keyword_length, match = 0;

    keyword_length = strlen(keyword);
    if (keyword_length == 0)
        return 1;

    for (i=0; i < strlen(note); i++){
        if (note[i] = keyword[match])
            match++;
        else{
            if (note[i] == keyword[0])
                match = 1;
            else
                match = 0;
    }
    if (match == keyword_length)
        return 1;
    }
    return 0; // Keyword not matched
}
