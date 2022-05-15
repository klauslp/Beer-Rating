
#include "gtest/gtest.h"
//#include "../../beer_lib/include/beerrating.hpp"
#include "beerrating.hpp"
#include <string>
#include <time.h>
#include <stdio.h>

namespace
{
    TEST(BeerRatingTests, testBeerName)
    {
        BeerRating br;

        std::string bn("Beer name");
        std::string beername("Beer name");
        ASSERT_STREQ(beername.c_str(), bn.c_str());
        //ASSERT_STREQ(beername.c_str(), br.GetName().c_str());
    }

    TEST(BeerRatingTests, testBeerSetName)
    {
        BeerRating br;
        br.SetName("Beer name");
        EXPECT_EQ("Beer name", br.GetName());
    }

    TEST(BeerRatingTests, testBeerRating)
    {
        BeerRating br;
        EXPECT_EQ(0, br.GetRating());
    }

    TEST(BeerRatingTests, testBeerRatingAboveLimit)
    {
        BeerRating br;
        br.SetRating(11);
        EXPECT_EQ(10, br.GetRating());
    }

    TEST(BeerRatingTests, testBeerRatingBelowLimit)
    {
        BeerRating br;
        br.SetRating(0);
        EXPECT_EQ(1, br.GetRating());
    }

    TEST(BeerRatingTests, testBeerGoodRating)
    {
        BeerRating br;
        br.SetRating(8);
        EXPECT_EQ(8, br.GetRating());
    }

    TEST(BeerRatingTests, testBeerAlcohol)
    {
        BeerRating br;
        br.SetAlcohol(5.3F);
        EXPECT_EQ(5.3F, br.GetAlcohol());
    }

    TEST(BeerRatingTests, testBeerNameOfBrewery)
    {
        BeerRating br;
        br.SetBreweryName("Brewery name");
        EXPECT_EQ("Brewery name", br.GetBreweryName());
    }
    
    TEST(BeerRatingTests, testBeerTasteDescription)
    {
        BeerRating br;
        br.SetTasteDescription("Description of the taste of the beer");
        EXPECT_EQ("Description of the taste of the beer", br.GetTasteDescription());
    }

    TEST(BeerRatingTests, testBeerReviewDate)
    {
        BeerRating br;
        br.SetReviewDate("15-05-2022");
        EXPECT_EQ("15-05-2022", br.GetReviewDate());
    }

    TEST(BeerRatingTests, testBeerDefaultReviewDate)
    {
        BeerRating br;
        
        struct tm newtime;
        __time64_t long_time;
        char timebuf[30];
        // Get time as 64-bit integer.
        _time64(&long_time);
        errno_t err;
        // Convert to local time.
        err = _localtime64_s(&newtime, &long_time);
        std::string emsg;
        if (err)
        {
            emsg = "Invalid argument to _localtime64_s.";        
        }

        if (!strftime(timebuf, sizeof timebuf, "%d-%m-%Y", &newtime)) {
            emsg = "Invalid argument to strftime.";
        }
        
        EXPECT_EQ(std::string(timebuf), br.GetReviewDate());
    }

    TEST(BeerRatingTests, testBeerRatingDisplay)
    {
        BeerRating br;
        std::stringstream ss, br_stream;
        br_stream << br;

        ss << "Beername:          " << br.GetName() << "\n";
        ss << "Alcohol:           " << br.GetAlcohol() << "\n";
        ss << "Rating:            " << br.GetRating() << "\n";
        ss << "Brewery name_:     " << br.GetBreweryName() << "\n";
        ss << "Taste description: " << br.GetTasteDescription() << "\n";
        ss << "Review date:       " << br.GetReviewDate() << std::endl;
        
        EXPECT_EQ(ss.str(), br_stream.str());
    }

    TEST(BeerRatingTests, testBeerCreateBeerReview)
    {
        BeerRating br("Tuborg Classic", 4.6F, 6, "Carlsberg", 
            "Good round taste and a beer with a nice color");
        
        std::stringstream ss, br_stream;
        br_stream << br;

        ss << "Beername:          " << br.GetName() << "\n";
        ss << "Alcohol:           " << br.GetAlcohol() << "\n";
        ss << "Rating:            " << br.GetRating() << "\n";
        ss << "Brewery name_:     " << br.GetBreweryName() << "\n";
        ss << "Taste description: " << br.GetTasteDescription() << "\n";
        ss << "Review date:       " << br.GetReviewDate() << std::endl;
        
        EXPECT_EQ(ss.str(), br_stream.str());
    }

}
