
#include "gtest/gtest.h"
#include "beer_rating.hpp"

TEST(Beer_RatingTests, testBeer_name) {
    ASSERT_STREQ("Beer name", Beer_rating.name);
}