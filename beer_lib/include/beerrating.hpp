#ifndef BEERRATING_HPP
#define BEERRATING_HPP

#include <string>
#include <time.h>
#include <stdio.h>
#include <iostream>


class BeerRating {
public:
    BeerRating();    
    BeerRating(const std::string &beername);
    BeerRating(const std::string beername, float alcohol, int rating,
        const std::string breweryname,
        const std::string &tastedescription);
    void SetName(const std::string &name);
    std::string GetName();
    void SetRating(int rating);
    int GetRating();
    void SetAlcohol(float alcohol);
    float GetAlcohol();
    void SetBreweryName(const std::string breweryname);
    std::string GetBreweryName();
    void SetTasteDescription(const std::string &tastedescription);
    std::string GetTasteDescription();
    void SetReviewDate(const std::string &reviewdate);
    std::string GetReviewDate();

    friend std::ostream& operator<<(std::ostream& os, const BeerRating& br);
    static const int MAX_RATING = 10;
    static const int MINIMUM_RATING = 1;

private:
    std::string TimeNowString(const std::string &format);
    std::string name_;
    int rating_;
    float alcohol_;
    std::string breweryName_;
    std::string tasteDescription_;
    std::string reviewDate_;
};
#endif
