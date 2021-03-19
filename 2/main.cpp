#include <iostream>
#include <fstream>


int main() {
    std::cout<<"Input way of file what you need\n";
    std::string way;
    std::cin>>way;
    std::ifstream words;
    char buffer[50];
    words.open(way, std::ios::binary);
    if (words.is_open()){
        while (!words.eof()){
            words.read(buffer,50);
            int n=words.gcount();
            buffer[n]=0;
            std::cout<<buffer;
        }
    }
    else std::cout<<"file is not open";
    words.close();
}
