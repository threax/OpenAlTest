// OpenAlTestConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "al.h" 
#include "alc.h"
#include "alext.h"

#include <iostream>

int main()
{
    //This doesn't have to actually do anything, the error is loading the library
    auto device = alcOpenDevice(NULL);

    std::cout << "Device created\n";
}
