#include <gtest/gtest.h>
#include "Fibonachi_num.h"

TEST(fibon, for_null) {
        int calcfibonachi = Fibonachi_payment <0>::value;

        ASSERT_EQ(0, calcfibonachi);
}

TEST(fibon, for_four) {
    int calcfibonachi = Fibonachi_payment <4>::value;

    ASSERT_EQ(3, calcfibonachi);
}

TEST(fibon, for_nine) {

    int calcfibonachi = Fibonachi_payment <9>::value;

    ASSERT_EQ(34, calcfibonachi);

}

TEST(fibon, for_nineteen) {
 
        int calcfibonachi = Fibonachi_payment <19>::value;
        
        ASSERT_EQ(4181, calcfibonachi);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
