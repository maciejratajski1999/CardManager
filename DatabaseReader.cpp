//
// Created by Maciej on 18.06.2022.
//
#include "DatabaseReader.h"
#include<iostream>

DatabaseReader::DatabaseReader(std::string filename){
    this->filename = filename;
}

std::stringstream DatabaseReader::readDatabase(){
    std::ifstream file(this->filename);
    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();
    return buffer;
}

void DatabaseReader::writeDatabase(std::string data) {
    std::ofstream WriteDatabaseFile(this->filename);
    WriteDatabaseFile << data;
    WriteDatabaseFile.close();
}

void DatabaseReader::addLine(std::string line) {
    std::stringstream buffer = this->readDatabase();
    std::string string;
    std::string tempLine;
    while (std::getline(buffer, tempLine)) {
        string = string + tempLine + "\n";
    }
    string = string + line;
    this->writeDatabase(string);
}

void DatabaseReader::addCard(Card card) {
    this->addLine(card.toString());
}

std::vector<Card> DatabaseReader::getCards() {
    std::stringstream buffer = this->readDatabase();
    std::string string;
    std::string tempLine;
    std::vector<Card> cards;
    while (std::getline(buffer, tempLine)) cards.push_back(Card(tempLine));
    return cards;
}