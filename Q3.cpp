//There's something wrong with the pointer. Can you see the dangling issue?
#include <iostream>
int main(){

    int* ptr;
    {
        int x = 5;
        ptr = &x;
    }
    std::cout << *ptr;
}