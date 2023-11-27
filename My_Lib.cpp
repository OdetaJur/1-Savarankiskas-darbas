#include "My_Lib.h"
int minimum(int a, int b) {
	return a < b ? a : b;
}
//konstruktoriai
Student::Student() {
	cout << "Data declareted";
}
Student::Student(string N, string S, vector <int> H, int E) {
	Name = N;
	Surname = S;
	std::copy(H.begin(), H.end(), HW);
	Exam = E;
	Rezult('v');
}
//kopijavimo konstruktorius
Student::Student(const Student& A) {
	Name = A.Name;
	Surname = A.Surname;
	std::copy(A.HW.begin(), A.HW.end(), HW);
	Exam = A.Exam;
	Rez = A.Rez;
}
// priskyrimo-kopijavimo operatorius
Student& Student::operator=(const Student& A) {
	in(this == &A) return *this;
	Name = A.Name;
	Surname = A.Surname;
	std::copy(A.HW.begin(), A.HW.end(), HW);
	Exam = A.Exam;
	Rez = A.Rez;
	return *this; // this rodo į patį elementą
}
//destruktorius
Student::~Student() {
	Name.clear();
	Surname.clear();
	HW.clear();
	Exam = 0;
	Rez = 0;
}
//galutinio pažymio skaičiavimo metodas
float Student::Vid() {
	return std::accumulate(HW.begin(), HW.end(), 0.0) / HW.size();//susumuos visus skaič. ir padalins iš vektoriaus dydžių
}
float Student::Med() {
	std::sort(HW.begin(), HW.end()); //sudelioja skaičius didėjimo tvarka
	return //metodas kuris leidžia aptikti vidurinius skaičius 
		(HW.size() % 2 == 1) ? HW[HW.size() / 2] / 1.0 :
		(HW[HW.size() / 2] + HW[HW.size() / 2 + 1]) / 2.0;
}
void Student::Rezult() { // apskaičiuoja vidurkį arba medianą 
	cout << "Mediana ar Vidurkis? m/v ";
	char pasi; cin >> pasi;
	if (pasi == 'v') Rez = 0.4 * Vid + 0.6 * Exam;
	else { Rez = 0.4 * Med + 0.6 * Exam };
}