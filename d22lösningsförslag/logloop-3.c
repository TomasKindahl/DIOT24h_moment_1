#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *bin_to_str8(char* buf, char B) {
    buf[8] = '\0';
    for(int i = 7; i >= 0; i--) {
        if(B & 1 != 0) 
            buf[i] = '1';
        else
            buf[i] = '0';
        B = B >> 1;
    }
    return buf;
}

int main(int argc, char **argv) {
    char line[256];
    char buf1[9], buf2[9], buf3[9];
    int b1, b2;
    do {
        printf("ange kommando: ");
        fgets(line, 256, stdin);
        if(0 == strncmp(line, "quit", 4))
            break;
        else if(0 == strncmp(line, "xor", 3)) {
            sscanf(line, "xor %d %d", &b1, &b2);
            bin_to_str8(buf1, b1);
            printf("  %s ^ %s == %s\n",
                   bin_to_str8(buf1, b1),
                   bin_to_str8(buf2, b2),
                   bin_to_str8(buf3, b1^b2));
        }
        else if(0 == strncmp(line, "and", 3)) {
            sscanf(line, "and %d %d", &b1, &b2);
            bin_to_str8(buf1, b1);
            printf("  %s & %s == %s\n",
                   bin_to_str8(buf1, b1),
                   bin_to_str8(buf2, b2),
                   bin_to_str8(buf3, b1&b2));
        }
        else if(0 == strncmp(line, "or", 2)) {
            sscanf(line, "or %d %d", &b1, &b2);
            bin_to_str8(buf1, b1);
            printf("  %s | %s == %s\n",
                   bin_to_str8(buf1, b1),
                   bin_to_str8(buf2, b2),
                   bin_to_str8(buf3, b1|b2));
        }
        else if(0 == strncmp(line, "not", 3)) {
            sscanf(line, "not %d", &b1);
            bin_to_str8(buf1, b1);
            printf("  ~ %s == %s\n",
                   bin_to_str8(buf1, b1),
                   bin_to_str8(buf3, ~b1));
        }
        else if(0 == strncmp(line, "shl", 3)) {
            sscanf(line, "shl %d %d", &b1, &b2);
            bin_to_str8(buf1, b1);
            printf("  %s << %d == %s\n",
                   bin_to_str8(buf1, b1),
                   b2, 
                   bin_to_str8(buf3, b1 << b2));
        }
        else if(0 == strncmp(line, "shr", 3)) {
            sscanf(line, "shr %d %d", &b1, &b2);
            bin_to_str8(buf1, b1);
            printf("  %s >> %d == %s\n",
                   bin_to_str8(buf1, b1),
                   b2,
                   bin_to_str8(buf3, b1 >> b2));
        }
    } while(1);
    return 0;
}