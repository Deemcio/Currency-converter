#include <iostream>
#include <string>

using namespace std;
void Print(string x) {
	cout << x << endl;
};

int main() {
	string Currency[4] = { "Euro" , "Dolar" , "PLN" , "Rubel" };
	string Wal;
	string Currency_To;
	double Currency_Value;
	double j[4][4] = { {1.00 , 1.08 , 4.51 , 87.03} , {0.93 , 1 , 4.19 , 81.32} , {0.22 , 0.24 , 1 , 19.41} , {0.011 , 0.012 , 0.051 , 1} };
	int k;
	for (int i = 0; i < 4; i++) {
		cout << Currency[i] << endl;
	}
	cout << "Choose current currency: " << endl << endl;
	cin >> Wal;
	if (Wal == "Euro" || Wal == "Dolar" || Wal == "PLN" || Wal == "Rubel") {
		cout << "You have chosen " << Wal << endl << endl;
	}
	else {
			cout << "Wrong currency, try again!" << endl;
	}
	if (Wal == "Euro") {
		k = 0;
	}
	else if (Wal == "Dolar") {
		k = 1;
	}
	else if (Wal == "PLN") {
		k = 2;
	}
	else if (Wal == "Rubel") {
		k = 3;
	}

	Print("Choose value: ");
	cin >> Currency_Value;
	Print("Choose currency you want to convert into: ");
	cin >> Currency_To;
	double result = 0.0;
	int index = -1;

	if (Currency_To == "Euro") {
		index = 0;
	}
	else if (Currency_To == "Dolar") {
		index = 1;
	}
	else if (Currency_To == "PLN") {
		index = 2;
	}
	else if (Currency_To == "Rubel") {
		index = 3;
	}

	if (index != -1) {
		result = Currency_Value * j[k][index];
		cout << result << endl;
	}
	else {
		cout << "Invalid currency chosen!" << endl;
	}
	
	return 0;

};