#include <iostream>
#include <fstream>
std::string substr(char bite[4]){
    if (bite[0]==-119){
        if(bite[1]=='P' && bite[2]=='N' && bite[3]=='G') return "true";
    }
    else {
        return "false";
    }
}

int main() {
    std::string way;
    std::ifstream picture;
    std::cin>>way;
    char bite[4];
    picture.open(way, std::ios::binary);
    picture.read(bite,4);
    std::cout<<substr(bite);
    picture.close();
}
