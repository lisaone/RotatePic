#include "stdafx.h"
#include "RotateMatrix.h"
#include <vector>
#include <iostream>
using namespace std;

RotateMatrix::RotateMatrix()
{
}


RotateMatrix::~RotateMatrix()
{
}

int TempValue = 0;

std::vector<std::vector<int>> RotateMatrix::rotateMatrixRight(std::vector<std::vector<int>> PicMatrix)
{
	int OriginalLength = PicMatrix.size();
	int SideLength = PicMatrix.size();
	for (int i = 0; i < OriginalLength / 2; i++)
	{
		for (int j = i; j < SideLength + i - 1; j++)
		{
			int BeforeValue = PicMatrix[i][j];// original
			TempValue = PicMatrix[j][SideLength + i - 1];
			PicMatrix[j][SideLength + i - 1] = BeforeValue;
			//cout << SideLength << endl;
			//cout << i << "," << j << " -> ";
			int Row = j;
			int Column = SideLength + i - 1;
			//cout << Row << "," << Column << endl;
			for (int k = 0; k < 3; k++)
			{
				//cout << Row << "," << Column << " -> ";
				PicMatrix = exchangeValue(PicMatrix, OriginalLength, Row, Column, TempValue);
				int TempRow = Row;
				Row = Column;
				Column = OriginalLength - TempRow - 1;
				//cout << Row << "," << Column << endl;
			}
		}
		SideLength = SideLength - 2;
	}
	return PicMatrix;
}

std::vector<std::vector<int>> RotateMatrix::exchangeValue(std::vector<std::vector<int>> PicMatrix, int SideLength, int Row, int Column, int BeforeValue)
{
	TempValue = PicMatrix[Column][SideLength - Row - 1];
	PicMatrix[Column][SideLength - Row - 1] = BeforeValue;
	//cout << "(" << Column << "," << SideLength - Row - 1 << ":" << BeforeValue << ") " << endl;
	return PicMatrix;
}