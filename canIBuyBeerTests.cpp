#include "canIBuyBeer.h"
#include <gtest/gtest.h>

class CanIBuyBeerTests : public testing::Test {
protected:
	void SetUp() override {
		//game_initialize();	/* Without this the Tests could break*/
	}
};

// ETT TEST är EN FUNKTION



TEST_F(CanIBuyBeerTests, when17AndKrogenShouldNotBeAllowed)
{
    // ARRANGE
    char location = 'K';
    int age = 17;

    // ACT
    bool b = canIBuyBeer(location,age);

    // ASSERT - förväntan?
    ASSERT_EQ(b,false);
}

TEST_F(CanIBuyBeerTests, when18AndKrogenShouldBeAllowed)
{
    // ARRANGE
    char location = 'K';
    int age = 18;

    // ACT
    bool b = canIBuyBeer(location,age);

    // ASSERT - förväntan?
    ASSERT_EQ(b,true);
}

TEST_F(CanIBuyBeerTests, when19AndSystemetShouldNotBeAllowed)
{
    // ARRANGE
    char location = 'S';
    int age = 19;

    // ACT
    bool b = canIBuyBeer(location,age);

    // ASSERT - förväntan?
    ASSERT_EQ(b,false);
}


TEST_F(CanIBuyBeerTests, when20AndSystemetShouldBeAllowed)
{
    // ARRANGE
    char location = 'S';
    int age = 20;

    // ACT
    bool b = canIBuyBeer(location,age);

    // ASSERT - förväntan?
    ASSERT_EQ(b,true);
}



