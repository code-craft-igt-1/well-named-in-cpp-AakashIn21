#include "TestColorCoder.h"
#include <iostream>
#include <cassert>
namespace TelCoColorCoder {
   void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
       ColorPair colorPair = ColorPairFactory::GetColorFromPairNumber(pairNumber);
       std::cout << "Got pair " << colorPair.ToString() << std::endl;
       assert((colorPair.getMajor() == expectedMajor) && "Major color does not match!");
       assert((colorPair.getMinor() == expectedMinor) && "Minor color does not match!");
   }
   void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
       int pairNumber = ColorPairFactory::GetPairNumberFromColor(major, minor);
       std::cout << "Got pair number " << pairNumber << std::endl;
       assert((pairNumber == expectedPairNumber) && "Pair number does not match!");
   }
}