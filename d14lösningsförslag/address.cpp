#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class address {
   public:
     char name[40];
     char phone[40];
};

int main(int argc, char **argv) {
    address Arne;
    address Berith;
    strcpy(Arne.name, "Arne Svensson");
    strcpy(Arne.phone, "013-131313");
    printf("%s ", Arne.name);
    printf("%s\n", Arne.phone);
    strcpy(Berith.name, "Berith Qvist");
    strcpy(Berith.phone, "0616-616 616");
    printf("%s ", Berith.name);
    printf("%s\n", Berith.phone);
    return 0;
}