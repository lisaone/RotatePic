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


std::vector<std::vector<int>> InitialMatrix::setMatrix(std::vector<std::vector<int>> PicMatrix)
{
	cout << "Initializing" << endl;
	int Order = 1;
	for (int i = 0; i < PicMatrix.size(); i++)
	{
		PicMatrix[i].resize(PicMatrix.size());
		for (int j = 0; j < PicMatrix[i].size(); j++)
		{
			PicMatrix[i][j] = Order;
			Order++;
		}
	}
	return PicMatrix;
}
