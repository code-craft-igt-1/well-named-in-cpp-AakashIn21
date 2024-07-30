#pragma once
#include "ColorCoder.h"
namespace TelCoColorCoder {
	class ColorPairFactory
	{
	public:
		static ColorPair GetColorFromPairNumber(int pairNumber);
		static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
		static void printColorCodeManual();
	};
}