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
