#include <iostream>
#include <assert.h>
#include "TestColorCoder.h"
int main() {
   using namespace TelCoColorCoder;
   testNumberToPair(4, WHITE, BROWN);
   testNumberToPair(5, WHITE, SLATE);
   testPairToNumber(BLACK, ORANGE, 12);
   testPairToNumber(VIOLET, SLATE, 25);
   return 0;
}
