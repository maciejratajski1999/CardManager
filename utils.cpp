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