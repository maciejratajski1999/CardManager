//
// Created by Maciej on 18.06.2022.
//

#ifndef CARDMANAGER_CARD_H
#define CARDMANAGER_CARD_H
#include<string>
#include<vector>

class Card {
    private:
        std::string brand;
        long long number;
    public:
        Card(std::string brand, long long number);
        Card(std::string line);
        std::string toString();
        bool isValid();
};


#endif //CARDMANAGER_CARD_H
