#include <stdio.h>

int main() {

    int reactor_core = 12;
    int second_number = reactor_core * 2;
    int third_number = reactor_core * reactor_core;

    printf ("[");
    printf ("%d", reactor_core);
    printf (",");
    printf (" ");
    printf ("%d", second_number);
    printf (",");
    printf (" ");
    printf ("%d", third_number);
    printf ("]\n");

    return 0;

}