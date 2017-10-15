#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Hider.h"
#include "Hider.cpp"

TEST_CASE("Checking count", "Randomword"){
    Hider hider;
    SECTION("No bulls and one cow"){
        int *counts=hider.getBullsCowsCount("crazy","smiyq");
        REQUIRE(counts[0]==0);
        REQUIRE(counts[1]==1);
    }
    SECTION("No bulls and two cows"){
        int *counts=hider.getBullsCowsCount("crazy","smiyc");
        REQUIRE(counts[0]==0);
        REQUIRE(counts[1]==2);
    }
}
TEST_CASE("Checking limits", "attempts"){
    Hider hider;
    SECTION("Limit exceeded"){
        REQUIRE(hider.exceededAttempts(16)==true);
        REQUIRE(hider.exceededAttempts(17)==true);
}
}
