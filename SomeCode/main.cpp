#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

int recursion1(int x,int y){
    if(x >= y){
        std::cout<<x<<" ";
        return recursion1(x - 1, y );
    }
}

int recursion2(int x,int y){
    if(x <= y){
        std::cout<<x<<" ";
        return recursion2(x + 1, y);
    }
}

int counter(){
    std::string line;
    int n = 0;
    int tmp = 0;
    int tmw = 0;

    std::ifstream in("sample.txt");
    if (in.is_open()){
        std::cout << "| ";
        while (getline(in, line)){
            std::cout << line;
        }
        std::cout << "|" << std::endl;
        n = line.length();
        std::cout<<n<<"<-----"<<std::endl;
    }

    char s = line[n];

    if (in.is_open()){
         for(int i = 0; i < n; i++){
            if(line[i] != ' '){
                tmp++;
            }else if(line[i] == ' '){
                if(tmp>=4){
                    tmw++;
                }
                tmp = 0;
            }
         }
    }
    std::cout <<"This file has "<< tmw <<" words greater than 4 characters"<< std::endl;
    in.close();

return 0;
}

int brackets(){
    std::string line;
    int n = 0, l = 0, r = 0;

    std::ifstream in("someScript.txt");
    if (in.is_open()){
        while (getline(in, line)){
            std::cout << line <<std::endl;
        }
    }

    in.close();

    std::ifstream in_("someScript.txt");

    while (!in_.eof()){
        char *buffer = (char *)calloc(1, sizeof(char));
        in_.read(buffer, 1);

        if (*buffer == '{'){
             l++;
        }else if(*buffer == '}'){
             r++;
        }
        delete buffer;
    }

     std::cout<<l<<" "<<r<<std::endl;

    if(l == r){
        std::cout<<std::endl;
        std::cout<< "The balance of brackets is fine" <<std::endl;
    }else{
        std::cout<<std::endl;
        std::cout<< "The balance of brackets is not fine" <<std::endl;
    }

    in_.close();

    std::ofstream out;
    out.open("result.txt");
    if (out.is_open()){
        if(l == r){
            out<< "The balance of brackets is fine" <<std::endl;
        }else{
            out<< "The balance of brackets is not fine" <<std::endl;
        }
    }

return 0;
}


int main(){
    recursion1(5,1);
    std::cout<<std::endl;
    recursion2(1,5);
    std::cout<<std::endl;
    counter();
    std::cout<<std::endl;
    brackets();
    return 0;
}
