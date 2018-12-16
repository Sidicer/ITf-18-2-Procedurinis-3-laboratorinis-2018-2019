/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 05
	name: Laboratorinis #3 - 3.5
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void plotadienis(double x1, double y1,
				 double x2, double y2,
				 double x3, double y3,
				 double x4, double y4,
				 double & plotas,
				 double & perimetras);

int main() {
	
	double x1, y1,
		   x2, y2,
		   x3, y3,
		   x4, y4,
		   plotas(0), perimetras(0);
	
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	plotadienis(x1, y1, x2, y2, x3, y3, x4, y4, plotas, perimetras);
	cout << fixed << setprecision(5) << plotas << endl << perimetras;
	
}

void plotadienis(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double & plotas, double & perimetras) {
	long double d1,d2,d3,d4,
				lx1,ly1, lx2,ly2, lx3,ly3, lx4,ly4;
	
	lx1 = pow(x1, 2) - 2*x1*x2 + pow(x2, 2);
	ly1 = pow(y1, 2) - 2*y1*y2 + pow(y2, 2);
	d1  = sqrt(lx1 + ly1);
	
	lx2 = pow(x2, 2) - 2*x2*x3 + pow(x3, 2);
	ly2 = pow(y2, 2) - 2*y2*y3 + pow(y3, 2);
	d2  = sqrt(lx2 + ly2);
	
	lx3 = pow(x3, 2) - 2*x3*x4 + pow(x4, 2);
	ly3 = pow(y3, 2) - 2*y3*y4 + pow(y4, 2);
	d3  = sqrt(lx3 + ly3);
	
	lx4 = pow(x4, 2) - 2*x4*x1 + pow(x1, 2);
	ly4 = pow(y4, 2) - 2*y4*y1 + pow(y1, 2);
	d4  = sqrt(lx4 + ly4);
	
	plotas = d1 * d2;
	perimetras = d1 + d2 + d3 + d4;
}
