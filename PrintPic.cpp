#include "stdafx.h"
#include "PrintPic.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h> 
#include <wincon.h>
#include <vector>
using namespace std;

PrintPic::PrintPic()
{
}


PrintPic::~PrintPic()
{
}

void PrintPic::printMatrix(std::vector<std::vector<int>> PicMatrix)
{
	cout << "Printing..." << endl;
	for (unsigned int i = 0; i < PicMatrix.size(); i++)
	{
		for (unsigned int j = 0; j < PicMatrix[i].size(); j++)
		{
			cout << setw(3) << right << PicMatrix[i][j] << " ";
		}
		cout << endl;
	}
}