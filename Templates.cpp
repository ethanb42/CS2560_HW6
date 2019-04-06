
//Minimum and Maximum templates
#include <iostream>
#include <string>

template <class T>
T maximum(T one, T two) {
	if (one > two) {
		return one;
	}
	else if (two > one) {
		return two;
	}
	//equal 
}

template <class T>
T minimum(T one, T two) {
	if (one < two) {
		return one;
	}
	else if (two < one) {
		return two;
	}
	//equal
}


//test the functions
int main() {
// compare two ints
	std::cout << "INTEGERS\n__________" << std::endl;
	int a = 5;
	int b = 10;
	std::cout << "The values are " << a << " and " << b << std::endl;
	std::cout << "The larger value is " << maximum(a, b) << std::endl;
	std::cout << "The smaller value is " << minimum(a, b) << std::endl;

//compare two doubles
	std::cout << "\nDOUBLES\n___________" << std::endl;
	double c = 5.5;
	double d = 10.2;
	std::cout << "The values are " << c << " and " << d << std::endl;
	std::cout << "The larger value is " << maximum(c, d) << std::endl;
	std::cout << "The smaller value is " << minimum(c, d) << std::endl;

//compare two chars
	std::cout << "\nCHARACTERS\n__________" << std::endl;
	char e = 'A';
	char f = 'B';
	std::cout << "The values are " << e << " and " << f << std::endl;
	std::cout << "The larger value is " << maximum(e, f) << std::endl;
	std::cout << "The smaller value is " << minimum(e, f) << std::endl;


//compare two strings
	std::cout << "\nSTRINGS\n___________" << std::endl;
	std::string g = "One";
	std::string h = "Two";
	std::cout << "The values are " << g << " and " << h << std::endl;
	std::cout << "The larger value is " << maximum(g, h) << std::endl;
	std::cout << "The smaller value is " << minimum(g, h) << std::endl;



	getchar();
	return 0;
}
