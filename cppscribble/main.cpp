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
#include <fstream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string hello("Hello World");
    string val;
    vector<double> stuff;
    double dummy;
    
    /*BOOST_FOREACH(char ch, hello)
    {
        cout << ch;
    }*/
    
    ifstream file;
    file.open("/Users/wackyvorlon/data.txt");
    
    if (file.is_open()) {
        // The file opened fine.
        cout << "\nNo problem opening file.\n";
        while (file >> dummy) {
            
            stuff.push_back(dummy);
            
        }
        
        cout << "\nAfter reading in data, we have " << stuff.size() << " elements.\n";
        double sum = accumulate(stuff.begin(), stuff.end(), 0.0);
/*        BOOST_FOREACH(double i, stuff){
            //    cout << endl << i << endl;
            sum += i;
        }*/
        cout << sum << endl;
        
        file.close();
    }
    
    cout << endl;
    return 0;
}

