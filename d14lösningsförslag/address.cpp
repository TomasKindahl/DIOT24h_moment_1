#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class address {
   public:
     char name[40];
     char phone[40];
     void print() {
         printf("%s ", name);
         printf("%s\n", phone);
     }
};

int main(int argc, char **argv) {
    address Arne;
    address Berith;
    strcpy(Arne.name, "Arne Svensson");
    strcpy(Arne.phone, "013-131313");
    Arne.print();
    strcpy(Berith.name, "Berith Qvist");
    strcpy(Berith.phone, "0616-616 616");
    Berith.print();
    return 0;
}