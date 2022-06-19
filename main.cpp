#include <iostream>
#include "Card.h"
#include "DatabaseReader.h"
int main() {
    Card card("VISA", 4780671466102940);
    DatabaseReader d("database.csv");
    std::cout << card.isValid() << std::endl;
    return 0;
}
