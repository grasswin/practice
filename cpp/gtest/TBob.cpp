#include "gtest/gtest.h"
#include <iostream>

using namespace std;

class BobTest: public testing::Test {
    protected:
        virtual void SetUp() {
            a = 1;
            cout << "SetUp" << endl;
        }
        virtual void TearDown() {
            cout << "TearDown" << endl;
        }
        void run() {
            a++;
            ASSERT_TRUE(a == 2);
        }
        void run2() {
            a++;
            ASSERT_TRUE(a == 3);
        }
    private:
        int a;
};

TEST_F(BobTest, TestCase1) {
    run();
    run2();
}
TEST_F(BobTest, TestCase2) {
    run();
}
