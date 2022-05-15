#ifndef BEERRATING_HPP
#define BEERRATING_HPP

#include <string>


class BeerRating {
public:
    BeerRating();    
    BeerRating(const std::string &name);
    void SetName(const std::string name);
    std::string GetName();
    void SetRating(int rating);
    int GetRating();

    static const int MAX_RATING = 10;
    static const int MINIMUM_RATING = 1;

private:    
    std::string name_;
    int rating_;
};
#endif
