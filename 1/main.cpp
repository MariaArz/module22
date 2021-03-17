#include <iostream>
#include <fstream>
int main() {
    std::ifstream words;
    std::string word;
    int count=0;
    words.open("C:\\text\\words.txt");
    while (!words.eof()){
        words >> word;
        if (word == "go"){
            count+=1;
        }
    }
    std::cout<<count;
    words.close();
    return 0;
}
