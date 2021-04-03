#include <iostream>
#include <fstream>
#include <string>

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

int main(){
    recursion1(5,1);
    std::cout<<std::endl;
    recursion2(1,5);
    std::cout<<std::endl;
    counter();
    return 0;
}
