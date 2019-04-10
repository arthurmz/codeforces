#include <iostream>
using namespace std;

float c_center (float Ax, float Ay, float Bx, float By, float Cx, float Cy){
	float midABx = (Ax+Bx)/2;
	float midABy = (Ay+By)/2;

	float midACx = (Ax+Cx)/2;
	float midACy = (Ay+Cy)/2;

	float slopeAB = (By-Ay)/(Bx-Ax); 
	float slopeAC = (Cy-Ay)/(Cx-Ax); 

	float revSlopeAB = -1/slopeAB;
	float revSlopeAC = 1/slopeAC;

	
	

}
int main(){
	float a[] = {0,0};
	float b[] = {0,0};
	float c[] = {0,0};

	cin >> a[0] >> a[1];
	cin >> b[0] >> b[1];
	cin >> c[0] >> c[1];

	float circuncentre[] = {0,0};
	circuncentre[0] = 
	
	cout << a[0] << " " << a[1];
	cout << a[0] << " " << a[1];

	return 0;
}
