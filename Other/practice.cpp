/*
First, declare two int variables: one for the length of the array to use in the
function and the other for a target number
Create the array
Create a for-loop that searches through the array until it finds the target, and
then return the target
If the loop reaches the final integer in the array and it does not equal the
target, return -1
*/

#include <iostream>

int function(int array[], int size, int target){

    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return target;
        }
        if (i == (size-1)) {
            return -1;
        }
    }
}

int main(){
    int numbers[10] = {0, 1, 0, 4, 5, 8, 9, 2, 0};
    int length = 10, target = 2;

    int value = function(numbers, length, target);
    std::cout<<value<<std::endl;
    
    return 0;
}