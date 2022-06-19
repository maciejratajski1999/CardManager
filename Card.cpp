//
// Created by Maciej on 18.06.2022.
//
#include "Card.h"
#include "utils.h"
Card::Card(std::string brand, long long number){
    this->brand = brand;
    this->number = number;
}

Card::Card(std::string line){
    std::vector<std::string> splitLine = splitString(line, ',');
    this->brand = splitLine[0];
    this->number = std::stoll(splitLine[1]);
}

std::string Card::toString() {
    return this->brand + "," + std::to_string(this->number);
}

bool Card::isValid() {
    return LuhnAlgorithm(this->number);
}