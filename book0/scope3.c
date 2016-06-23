#include <stdio.h>

int j = 42;

void func3() {
    int i = 11, j = 999;
    printf("\t\t\t[three] i @ %p = %d\n",&i, i);
    printf("\t\t\t[three] j @ %p = %d\n",&j, j);
}

void func2() {
    int i = 7;
    printf("\t\t[two]   i @ %p = %d\n",&i, i);
    printf("\t\t[two]   j @ %p = %d\n",&j, j);
    printf("\t\t[two]   setting j = 1337\n",&i, i);
    j = 1337;
    func3();
    printf("\t\t[two]   i @ %p = %d\n",&i, i);
    printf("\t\t[two]   j @ %p = %d\n",&j, j);
}

void func1() {
    int i = 3;
    printf("\t[one]   i @ %p = %d\n",&i, i);
    printf("\t[one]   j @ %p = %d\n",&j, j);
    func2();
    printf("\t[one]   i @ %p = %d\n",&i, i);
    printf("\t[one]   j @ %p = %d\n",&j, j);
}

int main() {
    int i = 3;
    printf("[main]  i @ %p = %d\n",&i,i);
    printf("[main]  j @ %p = %d\n",&j,j);
    func1();
    printf("[main]  i @ %p = %d\n",&i,i);
    printf("[main]  j @ %p = %d\n",&j,j);
}
