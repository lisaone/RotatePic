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
	int Height = 0;
	int Width = 0;
	cout << "Please Insert the Length of Height: " << endl;
	cin >> Height;
	cout << "Please Insert the Length of Width : " << endl;
	cin >> Width;
	
	InitialMatrix IM;
	IM.setMatrix(Height, Width);

	PrintPic PP;
	PP.printMatrix(IM.getMatrix());
	IM.rotateMatrix();
	PP.printMatrix(IM.getMatrix());

    return 0;
}

