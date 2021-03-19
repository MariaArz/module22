#include <iostream>
#include <fstream>
int main() {
    std::ifstream words;
    std::cout<<"Input way of file what you need\n";
    std::string way;
    std::cin>>way;
    std::string word, needword;
    int count=0;
    words.open(way);
    if (words.is_open()){
        std::cout<<"Please, input word which you need ";
        std::cin>>needword;
        while (!words.eof()){
            words >> word;
            if (word == needword){
                count++;
            }
        }
        std::cout<<count<<" time you can see this word";
    }
    else std::cout<<"file is not open";
    words.close();
    return 0;
}
