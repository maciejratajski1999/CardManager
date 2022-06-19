//
// Created by Maciej on 18.06.2022.
//
#include"utils.h"
std::vector<std::string> splitString(std::string str, char separator) {
    std::vector<std::string> split;
    std::string temp = "";
    for (char& c: str) {
        if (c == separator) {
            split.push_back(temp);
            temp = "";
        }
        else {
            temp += c;
        }
    }
    split.push_back(temp);
    return split;
}

int addDigits(long long number){
    std::string digits = std::to_string(number);
    int accumulator = 0;
    for (char c : digits) accumulator += c - '0';
    return accumulator;
}

bool LuhnAlgorithm(long long number){
    std::string digits = std::to_string(number);
    for (int i = digits.size() -2; i >= 0; i -= 2){
        int n = (digits[i] - '0') * 2;
        if (n >= 10) n = addDigits(n);
        digits[i] = n + '0';
    }
    int sum = addDigits(std::stoll(digits));
    if (sum % 10 == 0) return true;
    else return false;
}