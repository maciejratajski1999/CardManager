#include <iostream>
#include "Card.h"
#include "DatabaseReader.h"
int main() {
    Card card("eeeee", 23123123213);
    Card card2("eeeee,2313123");
    std::cout << card.toString() << std::endl;
    std::cout << card2.toString() << std::endl;
    return 0;
}
