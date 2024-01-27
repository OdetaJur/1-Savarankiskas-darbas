#include "My_Lib.h"

int main()
{
	vector<Student> Grupe;
	string failo_vardas;

	//for (int i = 0; i < 3; i++) {
		Student Laikinas;
	//	string laikS;
	//	vector<int> Vec;
	////	cout << " Iveskite varda: ";
	////	cin >> laikS; Laikinas.SetName(laikS); // perkeliam į laikinas

	//	cout << " Iveskite pavarde: ";
	//	cin >> laikS; Laikinas.SetSurname(laikS); // perkeliam į laikinas

	//	cout << " Kiek namu darbu buvo semestre? ";
	//	int ndNr; cin >> ndNr;
	//	for (int i = 0; i < ndNr; i++) {
	//		int pazym;
	//		cout << "Iveskite " << i + 1 << " pazymi: ";
	//		cin >> pazym; Vec.push_back(pazym); // perkeliam į vec
	//	}
	//	Laikinas.SetHW(Vec); Vec.clear(); // perkeliam į laikiną ; išvalom Vec
	//	cout << "Koks egzamino pazymys? ";
	//	cin >> ndNr;
	//	Laikinas.SetExam(ndNr); //
	//	Laikinas.Rezult('v');
	//	//cin >> Laikinas;
	//	Grupe.push_back(Laikinas); // perkeliam iš laikino į grupe
	//	Laikinas.~Student(); // išvalom laikiną su destruktorium
	//}
	//for (auto& duom : Grupe) duom.printas();


	////////////////////////////////////////////////////////
	///failo nuskaitymas
	cout << "Įveskite pilną failo vardą" << endl;
	cin >> failo_vardas;
	nuskait(Grupe, failo_vardas);
	for (auto& duom : Grupe) duom.printas()
		
	system("pause");
}

