// Rotate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h> 
#include <wincon.h>
#include <vector>
#include "InitialMatrix.h"
#include "PrintPic.h"
#include "RotateMatrix.h"
using namespace std;

int main()
{
	int SideLength = 0;
	cout << "Please Insert the Length of a Side: " << endl;
	cin >> SideLength;
	vector<vector<int>> PicMatrix(SideLength);
	InitialMatrix IM;
	PrintPic PP;
	PP.printMatrix(IM.setMatrix(PicMatrix));
	RotateMatrix RM;
	PP.printMatrix(RM.rotateMatrixRight(IM.setMatrix(PicMatrix)));
    return 0;
}

