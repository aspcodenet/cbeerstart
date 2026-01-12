#include <gtest/gtest.h>

#include "beerCalculator.h"

class BeerCalculatorTests : public testing::Test {
protected:
	void SetUp() override {
		//game_initialize();	/* Without this the Tests could break*/
	}
};

TEST_F(BeerCalculatorTests, allowedWhenKrogenAnd18AndNotDrunk)
{
    // Arrange
    int age = 18;
    char location = 'K';
    float promille = 0.5;
    // Act
    BUYBEERSTATUS status = canBuyBeer(age, location, promille);
    // Assert
   
    ASSERT_EQ(status, BUYBEER_YES);
}

TEST_F(BeerCalculatorTests, notAllowedWhenKrogenAnd17AndNotDrunk)
{
    // Arrange
    int age = 17;
    char location = 'K';
    float promille = 0;
    // Act
    BUYBEERSTATUS status = canBuyBeer(age, location, promille);
    // Assert
   
    ASSERT_EQ(status, BUYBEER_NO_TOOYOUNG_KROGEN);
}


TEST_F(BeerCalculatorTests, notAllowedWhenKrogenAnd20AndDrunk)
{
    // Arrange
    int age = 20;
    char location = 'K';
    float promille = 1.1;
    // Act
    BUYBEERSTATUS status = canBuyBeer(age, location, promille);
    // Assert
   
    ASSERT_EQ(status, BUYBEER_NO_TOOLDRUNK);
}

TEST_F(BeerCalculatorTests, allowedWhenSystemetAnd20AndNotDrunk)
{
    int age = 20;
    char location = 'S';
    float promille = 0;
 
    BUYBEERSTATUS status = canBuyBeer(age, location, promille);
   
    ASSERT_EQ(status, BUYBEER_YES);
}
