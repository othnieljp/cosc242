#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "rbt.h"

void print_key(char *s) {
    printf("%s \n", s);
}

int main(void/*int argc, char **argv*/) {
    rbt b = rbt_new();
    /*if (argc > 0){
        h = htable_new(atoi(argv[1]));
        }
    while (getword(word, sizeof word, stdin) != EOF) {
        htable_insert(h, word);
    }
    */
    b = rbt_insert(b, "h");
    b = rbt_insert(b, "l");
    b = rbt_insert(b, "i");
    b = rbt_insert(b, "f");
    b = rbt_insert(b, "j");
    b = rbt_insert(b, "g");
    b = rbt_insert(b, "k");
    b = rbt_insert(b, "d");
    b = rbt_insert(b, "a");
    b = rbt_insert(b, "e");
    b = rbt_insert(b, "b");
    b = rbt_insert(b, "c");

    rbt_preorder(b, print_key);
    rbt_free(b);
    return EXIT_SUCCESS;
}
