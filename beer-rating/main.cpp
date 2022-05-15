#include <iostream>
#include "beerrating.hpp"

int main(int argc, char *argv[]) {
    BeerRating br("Tuborg Classic", 4.6F, 6, "Carlsberg", 
            "Good round taste and a beer with a nice color");
    
    std::cout<<"Displaying a beer review\n";
    std::cout << br << std::endl;
}
