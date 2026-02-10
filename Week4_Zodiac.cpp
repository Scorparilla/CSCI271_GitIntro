#include <iostream>
#include <string>
using namespace std;
int main() {

	int month = 0, day = 0;
	string name;
	cout << "Enter full name: ";
	getline(cin, name);
	cout << "Enter your birth month: ";
	cin >> month;

	if (month < 1 or month > 12) {
		cout << "Invalid month";
		return 0;
	}
	cout << "Enter your birth day: ";
	cin >> day;

	if (day < 1 or day > 31) {
		cout << "Invalid day";
		return 0;
	}

	if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
		cout << "Hello " << name << " Your zodiac sign is Aquarius." << endl;
	} else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
		cout << "Hello " << name << " Your zodiac sign is Pisces." << endl;
	} else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
		cout << "Hello " << name << " Your zodiac sign is Aries." << endl;
	} else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
		cout << "Hello " << name << " Your zodiac sign is Taurus." << endl;
	} else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
		cout << "Hello " << name << " Your zodiac sign is Gemini." << endl;
	} else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
		cout << "Hello " << name << " Your zodiac sign is Cancer." << endl;
	} else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
		cout << "Hello " << name << " Your zodiac sign is Leo." << endl;
	} else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
		cout << "Hello " << name << " Your zodiac sign is Virgo." << endl;
	} else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
		cout << "Hello " << name << " Your zodiac sign is Libra." << endl;
	} else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
		cout << "Hello " << name << " Your zodiac sign is Scorpio." << endl;
	} else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
		cout << "Hello " << name << " Your zodiac sign is Sagittarius." << endl;
	} else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
		cout << "Hello " << name << " Your zodiac sign is Capricorn." << endl;
	}

	return 0;
}