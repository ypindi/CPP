#include <gtest/gtest.h>

// Function to be tested
int multiply(int a, int b)
{
    return a * b;
}

// Test Cases
TEST(MathTest, PositiveNumbers)
{
    EXPECT_EQ(multiply(2, 3), 6);
    EXPECT_EQ(multiply(5, 5), 25);
}

TEST(MathTest, NegativeNumbers)
{
    EXPECT_EQ(multiply(-2, 3), -6);
    EXPECT_EQ(multiply(-4, -4), 16);
}

// Main Function for Running Tests
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// Expected
// [==========] Running 2 tests
// [----------] 2 tests from MathTest
// [ RUN      ] MathTest.PositiveNumbers
// [       OK ] MathTest.PositiveNumbers
// [ RUN      ] MathTest.NegativeNumbers
// [       OK ] MathTest.NegativeNumbers
// [==========] All tests passed (2 tests).

#include <cassert>

int divide(int a, int b)
{
    assert(b != 0); // Ensures no division by zero
    return a / b;
}

int main()
{
    assert(divide(10, 2) == 5);
    assert(divide(9, 3) == 3);

    // Uncommenting this will cause an assertion failure
    // assert(divide(5, 0) == 0);

    return 0;
}