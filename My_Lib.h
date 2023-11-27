#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int minimum(int a, int b);


class Student {
	string Name, Surname;
	vector <int> HW;
	int Exam;
	float Rez;
public:
	//konstruktoriai
	Student();
	Student(string N, string S, vector <int> H, int E);
	Student(const Student& A); //kopijavimo konstruktorius
	Student& operator=(const Student& A); // priskyrimo-kopijavimo operatorius
	~Student();	//destruktorius
	float Vid();//galutinio pažymio skaičiavimo metodas (vidurkis)
	float Med();//galutinio pažymio skaičiavimo metodas (mediana)
	void Rezult(); // apskaičiuoja vidurkį arba medianą 	
};

