add_test( BeerRatingTests.testBeerName C:/Users/Honda/cpp/projects/Beer-Rating/build/tests/Debug/BeerRatingTests.exe [==[--gtest_filter=BeerRatingTests.testBeerName]==] --gtest_also_run_disabled_tests)
set_tests_properties( BeerRatingTests.testBeerName PROPERTIES WORKING_DIRECTORY C:/Users/Honda/cpp/projects/Beer-Rating/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==] VS_DEBUGGER_WORKING_DIRECTORY)
set( BeerRatingTests_TESTS BeerRatingTests.testBeerName)
