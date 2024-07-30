#include "ColorPairFactory.h"
#include <iostream>

namespace TelCoColorCoder {
    ColorPair ColorPairFactory::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int ColorPairFactory::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
    void ColorPairFactory::printColorCodeManual()
    {
        int pairNumber = 1;
        for (int majorColorLoop = 0; majorColorLoop < numberOfMajorColors; ++majorColorLoop) {
            for (int minorColorLoop = 0; minorColorLoop < numberOfMinorColors; ++minorColorLoop) {
                ColorPair colorPair = GetColorFromPairNumber(pairNumber);
                std::cout << pairNumber << " _ " << colorPair.ToString() << std::endl;
                ++pairNumber;
            }
        }
    }
}