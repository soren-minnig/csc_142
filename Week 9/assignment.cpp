#include <iostream>

int main(){
    int arr1[3] = {2, 1, 1};
    int arr2[3] = {2, 1, 1};
    bool same;

    for (int i = 0; i < 3; i++){
        if (arr1[i] == arr2[i]){
            same = true;
        }
        else {
            same = false;
            break;
        }
    }
    if (same == true){
        printf("They are the same.");
    }
    else{
        printf("They are not the same.");
    }

    return 0;
}