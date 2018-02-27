#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> table = {
	{ "S2", 1 },{ "S3", 1 },{ "S4", 1 },{ "Sx", 1 },
	{ "E2", 2 },{ "E3", 2 },{ "E4", 2 },{ "Ex", 2 },
	{ "T2", 5 },{ "T3", 5 },{ "T4", 5 },{ "Tx", 10 },
	{ "Z+", 5 },{ "Z4", 4 },
	{ "K2", 11 },{ "K3", 12 },{ "K4", 13 },
	{ "Y*", 6 },{ "Y$", 7 },
	{ "W^", 8 },{ "W+", 9 },{ "W$", 9 }
};


string grammar[] = { "Blanket",
	"E",
	"TZ",
	"+TZ",
	"",
	"KY",
	"*xW",
	"",
	"^K",
	"",
	"x^K",
	"2",
	"3",
	"4",
};

bool check(string inp) {
	string stack = "#S";
	inp += '#';

	//for (int i = 1; !inp.empty(); i++) {
	//	char symb = inp.front();
	//	char stackState = stack.back();
	//	int indexT = tableTop.find(symb);
	//	int indexL = tableLeft.find(stackState);

	//	if (indexT == std::string::npos)
	//		return false;

	//	int command = table[indexL][indexT];

	//	switch (command) {
	//	case 0: return true;
	//	case -2: return false;
	//	case -1: {
	//		inp.erase(0, 1);
	//		stack.pop_back();
	//		continue;
	//	}
	//	}

	//	string state = grammar[command];
	//	stack.pop_back();
	//	stack += string(state.rbegin(), state.rend());;

	//	cout << "\t" << "--- " << i << " ---" << endl
	//		<< "String: " << inp << endl
	//		<< "Command: " << command << endl
	//		<< "Stack: " << stack << endl;
	//}
	return false;
}

int main() {
	while (true) {
		string inp;
		cout << "Input string: "; cin >> inp;
		if (check(inp))
			cout << "===YES==";
		else
			cout << "===NOT==";
		cout << "\n\n\n";
	}
	return 0;
}
