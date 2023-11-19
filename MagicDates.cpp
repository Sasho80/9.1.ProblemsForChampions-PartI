#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main() {
	int firstYear, secondYear, numberToSearchFor;
	cin>> firstYear>>secondYear>>numberToSearchFor;
	bool found=false;
	tm date = {};
	stringstream ss("01-01-" +to_string(firstYear));
	ss >> get_time(&date,"%d-%m-%Y");
	while ((date.tm_year + 1900) <= secondYear) {
		date.tm_mday++;
		mktime(&date);
		int d1 = date.tm_mday / 10;//First day digit
		int d2 = date.tm_mday % 10;//Second day digit
		int month = date.tm_mon + 1;
		int d3 = month / 10;//First month digit
		int d4 = month % 10;//Second month digit
		int year = date.tm_year + 1900;
		int d5 = year / 1000;//First year digit
		int d6 = (year / 100) % 10;//Second year digit
		int d7 = (year / 10) % 10;//Third year digit
		int d8 = year % 10;//Fourth year digit
		int weight = d1 * (d2 + d3 + d4 + d5 + d6 + d7 + d8) +
			d2 * (d3 + d4 + d5 + d6 + d7 + d8) +
			d3 * (d4 + d5 + d6 + d7 + d8) +
			d4 * (d5 + d6 + d7 + d8) +
			d5 * (d6 + d7 + d8) +
			d6 * (d7 + d8) +
			d7 * d8;
		if (weight == numberToSearchFor) {
			cout << put_time(&date, "%d-%m-%Y") << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "No" << endl;
	}
	return 0;
}