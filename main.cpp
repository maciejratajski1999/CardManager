#include <iostream>
#include "Card.h"
#include "DatabaseReader.h"
#include "utils.h"
int main() {
    Card card("VISA", 4780671466102940);
    DatabaseReader d("database.csv");
    std::cout << card.isValid() << std::endl;
    return 0;
}
