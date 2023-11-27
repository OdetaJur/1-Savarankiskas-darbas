
//My_Lib.h prad
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
	Student() {
		cout << "Data declareted";
	}
	Student(string N, string S, vector <int> H, int E) {
		Name = N;
		Surname = S;
		std::copy(H.begin(),H.end(),HW);
		Exam = E;
		Rezult('v');
	}
	//kopijavimo konstruktorius
	Student (const Student& A) {
		Name = A.Name;
		Surname = A.Surname;
		std::copy(A.HW.begin(), A.HW.end(), HW);
		Exam = A.Exam;
		Rez = A.Rez;
	}
	// priskyrimo-kopijavimo operatorius
	Student& operator=(const Student &A) {
		in(this == &A) return *this;
		Name = A.Name;
		Surname = A.Surname;
		std::copy(A.HW.begin(), A.HW.end(), HW);
		Exam = A.Exam;
		Rez = A.Rez;
		return *this; // this rodo į patį elementą
	 }
	//destruktorius
	~Student() {
		Name.clear();
		Surname.clear();
		HW.clear();
		Exam=0;
		Rez=0;
	}
	//galutinio pažymio skaičiavimo metodas
	float Vid() {
		return std::accumulate(HW.begin(), HW.end(), 0.0) / HW.size();//susumuos visus skaič. ir padalins iš vektoriaus dydžių
	}
	float Med() {
		std::sort(HW.begin(), HW.end()); //sudelioja skaičius didėjimo tvarka
		return //metodas kuris leidžia aptikti vidurinius skaičius 
			(HW.size() % 2 == 1) ? HW[HW.size() / 2] /1.0 :
			(HW[HW.size() / 2]+ HW[HW.size() / 2+1])/2.0;
	}
	void Rezult() { // apskaičiuoja vidurkį arba medianą 
		cout << "Mediana ar Vidurkis? m/v ";
		char pasi; cin >> pasi;
		if (pasi == 'v') Rez = 0.4 * Vid + 0.6 * Exam;
		else { Rez = 0.4 * Med + 0.6 * Exam };
	}
};

// My_Lib.h pab

int main()
{
  
}
