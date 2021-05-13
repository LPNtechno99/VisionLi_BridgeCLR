#include <BridgeViLi.h>

using namespace CLR_LPN;

Bitmap^ BridgeViLi::thresholdBinary(Bitmap^ bmp, int value)
{
	cv::Mat srcMat;
	cv::Mat threshMat;
	Bitmap^ bmpresult;
	srcMat = BridgeConvert::BitmapToMat(bmp);
	threshMat = Binaryzation::threshold(srcMat, value);
	bmpresult = BridgeConvert::MatToBitmap(threshMat);
	return bmpresult;
}
Bitmap^ BridgeViLi::thresholdBinaryInv(Bitmap^ bmp, int value)
{
	cv::Mat srcMat;
	cv::Mat threshMat;
	Bitmap^ bmpresult;
	srcMat = BridgeConvert::BitmapToMat(bmp);
	threshMat = Binaryzation::threshold(srcMat, value);
	bmpresult = BridgeConvert::MatToBitmap(threshMat);
	return bmpresult;
}
Bitmap^ BridgeViLi::ExtractROI(Bitmap^ bmp, SizeF sizeRoi, PointF centerpoint, double angle)
{
	cv::Mat srcMat;
	cv::Mat matResult;
	cv::Point2f centerPoint;
	cv::Size2f sizeROI;
	Bitmap^ bmpResult;
	srcMat = BridgeConvert::BitmapToMat(bmp);
	centerPoint = cv::Point2f(centerpoint.X, centerpoint.Y);
	sizeROI = cv::Size2f(sizeRoi.Width, sizeRoi.Height);
	matResult = ExtractRotateRectArea::Extract(srcMat, sizeROI, centerPoint, angle);
	bmpResult = BridgeConvert::MatToBitmap(matResult);
	return bmpResult;
}
