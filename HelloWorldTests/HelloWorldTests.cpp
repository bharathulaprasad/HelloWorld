#include "gtest/gtest.h"
#include "../HelloWorld/main.cpp"

TEST(MathTests, Addition) {
    int sum = 2 + 3;
    EXPECT_EQ(sum, 5);
}

TEST(HelloTests, PrintHelloWorld) {
    std::string hello = "Hello, World from GitHub Actions + Visual Studio C++!";
    EXPECT_EQ(hello, "Hello, World from GitHub Actions + Visual Studio C++!");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}