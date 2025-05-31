//You are trying to assign the highest number in the array a value, but this code will lead to a segmentation fault. Can you spot the issue? 
#include <iostream>
int main(){
    int* arr = new int[5];
    arr[5] = 10; 

    return 0;
}