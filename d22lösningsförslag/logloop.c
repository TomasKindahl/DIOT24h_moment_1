#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char line[256];
    int b1, b2;
    do {
        printf("ange kommando: ");
        fgets(line, 256, stdin);
        if(0 == strncmp(line, "quit", 4))
            break;
        else if(0 == strncmp(line, "xor", 3)) {
            sscanf(line, "xor %d %d", &b1, &b2);
            printf("  %B ^ %B == %B\n", b1, b2, 0b0); // FIXME!!
        }
    } while(1);
    return 0;
}
