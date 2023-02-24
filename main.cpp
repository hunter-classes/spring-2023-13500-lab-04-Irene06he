//Name : Irene He He
//GitHub Name : Irene06he

#include<iostream>
#include<string>
#include"funcs.h"


int main(){
	//Task A
	std::string result;
	std::cout << "box(7,4):\n";
	result = box(7,4);
	std::cout << result;
	std::cout << "\n------------------\n";

	//Task B
	std::string ultimate;
	std::cout<<"checkerboard(11,6):\n";
	ultimate = checkerboard(11,6);
	std::cout<< ultimate;
	std::cout << "\n------------------\n";

	//Task C
	std::string last;
	std::cout << "cross(8):\n";
	last = cross(8);
	std::cout << last;
	std::cout << "\n------------------\n";

	//Task D
	std::string triangle;
	std::cout << "lower(6):\n";
	triangle = lower(6);
	std::cout << triangle;
	std::cout << "\n------------------\n";

	//Task E
	std::string answer;
	std::cout << "upper(5):\n";
	answer = upper(5);
	std::cout << answer;
	std::cout << "\n------------------\n";

	//Task F
	std::string end;
	std::cout<< "trapezoid(12,5)\n";
	end = trapezoid(12,5);
	std::cout<<end;
	std::cout << "\n------------------\n";

	std::string str;
	std::cout<< "trapezoid(12,7)\n";
	str = trapezoid(12,7);
	std::cout<<str;
	std::cout << "\n------------------\n";

	//Task G
	std::string ending;
	std::cout<<"checkerboard3x3(16,11)\n";
	ending = checkerboard3x3(16,11);
	std::cout<<ending;
	std::cout << "\n------------------\n";

	std::string finally;
	std::cout<<"checkerboard3x3(27,27)\n";
	finally = checkerboard3x3(27,27);
	std::cout<<finally;
	std::cout << "\n------------------\n";



	return 0;
}