//
// Created by Maciej on 18.06.2022.
//
#include "DatabaseReader.h"

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