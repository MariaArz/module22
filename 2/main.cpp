#include <iostream>
#include <fstream>


int main() {
    std::string way;
    std::ifstream words;
    char buffer[50];
    std::cin>>way;
    words.open(way, std::ios::binary);
   while (!words.eof()){
       words.read(buffer,50);
       int n=words.gcount();
       buffer[n]=0;
       std::cout<<buffer;
   }
    std::cout<<words.is_open();
    words.close();
}
