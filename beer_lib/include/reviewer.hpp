#ifndef REVIEWER_HPP
#define REVIEWER_HPP

#include <vector>
#include "beerrating.hpp"

class Reviewer
{
public:
    Reviewer();

private:
    std::vector<BeerRating> beer_reviews_;     

};
#endif