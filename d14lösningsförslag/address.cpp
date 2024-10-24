#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class address {
   public:
     char name[40];
     char phone[40];
     address() { }
     address(char Name[], char Phone[]) {
         strcpy(name, Name);
         strcpy(phone, Phone);
     }
     void print() {
         printf("%s ", name);
         printf("%s\n", phone);
     }
};

int main(int argc, char **argv) {
    address Arne("Arne Svensson", "013-131313");
    address Berith("Berith Qvist", "0616-616 616");
    Arne.print();
    Berith.print();
    return 0;
}