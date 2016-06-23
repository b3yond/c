#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *ptr;
    
    if (argc < 3) {
        printf("Usage: %s <environment variable> <target program path>\n",argv[0]);
        exit(0);
    }
    ptr = getenv(argv[1]); // Get env location
    ptr += (strlen(argv[0]) - strlen(argv[2]))*2; // Adjust for program name
    printf("%s will be at %p\n",argv[1],ptr);
}
