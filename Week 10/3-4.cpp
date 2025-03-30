#include <cstdio>

int main(){
    auto original = 100;
    auto &original_ref = original;

    printf("Original: %d", original);
    printf("\nReference: %d", original_ref);

    auto new_value = 200;
    original_ref = new_value;

    printf("\nOriginal: %d", original);
    printf("\nNew value: %d", new_value);
    printf("\nReference: %d", original_ref);
}