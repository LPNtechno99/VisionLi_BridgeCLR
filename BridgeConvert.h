#pragma once
#include <opencv2/core/core.hpp>

using namespace System::Drawing;

namespace CLR_LPN
{
	public ref class BridgeConvert
	{
	public:
		static Bitmap^ MatToBitmap(cv::Mat srcMat);
		static cv::Mat BitmapToMat(Bitmap^ srcImg);
	};
}