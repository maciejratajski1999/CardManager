//
// Created by Maciej on 18.06.2022.
//

#ifndef CARDMANAGER_UTILS_H
#define CARDMANAGER_UTILS_H
#include<string>
#include<vector>
#include<iostream>
#include<map>
std::vector<std::string> splitString(std::string str, char separator);
template<typename T>
void printVector(std::vector<T> v) {
    for (auto& i : v) {
        std::cout << i << std::endl;
    }
}
int addDigits(long long number);
bool LuhnAlgorithm(long long Number);
bool validateBrand(std::string brand, long long number);
#endif //CARDMANAGER_UTILS_H
