#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(HelloWorldTests)
{
public:

    TEST_METHOD(TestAddition)
    {
        int sum = 2 + 3;
        Assert::AreEqual(sum, 5);
    }

    TEST_METHOD(TestHelloWorldString)
    {
        std::string hello = "Hello, World from GitHub Actions + Visual Studio C++!";
        Assert::AreEqual(hello, std::string("Hello, World from GitHub Actions + Visual Studio C++!"));
    }
};