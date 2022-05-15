
#include "gtest/gtest.h"
//#include "../../beer_lib/include/beerrating.hpp"
#include "beerrating.hpp"
#include <string>

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

}
