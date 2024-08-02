#pragma once
#include <string>
namespace TelCoColorCoder {
   // Enumeration for Major Colors
   enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
   // Enumeration for Minor Colors
   enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };
   constexpr const char* MajorColorNames[] = {
       "White", "Red", "Black", "Yellow", "Violet"
   };
   constexpr const char* MinorColorNames[] = {
       "Blue", "Orange", "Green", "Brown", "Slate"
   };
   constexpr int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
   constexpr int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
   // Class to represent a color pair
   class ColorPair {
   private:
       MajorColor majorColor;
       MinorColor minorColor;
   public:
       ColorPair(MajorColor major, MinorColor minor);
       MajorColor getMajor() const;
       MinorColor getMinor() const;
       std::string ToString() const;
       
       
   };
}
