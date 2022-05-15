#include "../include/beerrating.hpp"

BeerRating::BeerRating()
{
    name_ = "";
    rating_ = 0;
}

BeerRating::BeerRating(const std::string &name)
    : name_(name)
{
    rating_ = 0;
}

void BeerRating::SetName(const std::string name)
{
    name_ = name;
}

std::string BeerRating::GetName()
{
    return name_;
}

void BeerRating::SetRating(int rating)
{
    if (rating > MAX_RATING)
        rating_ = MAX_RATING;
    else if (rating < MINIMUM_RATING)
        rating_ = MINIMUM_RATING;
    else
        rating_ = rating;
}

int BeerRating::GetRating()
{
    return rating_;
}
