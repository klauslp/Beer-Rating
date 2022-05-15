#include "../include/beerrating.hpp"

BeerRating::BeerRating()
{
    name_ = "";
    rating_ = 0;
    alcohol_ = 0.0F;
    breweryName_ = "";
    tasteDescription_ = "";
    reviewDate_ = TimeNowString("%d-%m-%Y");
}

BeerRating::BeerRating(const std::string &beername)
    : name_(beername)
{
    rating_ = 0;
    alcohol_ = 0.0;
    breweryName_ = "";
    tasteDescription_ = "";
    reviewDate_ = TimeNowString("%d-%m-%Y");
    
}

BeerRating::BeerRating(const std::string beername, float alcohol, int rating,
        const std::string breweryname,
        const std::string &tastedescription)
{
    name_ = beername;
    alcohol_ = alcohol;
    rating_ = rating;    
    breweryName_ = breweryname;
    tasteDescription_ = tastedescription;
    reviewDate_ = TimeNowString("%d-%m-%Y");
}

void BeerRating::SetName(const std::string &name)
{
    rating_ = 0;
    name_ = name;
    alcohol_ = 0.0;
    breweryName_ = "";
    tasteDescription_ = "";
    reviewDate_ = ""; // default to Today
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

void BeerRating::SetAlcohol(float alcohol)
{
    alcohol_ = alcohol;
}

float BeerRating::GetAlcohol()
{
    return alcohol_;
}

void BeerRating::SetBreweryName(const std::string breweryname)
{
    breweryName_ = breweryname;
}

std::string BeerRating::GetBreweryName()
{
    return breweryName_;
}

void BeerRating::SetTasteDescription(const std::string &tastedescription)
{
    tasteDescription_ = tastedescription;
}
    
std::string BeerRating::GetTasteDescription()
{
    return tasteDescription_;
}

void BeerRating::SetReviewDate(const std::string &reviewdate)
{
    reviewDate_ = reviewdate;
}
    
std::string BeerRating::GetReviewDate()
{
    return reviewDate_;
}

std::ostream& operator<<(std::ostream& os, const BeerRating& br)
{
    os << "Beername:          " << br.name_ << "\n";
    os << "Alcohol:           " << br.alcohol_ << "\n";
    os << "Rating:            " << br.rating_ << "\n";
    os << "Brewery name_:     " << br.breweryName_ << "\n";
    os << "Taste description: " << br.tasteDescription_ << "\n";
    os << "Review date:       " << br.reviewDate_ << std::endl;
    return os;
}

std::string BeerRating::TimeNowString(const std::string& format)
{
    struct tm newtime;
    __time64_t long_time;
    char timebuf[30];
    // Get time as 64-bit integer.
    _time64(&long_time);
    errno_t err;
    // Convert to local time.
    err = _localtime64_s(&newtime, &long_time);
    if (err)
    {
        return "Invalid argument to _localtime64_s.";        
    }

    if (!strftime(timebuf, sizeof timebuf, format.c_str(), &newtime)) {
        return "Invalid argument to strftime.";
    }
    return std::string(timebuf);

}