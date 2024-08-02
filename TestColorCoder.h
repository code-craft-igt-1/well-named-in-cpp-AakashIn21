#pragma once
#include "ColorPairFactory.h"
namespace TelCoColorCoder {
   // Test function to validate number to color pair conversion
   void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
   // Test function to validate color pair to number conversion
   void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
}
