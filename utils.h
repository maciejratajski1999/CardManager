//
// Created by Maciej on 18.06.2022.
//

#ifndef CARDMANAGER_UTILS_H
#define CARDMANAGER_UTILS_H
#include<string>
#include<vector>
#include<iostream>
std::vector<std::string> splitString(std::string str, char separator);
template<typename T>
void printVector(std::vector<T> v) {
    for (auto& i : v) {
        std::cout << i << std::endl;
    }
}
#endif //CARDMANAGER_UTILS_H
