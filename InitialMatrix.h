#pragma once
#include <vector>
using namespace std;

class InitialMatrix
{
public:
	InitialMatrix();
	~InitialMatrix();
	int setMatrix(int Width, int Height);
	vector<vector<int>>& getMatrix();
	int rotateMatrixRight();
	int rotateMatrix();
	int rotateMatrixGeneral();
private:
	int exchangeValue(int Row, int Column, int TempValue);

private:
	vector<vector<int>> m_vecPicMatrix;
	vector<vector<int>> m_vecPicMatrixGeneral;
	int isSquare = 0;
};

