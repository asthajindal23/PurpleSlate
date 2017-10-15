#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Hider.h"
#include "Hider.cpp"

TEST_CASE("Checking count","Randomword"){
Hider hider;
SECTION("NO bulls no cows")
{
    int *counts=hider.getBullsCowsCount("crazy","smile");
    REQUIRE(counts[0]==0);
    REQUIRE(counts[1]==0);
}

}

/*TEST_CASE("Validating Guess","randomno")
{
    Hider hider;

    SECTION("Positive Scanerios")
    {
        REQUIRE (hider.validateGuess("crazy")==true);
        REQUIRE (hider.validateGuess("timer")==true);
    }
    SECTION ("Length Invalid")
    {
        REQUIRE (hider.validateGuess("longer")==false);
        REQUIRE (hider.validateGuess("less")==false);
    }
    SECTION ("Repeating Characters")
    {
        REQUIRE (hider.validateGuess("start")==false);
        REQUIRE (hider.validateGuess("jazzy")==false);
    }
    SECTION ("Characters outside the range of a-z")
    {
        REQUIRE (hider.validateGuess("mine2")==false);
        REQUIRE (hider.validateGuess("Quick")==false);
        REQUIRE (hider.validateGuess("1234")==false);
    }*/
//}
