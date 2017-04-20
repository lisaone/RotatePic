#include "stdafx.h"
#include "InitialMatrix.h"
#include <vector>
#include <iostream>
using namespace std;

InitialMatrix::InitialMatrix()
{
}


InitialMatrix::~InitialMatrix()
{
}


int InitialMatrix::setMatrix(int Height, int Width)
{
	if (!(Height > 0) || !(Width > 0) || Height > 255 || Width > 255)
	{
		cout << "Invalid Length !" << endl;
		return -1;
	}
	
	int Order = 1;
	m_vecPicMatrix.resize(Height);

	for (int i = 0; i < Height; i++)
	{
		m_vecPicMatrix[i].resize(Width);
		for (int j = 0; j < Width; j++)
		{
			m_vecPicMatrix[i][j] = Order;
			Order++;
		}
	}
	cout << "Initialized" << endl;

	return 0;
}

int InitialMatrix::rotateMatrix()
{
	if (m_vecPicMatrix.size() == m_vecPicMatrix[0].size())
	{
		rotateMatrixRight();
		isSquare = 0;
	}
	else
	{
		rotateMatrixGeneral();
		isSquare = 1;
	}
	return 0;
}

int InitialMatrix::rotateMatrixRight()
{
	int OriginalLength = m_vecPicMatrix.size();
	int SideLength = m_vecPicMatrix.size();
	int TempValue = 0;
	for (int i = 0; i < OriginalLength / 2; i++)
	{
		for (int j = i; j < SideLength + i - 1; j++)
		{
			int BeforeValue = m_vecPicMatrix[i][j];// original
			TempValue = m_vecPicMatrix[j][SideLength + i - 1];
			m_vecPicMatrix[j][SideLength + i - 1] = BeforeValue;
			int Row = j;
			int Column = SideLength + i - 1;
			for (int k = 0; k < 3; k++)
			{
				TempValue = exchangeValue( Row, Column, TempValue);
				int TempRow = Row;
				Row = Column;
				Column = OriginalLength - TempRow - 1;
			}
		}
		SideLength = SideLength - 2;
	}
	return 0;
}

int InitialMatrix::exchangeValue(int Row, int Column, int BeforeValue)
{
	unsigned int SideLength = m_vecPicMatrix.size();
	int TempValue = m_vecPicMatrix[Column][SideLength - Row - 1];

	m_vecPicMatrix[Column][SideLength - Row - 1] = BeforeValue;
	return TempValue;
}

int InitialMatrix::rotateMatrixGeneral()
{
	unsigned int Width = m_vecPicMatrix.size();
	unsigned int Height = m_vecPicMatrix[0].size();
	m_vecPicMatrixGeneral.resize(Height);

	for (unsigned int i = 0; i < Height; i++)
	{
		m_vecPicMatrixGeneral[i].resize(Width);
	}
	for (unsigned int i = 0; i < Width; i++)
	{
		for (unsigned int j = 0; j < Height; j++)
		{
			m_vecPicMatrixGeneral[j][Width - i - 1] = m_vecPicMatrix[i][j];
		}
	}
	return 0;
}

vector<vector<int>>& InitialMatrix::getMatrix()
{
	if (isSquare == 0)
	{
		return m_vecPicMatrix;
	}
	else if (isSquare == 1)
	{
		return m_vecPicMatrixGeneral;
	}
	else
	{
		cout << "Error!" << endl;
		return m_vecPicMatrix;
	}

}