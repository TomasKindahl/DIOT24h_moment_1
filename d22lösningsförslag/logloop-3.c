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
            printf("  %B ^ %B == %B\n", b1, b2, b1^b2);
        }
        else if(0 == strncmp(line, "and", 3)) {
            sscanf(line, "and %d %d", &b1, &b2);
            printf("  %B & %B == %B\n", b1, b2, b1&b2);
        }
        else if(0 == strncmp(line, "or", 2)) {
            sscanf(line, "or %d %d", &b1, &b2);
            printf("  %B | %B == %B\n", b1, b2, b1|b2);
        }
        else if(0 == strncmp(line, "not", 3)) {
            sscanf(line, "not %d", &b1);
            printf("  ~ %B == %B\n", b1, ~b1);
        }
        else if(0 == strncmp(line, "shl", 3)) {
            sscanf(line, "shl %d %d", &b1, &b2);
            printf("  %B << %d == %B\n", b1, b2, b1<<b2);
        }
        else if(0 == strncmp(line, "shr", 3)) {
            sscanf(line, "shr %d %d", &b1, &b2);
            printf("  %B >> %d == %B\n", b1, b2, b1>>b2);
        }
    } while(1);
    return 0;
}
