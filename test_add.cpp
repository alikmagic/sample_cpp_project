#include <gtest/gtest.h>
#include "my_add.hpp"

TEST(Add, Simple){
    EXPECT_EQ(my_add(2,2),4);
    EXPECT_EQ(my_add(2,3),my_add(3,2));
    EXPECT_EQ(my_add(-42,3),-39);
}

/*int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}  */