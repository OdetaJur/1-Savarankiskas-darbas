#pragma once
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

	Student();
	Student(string N, string S, vector <int> H, int E);
	Student(const Student& A); //kopijavimo konstruktorius
	Student& operator=(const Student& A); // priskyrimo-kopijavimo operatorius
	~Student(); //destruktorius
	float Vid();
	float Med();
	void Rezult(char pasi);  // apskai?iuoja vidurk? arba median? 
	//setters
	inline void SetName(string N) { Name = N; }
	inline void SetSurname(string S) { Surname = S; }
	inline void SetHW(vector <int> Vec) { HW=Vec; }
	inline void SetExam(int n) { Exam = n; }
	void printas();
	friend std::ostream& operator<<(std::ostream& out, const Student& A);
	friend std::istream& operator>>(std::istream& in, Student& A);
};

#endif // ! My_Lib