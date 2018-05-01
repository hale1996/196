#include <iostream>
using namespace std;

class tollBooth {
private:
	unsigned int numOfCars;
	double amountOfMoney;
public:
	tollBooth() {
		numOfCars = 0;
		amountOfMoney = 0;
	}
	void payingCar() {
		numOfCars++;
		amountOfMoney += 0.50;
	}
	void nopayCar() {
		numOfCars++;
		amountOfMoney = amountOfMoney;
	}
	void display() {
		cout << "Tong so xe : " << numOfCars << endl;
		cout << "Tong tien : " << amountOfMoney << endl;
	}

};

int main() {
	char choice;
	tollBooth Booth;

	do {
		do
		{
			cout << "1.Nhan 'p' de dem so xe tra tien " << endl;
			cout << "2.Nhan 'n' de dem so xe khong tra tien " << endl;
			cout << "3.Nhan 'e' de in ket qua va thoat " << endl;
			cout << "Nhap lua chon >> "; cin >> choice;
			if (choice != 'p' && choice != 'n' && choice != 'e')
				cout << "Phai nhap dung ky tu !!! \n\n";
		} while ((choice != 'p') && (choice != 'n') && (choice != 'e'));


		switch (choice)
		{
		case 'p':
			Booth.payingCar();
			cout << "Xe tra tien di qua " << endl;
			break;
		case 'n':
			Booth.nopayCar();
			cout << "Xe khong tra tien da qua " << endl;
			break;
		case 'e':
			cout << "Ket qua : " << endl;
			Booth.display();
			break;
		default:
			break;
		}
	} while (choice 
		== 'p' || choice == 'n');

	system("Tam ngung");
	return 0;
}
