#pragma once
#include <vector>
class RotateMatrix
{
public:
	RotateMatrix();
	~RotateMatrix();
	std::vector<std::vector<int>> rotateMatrixRight(std::vector<std::vector<int>> PicMatrix);
	std::vector<std::vector<int>> exchangeValue(std::vector<std::vector<int>> PicMatrix, int SideLength, int Row, int Colume, int TempValue);
};

