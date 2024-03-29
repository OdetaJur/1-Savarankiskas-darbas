#include"My_Lib.h"

int minimum(int a, int b) {
	return a < b ? a : b;
};


//konstruktoriai
Student::Student() {
	cout << "Data declareted";
}
Student::Student(string N, string S, vector <int> H, int E) {
	Name = N;
	Surname = S;
	HW=H;
	Exam = E;
	Rezult('v');
}
//kopijavimo konstruktorius
Student::Student(const Student& A) {
	Name = A.Name;
	Surname = A.Surname;
	HW=A.HW;
	Exam = A.Exam;
	Rez = A.Rez;
}
// priskyrimo-kopijavimo operatorius
Student& Student::operator=(const Student& A) {
	if (this == &A) return *this;
	Name = A.Name;
	Surname = A.Surname;
	HW=A.HW;
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
void Student::Rezult(char pasi) { // apskaičiuoja vidurkį arba medianą 
	if (pasi == 'v') Rez = 0.4 * Vid() + 0.6 * Exam;
	else { Rez = 0.4 * Med() + 0.6 * Exam; };
}
void Student::printas() { 
	cout << Name << " ; " << Surname << " | ";
	for (auto& i : HW) cout << i << " | ";
		cout << Exam << " | ";
		cout << " Rezultatas = " << Rez << endl;
};
std::ostream& operator<<(std::ostream& out, const Student& A) { // perdengimas
	out << A.Name << " ; " << A.Surname << " | ";
	for (auto& i : A.HW) out << i << " | ";
	out << A.Exam << " | ";
	out << " Rezultatas = " << A.Rez << endl;
	return out;
}
std::istream& operator>>(std::istream& in, Student& A) { //perdengimas
	string laikS;
	vector<int> Vec;
	int ndNr=5;
	in >> laikS; A.SetName(laikS);
	in >> laikS; A.SetSurname(laikS);
	for (int i = 0; i < ndNr; i++) {
		int pazym;
		in >> pazym; Vec.push_back(pazym);
	}
	in >> ndNr;
	return in;
}

// nuskaitymas iš failo

void nuskait(vector<Student>& Group, const string& failo_vardas) {
	string eil;

	std::ifstream open_f(failo_vardas); // atidarom faila
	getline(open_f, eil); //nuskaitom eilutes

	while (getline(open_f, eil)) { //kol skaitom eilutes 
		std::istringstream sst(eil); //atrenkam žodžius
		Student studentai;
		sst >> studentai; //žodžius idedam i studentus
		Group.push_back(studentai); // i grupe perkeliam studentus
	}
	open_f.close();
}




//// rašymas į failą
//void rašym_eil_po_eil(std::string write_vardas) {
//	std::vector<std::string> splited;
//	std::ofstream out_f(write_vardas);
//	for (std::string a : splited) out_f << a << "\n";
//	out_f.close();
//}


