#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

void mainMenu() {

	cout << "******************************" << endl;
	cout << "ini adalah Program konversi Suhu" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "Menu            " << endl;
	cout << "1. Celcius ke kelvin " << endl;
	cout << "2. Kelvin ke celcius " << endl;
	cout << "3. Celius ke Fahrenheit" << endl;
	cout << "4. Fahrenheit ke Celcius" << endl;
	cout << "5. Kelvin ke Fahrenheit" << endl;
	cout << "6. Fahrenheit ke Kelvin" << endl;
	cout << "7. Exit " << endl;
	cout << "******************************" << endl;

}
int main() {

	int ab;
	float b, c, hasil;
	float kelvin = 273.15;
	float cd = 5.0, dd = 9.0;
	
	float fs = 32.0;

	cout << endl;
	do{
		mainMenu();

	

		cout << "masukkan program yang ingin digunakan = ";
		cin >> ab;
		system("cls");

		if (ab == 1) {
			cout << "Masukkan suhu celcius = ";
			cin >> b;

			hasil = b + kelvin;
			cout << " hasil nya adalah =" << hasil << " Kelvin" << endl;
			
		}
		else if (ab == 2) {
			cout << "masukkan suhu kelvin = ";
			cin >> b;
			hasil = b - kelvin;
			cout << "hasilnya adalah = " << hasil << " Celcius" << endl;
			
		}
		else if (ab == 3) {
			cout << "masukkan suhu celcius = ";
			cin >> b;
			hasil = b * cd / dd + fs;
			cout << "hasilnya adalah = " << hasil << " Fahrenheit" << endl;

		}
		else if (ab == 4) {
			cout << "masukkan suhu fahrenheit = ";
			cin >> b;
			//fs adalah 32 , cd 5 ,dd 9 
			hasil = (b - fs) * cd / dd;
			cout << "hasilnya adalah = " << hasil << " Celcius" << endl;
		}
		else if (ab == 5) {
			cout << "masukkan suhu kelvin = ";
			cin >> b;
			hasil = (b - kelvin) * cd / dd + fs;
			cout << "hasilnya adalah = " << hasil << " Fahrenheit" << endl;
		}
		else if (ab == 6) {
			cout << "masukkan suhu Fahrenheit = ";
			cin >> b;
			//fs adalah 32 , cd 5 ,dd 9 , kelvin 273,15
			hasil = ((b - fs) * cd / dd) + kelvin;
			cout << "hasilnya adalah = " << hasil << " Kelvin" << endl;
		}
		else {
			cout << "sampai jumpa" << endl;

			system("pause");
			cin.get();
			return 0;
			system("cls");

		}
		
	} while (ab != 7);
	system("cls");
	system("pause");
	
		cin.get();
	return 0;
}
