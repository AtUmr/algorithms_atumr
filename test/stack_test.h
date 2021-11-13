#ifndef ALGO_ATUMR_STACK_TEST_H
#define ALGO_ATUMR_STACK_TEST_H

#include <gtest/gtest.h>

#include "../include/stack.h"

using namespace atumr;

class StackTest : public testing::Test {
    public:
    Stack<int> stack_0;

    protected:
    static void SetUpTestCase() {
    }

    static void TearDownTestCase() {
    }
};

TEST_F(StackTest, CreateStackTest){
    EXPECT_TRUE(stack_0.empty());
    EXPECT_EQ(stack_0.size(), 0);
}

TEST_F(StackTest, PushStackTest){
    for(int i=0;i<10;++i) {
        stack_0.push(i);
    }
    EXPECT_EQ(stack_0.size(), 10);
    EXPECT_EQ(stack_0.top(), 9);
}

TEST_F(StackTest, PopStackTest){
    for(int i=0;i<10;++i) {
        stack_0.push(i);
    }
    EXPECT_EQ(stack_0.size(), 10);
    EXPECT_EQ(stack_0.top(), 9);
    
    for(int i=0;i<10;++i) {
        EXPECT_EQ(stack_0.top(), 9-i);
        stack_0.pop();
        EXPECT_EQ(stack_0.size(), 9-i);
    }
    EXPECT_TRUE(stack_0.empty());
    EXPECT_EQ(stack_0.size(), 0);
}

TEST_F(StackTest, ClearStackTest){
    for(int i=0;i<10;++i) {
        stack_0.push(i);
    }
    EXPECT_EQ(stack_0.size(), 10);
    stack_0.clear();
    EXPECT_TRUE(stack_0.empty());
    EXPECT_EQ(stack_0.size(), 0);
}

TEST_F(StackTest, ComprehensionStackTest){
    for(int i=0;i<10;++i) {
        stack_0.push(i);
    }
    EXPECT_EQ(stack_0.size(), 10);
    EXPECT_EQ(stack_0.top(), 9);
    
    for(int i=0;i<5;++i) {
        EXPECT_EQ(stack_0.top(), 9-i);
        stack_0.pop();
        EXPECT_EQ(stack_0.size(), 9-i);
    }
    EXPECT_EQ(stack_0.size(), 5);

    for(int i=0;i<5;++i) {
        stack_0.push(i);
    }
    EXPECT_EQ(stack_0.size(), 10);
    EXPECT_EQ(stack_0.top(), 4);

    stack_0.clear();
    EXPECT_TRUE(stack_0.empty());
    EXPECT_EQ(stack_0.size(), 0);
}

#endif