#include <iostream>

int main(){
    std::cout<<"Digite a sentença: ";
    std::string sentence = ""; std::getline(std::cin,sentence);
    int start = 0, end = sentence.length()-1;
    char aux;

    while(end > start){
        aux = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = aux;
        start++; end--;
    }
    std::cout<<"\n"<<sentence<<std::endl;

    return 0;
}