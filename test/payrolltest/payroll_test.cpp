//
// Created by art on 9/14/2017.
//
#include "gtest/gtest.h"
#include "Payroll.h"

TEST(payroll_tests, test_othours_when_hours_less_than_0){
    EXPECT_EQ(0, getOvertimeHours(30));
}

TEST(payroll_tests, test_othours_when_hours_less_than_40){
    EXPECT_EQ(0, getOvertimeHours(30));
}

TEST(payroll_tests, test_othours_when_hours_greater_than_40){
    EXPECT_EQ(5, getOvertimeHours(45));
}

TEST(payroll_tests, test_regular_hours_when_less_than_0){
    EXPECT_EQ(0, getRegularHours(-5));
}

TEST(payroll_tests, test_regular_hours_when_total_hours_40){
    EXPECT_EQ(20, getRegularHours(20));
}

TEST(payroll_tests, test_regular_hours_when_in_range_0_to_40){
    EXPECT_EQ(20, getRegularHours(20));
}

TEST(payroll_tests, test_regular_hours_when_greater_than_40){
    EXPECT_EQ(40, getRegularHours(50));
}

TEST(payroll_tests, test_gross_pay_when_0_hours){
    EXPECT_EQ(0, getGrossPay(0, 0, 20));
}

TEST(payroll_tests, test_gross_pay_when_no_ot_hours){
    EXPECT_EQ(600, getGrossPay(30, 0, 20));
}

TEST(payroll_tests, test_gross_pay_when_ot_hours){
    EXPECT_EQ(1040, getGrossPay(40, 8, 20));
}





