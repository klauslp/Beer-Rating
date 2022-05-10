
#include "Beer_rating.hpp"
#include "gtest/gtest.h"

namespace
{
    TEST(BeerRatingTests, testBeerName)
    {
        Beer_rating br;
        br.name = "Beer name";
        EXPECT_EQ("Beer name", br.name);
    }
}