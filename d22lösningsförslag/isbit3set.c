#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_bit_3_set(char val) {
    return (val & 0x4) != 0;
}

int main() {
    char word[100];
    char val;
    do {
        printf("write a number: ");
        fgets(word, 100, stdin);
        if(0 == strcmp(word, "quit\n"))
            break;
        val = atoi(word);
        if(is_bit_3_set(val))
            printf("bit 3 is set on %d (%B)\n", val, val);
        else
            printf("bit 3 is NOT set on %d (%B)\n", val, val);
    }
    while(true);
}