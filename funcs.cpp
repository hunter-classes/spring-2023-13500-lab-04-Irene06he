//Name : Irene He He
//GitHub Name : Irene06he

#include <iostream>
#include"funcs.h"
#include<string>

//Task A
std::string box(int width, int height){
  	std::string symbol;
    for (int i = 0; i <height ; i++)
  {
    std::string symbol = "*";
    for (int j = 0; j < width; j++)
    std::cout<<symbol;
    std::cout<<std::endl;
  }
  return symbol;
}

//Task B
std::string checkerboard(int width, int height){
	std::string symbol;
	for (int i = 0; i < height; i++){
		for (int j = 0; j < width; j++){
			if (i % 2 != 0 && j % 2 == 0){
				std::cout<<" ";
			}
			else if (i % 2 == 0 && j % 2 != 0){
				std::cout<<" ";
			}
			else{
				std::cout<<"*";
			}
		}
		std::cout<<std::endl;
	}
	return symbol;
}

//Task C
std::string cross (int size){
	std::string symbol;
	for (int i = 0 ; i < size; i++){
		for (int j = 0; j < size; j++){
			if (j == i  || j == (size - 1 - i)){
				std::string symbol = "*";
				std::cout<<symbol;
			}
			else{
				std::cout<<" ";
			}
		}
		std::cout<<std::endl;
	}
	return symbol;
}

//Task D
std::string lower(int length){
  std::string str;
    for (int i = 0 ; i <=length; i++)
  {
    std::string str = "*";
    for (int j = 0; j < i; j++)
    std::cout<<str;
    std::cout<<std::endl;
  }
  return str;
}

//Task E
std::string upper(int length){
  std::string pro;
    for (int i = length; i>=0; i--)
  {
    std::string pro = "*";
    for (int j = length- i; j > 0; j--)
    std::cout<<" ";
    for (int a = i ; a > 0 ; a --){
       std::cout<<pro;
    }
    std::cout<<std::endl;
  }
  return pro;
}

//Task F
std::string trapezoid(int width, int height){
	std::string symbol;
    int spaces = 0;
	int stars = width;
	if (height>(width/2)){
			std::cout<<"Impossible shape!";
		}

	else {
	for (int i = 0 ; i < height; i++){
		for (int j = 0; j <spaces; j++){
			std::cout<<" ";
		}
		for (int j = 0; j< stars; j++){
			std::cout<<"*";
		}
	spaces += 1;
	stars -= 2;
	std::cout<<std::endl;
	} }
	return symbol;
}

//Task G
std::string checkerboard3x3(int width, int height){
	std::string symbol;
	for (int i = 0; i < height; i++){
		for (int j = 0; j <width; j++){
					if((i / 3 +j / 3) % 2 ==0){
                        std::cout << "*";
                    }else{
                        std::cout << " ";
                    }
				}
		std::cout<<std::endl;
		}

	return symbol;
}