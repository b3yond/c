#include <stdio.h>

void main () {
    char *place, *systemcommand;
    place =(char *)malloc(10);
    systemcommand =(char )malloc(128);
    printf("memory address of place is %p\n",place);
    printf("memory address of systemcommand is %p\n",systemcommand);
    printf("The space in memory between place and systemcommand is %d\n",systemcommand - place);
    printf("Where is the best place in the web to learn hacking? ");
    gets(place);
    printf("The best place for hacking is %s", place);
    system(systemcommand);
}
