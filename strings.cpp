//strings std::string
/*
	string texto = "daniel"
	texto[4] = "f"
	cout << texto == "danifl"
	
	text.size() methods exist!!!
	
	Concatenate is possible too!!
		text + text2 = sum
	
	string vetor[] = {....}

*/
#include <string>
#include <iostream>

using namespace std;

int main() {
	string text = "feliz ", text2 = "triste", sum;

//interrompe quando	clica espaço
	cin >> text;
	cout << text << endl;

//pega os espaços (why cin bug?)	
	getline(cin, text2);
	cout << text2.size() << endl;
	
//concatenating
	sum = text + text2;
	cout << sum << endl;
	
//comparing
	/*
	text != text2 == true
	.
	.
	.
	text > text2
	
	*/
	
	return 0;
}
