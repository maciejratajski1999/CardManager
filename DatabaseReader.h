//
// Created by Maciej on 18.06.2022.
//
#ifndef CARDMANAGER_DATABASEREADER_H
#define CARDMANAGER_DATABASEREADER_H
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include"Card.h"

class DatabaseReader {
    private:
        std::string filename;
        std::stringstream readDatabase();
        void writeDatabase(std::string data);
        void addLine(std::string line);
    public:
        DatabaseReader(std::string filename);
        void addCard(Card card);
        void removeCard(Card card);
        std::vector<Card> getCards();
};


#endif //CARDMANAGER_DATABASEREADER_H
