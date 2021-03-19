#include <iostream>
#include <fstream>
#include <string>

bool substr(char bite[4]){
    if (bite[0]==-119){
        if(bite[1]=='P' && bite[2]=='N' && bite[3]=='G') return true;
        else return false;
    }
    else {
        return false;
    }
}

int main() {
    std::string way;
    std::ifstream picture;
    std::cin>>way;
    char bite[4];
    picture.open(way, std::ios::binary);
    if (picture.is_open()){
        if (way.substr(way.find_last_of(".") + 1) == "png"){
            picture.read(bite,4);
            std::cout<<std::boolalpha << substr(bite);
        }
        else std::cout<< std::boolalpha << false;
    }
    else std::cout<<"file is not open";
    picture.close();
}
