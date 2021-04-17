#include <iostream>
#include <stdio.h>
using namespace std;

void Other_Pixel(int pointx , int pointy) {
	cout << "The othe pixels of this point are : " << endl;
	if (pointx == 0 || pointy == 0) {
		cout << "(" << pointx << " , " << pointy << ")" << endl;
		cout << "(" << -1 * pointx << " , " << -1 * pointy << ")" << endl;

		cout << "(" << pointy << " , " << pointx << ")" << endl;
		cout << "(" << -1 * pointy << " , " << -1 * pointx << ")" << endl << endl;
	}
	else {
		cout << "(" << pointx << " , " << pointy << ")" << endl;
		cout << "(" << -1 * pointx << " , " << pointy << ")" << endl;
		cout << "(" << pointx << " , " << -1 * pointy << ")" << endl;
		cout << "(" << -1 * pointx << " , " << -1 * pointy << ")" << endl;

		cout << "(" << pointy << " , " << pointx << ")" << endl;
		cout << "(" << -1 * pointy << " , " << pointx << ")" << endl;
		cout << "(" << pointy << " , " << -1 * pointx << ")" << endl;
		cout << "(" << -1 * pointy << " , " << -1 * pointx << ")" << endl << endl;
	}
}

void MidPoint(int pointx , int pointy , int radius) {
	int x, y;
	x = 0, y = radius;
	cout <<"The point is: " <<  "(" << pointx << " , " << pointy+radius << ")" << endl;
	Other_Pixel(pointx, pointy+radius);
	int d0 = 1 - radius;
	while (x <= y) {
		if (d0 < 0) {
			d0 = d0 + 2 * x + 3;
			x++;
		}
		else {
			d0 = d0 + 2 * x - 2 * y + 5;
			x++;
			y--;
		}
		if (x > y)
			break;
		cout << "The point is: " << "(" << pointx + x << " , " << pointy + y << ")" << endl;
		Other_Pixel(pointx + x, pointy + y);
	}
}

void main() {
	int pointx, pointy, radius;
	cout << "Enter the points: ";
	cin >> pointx >> pointy ;
	cout << "Enter the radius: ";
	cin >> radius;
	MidPoint(pointx, pointy, radius);
}
