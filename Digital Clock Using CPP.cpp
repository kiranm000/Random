//Digital Clock Using CPP
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int hour, min, sec;
	cout<<"Enter current time";

	cout << "HH - ";
	cin >> hour;
	cout << "MM - ";
	cin >> min;
	cout << "SS - ";
	cin >> sec;

	if (hour > 23) {
		cout << "Not a valid input";
	}
	else if (min > 60) {
		cout << "Not a valid input";
	}
	else if (sec > 60) {
		cout << "Not a valid input";
	}

	else {
		while (1)

		{
			system("CLS");

			// Main Code
			for (hour; hour < 24; hour++) {

				for (min; min < 60; min++) {

					for (sec; sec < 60; sec++) {
						system("cls");

						cout <<"Current Time = "<< hour << ":" << min << ":"<< sec;

						Sleep(1000);
					}
					sec = 0;
				}
				min = 0;
			}
		}
	}
}
