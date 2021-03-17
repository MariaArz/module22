#include <iostream>
#include <fstream>
#include <string>
#include <vector>

bool relation(std::vector<std::string> buff, std::vector<std::string>answer){
    if (buff.size() == answer.size()){
        for (int i=0; i< answer.size(); i++)
            if (buff[i]!= answer[i]){
                return false;
            }
    }
    else return false;
    return true;
}
int main() {
    int n, sector=1, gamer=0, viewer=0;
    std::string way, answ;

    std::vector<std::string>buff;
    std::ifstream Q,A;
    char question[100];
    while (gamer!=6 && viewer!=6){
        std::cout<<"Input sector ";
        std::cin>>n;
        sector+=n;
        if (sector > 13){
            sector=sector-13;
        }
        way="C:\\text\\Q"+std::to_string(sector)+".txt";
        Q.open(way,std::ios::binary);
        while (!Q.eof()){
            Q.read(question,sizeof(question));
            int n=Q.gcount();
            question[n]=0;
            std::cout<<question;
        }
        Q.close();
        way="C:\\text\\A"+std::to_string(sector)+".txt";
        A.open(way);
        while (!A.eof()){
            std::string ans;
            A>>ans;
            buff.push_back(ans);
        }
        std::cout<<"\nInput your answer(enter '0' in the end) ";
        std::vector<std::string>answer;
        answ="1";
        while (answ!="0"){
            std::cin>>answ;
            answer.push_back(answ);
        }
        answer.pop_back();
        if (relation(buff,answer)){
            gamer++;
        }
        else if (!relation(buff,answer)) {
            viewer++;
        }
        buff.clear();
        answer.clear();
        A.close();
        std::cout<<"Gamer: "<<gamer<<"\nViewer: "<<viewer<<"\n";
        if (gamer == 6) {std::cout<<"gamers won";}
        else if (viewer == 6) {std::cout<<"viewers won";}
    }
    return 0;
}
