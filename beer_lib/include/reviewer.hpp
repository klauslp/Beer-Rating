#ifndef REVIEWER_HPP
#define REVIEWER_HPP

#include <vector>
#include "Beer_rating.hpp"

class Reviewer
{
public:
    Reviewer();

private:
    std::vector<Beer_rating> beer_reviews_;     

};
#endif