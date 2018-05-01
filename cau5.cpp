#include<iostream>
#include<conio.h>
using namespace std;

class date{
	int day, month, year;
	char c;
public:
	void getdate(){
	cout<<"Enter date in [12/31/02] format: ";
	cin >>day>>c>>month>>c>>year;}
	void showdate() const { cout<<"Date is: "<<day<<c<<month<<c<<year;}};

void main(void)
{
	cout<<"### Programmed By Amahdy(MrJava) ,right restricted.~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";<<endl;
	
	date x;
	
	do{
		x.getdate(); x.showdate();
	cout<<"Nhan c de tiep tuc hay phim bat ky de thoat."<<endl<<endl;
	}while(getch()=='c');
}

