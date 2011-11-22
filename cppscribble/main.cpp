//
//  main.cpp
//  cppscribble
//
//  Created by Paul Anderson on 11-11-12.
//  Copyright (c) 2011 Anderson Locomotive Works. All rights reserved.
//

#include <iostream>
#include <string>
#include <boost/foreach.hpp>

int main (int argc, const char * argv[])
{

    // insert code here...
    std::string hello("Hello World");
    
    BOOST_FOREACH(char ch, hello)
    {
        std::cout << ch;
    }
    return 0;
}

