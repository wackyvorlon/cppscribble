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

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string hello("Hello World");
    
    BOOST_FOREACH(char ch, hello)
    {
        cout << ch;
    }
    
    cout << endl;
    return 0;
}

