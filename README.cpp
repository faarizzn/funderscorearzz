#include <string>
#include <iostream>

using namespace std;

void mainMenu() {

	cout << "******************************" << endl;
	cout << "ini adalah Program konversi Suhu" << endl;
	cout << endl;
	cout << "Menu            " << endl;
	cout << "1. Celcius ke kelvin " << endl;
	cout << "2. Kelvin ke celcius " << endl;
	cout << "3. Exit " << endl;
	cout << "******************************" << endl;

}
int main() {
	string ab;
	float b, c, hasil;
	float kelvin = 273.15;
	cout << endl; 
	do {
		mainMenu();

	

		cout << "masukkan program yang ingin digunakan = ";
		getline(cin, ab);

		if (ab == "celcius") {
			cout << "Masukkan suhu celcius = ";
			cin >> b;

			hasil = b + kelvin;
			cout << " hasil nya adalah =" << hasil << " Kelvin" << endl;
		}
		else if (ab == "kelvin") {
			cout << "masukkan suhu kelvin = ";
			cin >> c;
			hasil = c - kelvin;
			cout << " hasilnya adalah = " << hasil << " Celcius" << endl;
		}
		else {
			cout << "sampai jumpa" << endl;
			system("pause");
			cin.get();
			return 0;
		}
	} while (ab == "exit");
		cin.get();
	return 0;
}
