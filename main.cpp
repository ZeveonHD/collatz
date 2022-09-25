#include <iostream>

int count;
void collatz(int num){
    if (num == 0 || num < 0) return;
    if (num == 1){
        return;
    }
    count++;
    if (num % 2 == 0){
        std::cout<<num/2<<std::endl;
        collatz(num/2);
    }
    else{
        std::cout<<(num*3)+1<<std::endl;
        collatz((num*3)+1);
    }
}
int main(){
    int seed;
    std::cin >> seed;
    collatz(seed);
    std::cout<<count<<std::endl;
    return 0;
}