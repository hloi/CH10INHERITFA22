//
// Created by hloi on 11/3/2022.
//

#ifndef CH10INHERITFA22_NEWCXXTEST_H
#define CH10INHERITFA22_NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include <iostream>
#include <string>
#include "Soup.h"

using std::cout;
using std::endl;
using std::string;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Soup chickenSoup("ABC", 5, "can", "chicken");
        TS_ASSERT_EQUALS(chickenSoup.getName(), "ABC");
        cout << chickenSoup.to_string() << endl;
    }
};

#endif //CH10INHERITFA22_NEWCXXTEST_H
