#include <iostream>
#include <fstream>

int main() {
    std::string name;
    std::string soname;
    std::string s;
    std::string date;
    int money, max=0;
    int sum=0;
    std::fstream smet;
    smet.open("C:\\text\\smet.txt");
    while (!smet.eof()){
        smet >> name >> soname >> money >> date;
        sum+=money;
        if (money >= max){
            max=money;
            s=name+" "+soname;
        }
    }
    smet.close();
    std::cout<<"sum = "<<sum<<std::endl;
    std::cout<<"max money: "<<max<<" of "<<s;
}
