#include <iostream>
using namespace std;

class employee {
private:
	int empNum;
	float empCompensation;
public:   
	employee() {
		empNum = 0;
		empCompensation = 0;
	}
	void enterData() {
		cout << "Nhap so nhan vien : "; cin >> empNum;
		cout << "Nhap tien boi thuong cua nhan vien : "; cin >> empCompensation;
	}
	void display() {
		cout << "So nhan vien : " << empNum << endl;
		cout << "Nhan vien boi thuong : " << empCompensation << endl;
	}
};

int main() {
	employee EmpA, EmpB, EmpC;
	cout << "Nhan vien A : " << endl;
	EmpA.enterData();
	EmpA.display();
	cout << "nhan vien B : " << endl;
	EmpB.enterData();
	EmpB.display();
	cout << "Nhan vien C : " << endl;
	EmpC.enterData();
	EmpC.display();
	system("Dung");
	return 0;
}
