// RETURN
#include <iostream>
#include <string>
#include <cctype>

int decode_char(char letter){
    return letter - 'a' + 1;
}

int decode_char(char letter, int bonus){
    return decode_char(letter) + bonus;
}

int decode_message(std::string msg, int index = 0){
    if (index >= msg.size()) return 0;
    return decode_char(msg[index]) + decode_message(msg, index + 1);
}

std::string yoda_shift(const std::string& msg, int shift = 2){
    std::string message;
    for (char c : msg){
        if (isalpha(c)){
            char base = isupper(c) ? 'A' : 'a';
            message += static_cast<char>((c - base + shift) % 26 + base);
        }
        else {
            message += c;
        }
    }
    return message;
}

int main(){
    std::cout << decode_char('c') << std::endl;
    std::cout << decode_char('c', 5) << std::endl;
    std::cout << decode_message("abc") << std::endl;
    std::cout << yoda_shift("Hello world!") << std::endl;

    return 0;
}