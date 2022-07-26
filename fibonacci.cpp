#include <iostream>

int main(){
    std::cout<<"digite um valor: ";
    int n = 0, i = 0; std::cin>> n;
    int vec[3] = {0,1,1};

    while(true){
        if(vec[0]==n || vec[1]==n || vec[2]==n){
            std::cout<<"\n O número pertence a sequência!"<<std::endl;
            break;
        } else if(vec[2]>n){
            std::cout<<"\n O número não pertence a sequência!"<<std::endl;
            break;
        }
        vec[0] = vec[1];
        vec[1] = vec[2];
        vec[2] = vec[0]+vec[1];
    }

    return 0;
}