#pragma once
#include <Binaryzation.h>
#include <BridgeConvert.h>
#include <ExtractRotateRectArea.h>
#include <Show.h>

using namespace System::Drawing;

namespace CLR_LPN
{
	public ref class BridgeViLi
	{
	public:
		static Bitmap^ thresholdBinary(Bitmap^ bmp, int value);
		static Bitmap^ thresholdBinaryInv(Bitmap^ bmp, int value);
		static Bitmap^ ExtractROI(Bitmap^ bmp, SizeF sizeROI, PointF centerpoint, double angle);
	};
}