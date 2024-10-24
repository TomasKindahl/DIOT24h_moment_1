#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <string>
#include <iostream>

class address {
   public:
     std::string name;
     std::string phone;
     address() { }
     address(std::string Name, std::string Phone) {
         name = Name;
         phone = Phone;
     }
     void print() {
         std::cout << name << std::endl;
         std::cout << phone << std::endl;
     }
};

int main(int argc, char **argv) {
    address Arne("Arne Svensson", "013-131313");
    address Berith("Berith Qvist", "0616-616 616");
    Arne.print();
    Berith.print();
    return 0;
}