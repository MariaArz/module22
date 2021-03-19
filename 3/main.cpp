#include <iostream>
#include <fstream>

int main() {
    std::string name;
    std::string soname;
    std::string s;
    std::string date;
    int money, max=0;
    int sum=0;
    std::cout<<"Input way of file what you need\n";
    std::string way;
    std::cin>>way;
    std::fstream smet;
    smet.open(way);
    if (smet.is_open()){
        while (!smet.eof()){
            smet >> name >> soname >> money >> date;
            sum+=money;
            if (money >= max){
                max=money;
                s=name+" "+soname;
            }
        }
        std::cout<<"sum = "<<sum<<std::endl;
        std::cout<<"max money: "<<max<<" of "<<s;
    }
    else std::cout<<"file is not open";
    smet.close();
}
