#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string _ourBin;
string _Dec;
int main() {
	
	cout << "Input dec: ";
	cin >> _Dec;
	cout << endl;

	for (auto _l : _Dec)
	{
		if (!isdigit(_l))
		{
			cout << "Wrong datas";
			return 0;
		}
	}
	int _Dec_int;
	_Dec_int = stoi(_Dec);

	while (_Dec_int > 1)
	{
		_ourBin += to_string(_Dec_int % 2);
		_Dec_int /=2;
	}
	_ourBin += to_string(_Dec_int);
	reverse(_ourBin.begin(), _ourBin.end());

	cout << "Dec to bin: " << _ourBin;
	return stoi(_ourBin);
}
