#include "My_Lib.h"

int main()
{
	vector<Student> Grupe;
	string filename;

	//for (int i = 0; i < 3; i++) {
		//Student Laikinas;
		//string laikS;
		/*vector<int> Vec;
		cout << " Iveskite varda: ";
		cin >> laikS; Laikinas.SetName(laikS);

		cout << " Iveskite pavarde: ";
		cin >> laikS; Laikinas.SetSurname(laikS);

		cout << " Kiek namu darbu buvo semestre? ";
		int ndNr; cin >> ndNr;
		for (int i = 0; i < ndNr; i++) {
			int pazym;
			cout << "Iveskite " << i + 1 << " Pazymiai: ";
			cin >> pazym; Vec.push_back(pazym);
		}
		Laikinas.SetHW(Vec); Vec.clear();
		cout << "Koks egzamino pazymys? ";
		cin >> ndNr;
		Laikinas.SetExam(ndNr);
		Laikinas.Rezult('v');*/
		//cin >> Laikinas;
		//Grupe.push_back(Laikinas);
		//Laikinas.~Student();
	//}
	//for (auto &duom : Grupe) duom.printas();

	cout << "Iveskite failo pavadinima" << endl;
	cin >> filename;

	SkaitytiFaila(Grupe, filename);



	system("pause");
}

