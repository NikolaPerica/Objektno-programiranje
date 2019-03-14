#include "pch.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

typedef struct student {
	std::string ID_student;
	std::string ime;
	std::string prezime;
	char gender;
	int kviz1;
	int kviz2;
	int ocjena_na_sred;
	int ocjena_kraj;
	int ukupno;


}Student;

bool comparare(const Student &studenti1, const Student &studenti2) {
	return studenti1.ukupno > studenti2.ukupno;
}

void dodaj(std::vector<Student>& studenti) {
	Student tmp;
	std::string ID;
	if (studenti.size() == 20)
		std::cout << "Unnijeli ste maksimalni broj studenata: ";
	else
	{

		std::cout << "Unesi ID za studenta: ";
		std::cin >> ID;
		for (int i = 0; i < studenti.size(); i++)
		{
			if (studenti[i].ID_student == ID)
			{
				std::cout << "ID vec postoji unesite novi: ";
				i = 0;
				std::cin >> ID;
			}
		}
		tmp.ID_student = ID;
		std::cout << "Unesi ime: ";
		std::cin >> tmp.ime;
		std::cout << "Unesi prezime: ";
		std::cin >> tmp.prezime;
		std::cout << "Unesi spol: ";
		std::cin >> tmp.gender;
		std::cout << "Unesi ocjenu za kviz 1: ";
		std::cin >> tmp.kviz1;
		std::cout << "Unesi ocjenu za kviz 2: ";
		std::cin >> tmp.kviz2;
		std::cout << "Unesi ocjenu na sredini: ";
		std::cin >> tmp.ocjena_na_sred;
		std::cout << "Unesi ocjenu kraju: ";
		std::cin >> tmp.ocjena_kraj;
		tmp.ukupno = tmp.kviz1 + tmp.kviz2 + tmp.ocjena_na_sred + tmp.ocjena_kraj;
		std::cout << tmp.ukupno;

		studenti.push_back(tmp);
	}


}
void azuriraj(std::vector<Student>& studenti) {
	std::string ID;
	Student tmp;
	std::cout << "Unesi ID za studenta kojeg zelite izbrisati: ";
	std::cin >> ID;



	for (int i = 0; i < studenti.size(); i++)
	{
		if (studenti[i].ID_student == ID)
		{
			std::cout << "Unesi ID za studenta: ";
			std::cin >> tmp.ID_student;
			std::cout << "Unesi ime: ";
			std::cin >> tmp.ime;
			std::cout << "Unesi prezime: ";
			std::cin >> tmp.prezime;
			std::cout << "Unesi spol: ";
			std::cin >> tmp.gender;
			std::cout << "Unesi ocjenu za kviz 1: ";
			std::cin >> tmp.kviz1;
			std::cout << "Unesi ocjenu za kviz 2: ";
			std::cin >> tmp.kviz2;
			std::cout << "Unesi ocjenu na sredini: ";
			std::cin >> tmp.ocjena_na_sred;
			std::cout << "Unesi ocjenu kraju: ";
			std::cin >> tmp.ocjena_kraj;
			tmp.ukupno = tmp.kviz1 + tmp.kviz2 + tmp.ocjena_na_sred + tmp.ocjena_kraj;

			studenti[i] = tmp;

		}
	}




}
void izbrisi(std::vector<Student>& studenti) {
	std::string ID;
	std::cout << "Unesi ID za studenta kojeg zelite izbrisati: ";
	std::cin >> ID;

	for (int i = 0; i < studenti.size(); i++)
	{
		if (studenti[i].ID_student == ID)
			studenti.erase(studenti.begin() + i);
	}

}
void prikazi_sve(std::vector<Student>& studenti) {
	int vel = studenti.size();

	for (int i = 0; i < vel; i++)
	{
		std::cout << studenti[i].ID_student << " " << studenti[i].ime << " " << studenti[i].prezime << " " << studenti[i].gender << " \n";
		std::cout << "kviz1: " << studenti[i].kviz1 << " kviz2: " << studenti[i].kviz2 << " ocj na sredini: " << studenti[i].ocjena_na_sred << " ocj na kraju: "
			<< studenti[i].ocjena_kraj << " ukupno: " << studenti[i].ukupno << "\n";
	}
}
void izracun_prosjeka(std::vector<Student>& studenti) {
	std::string ID;
	std::cout << "Unesi ID za studenta kojeg zelite izracunati prosjek: ";
	std::cin >> ID;
	float prosjek = 0;
	for (int i = 0; i < studenti.size(); i++)
	{
		if (studenti[i].ID_student == ID)
		{
			prosjek = (float)studenti[i].ukupno / 4;
			std::cout << "Prosjek za studenta" << studenti[i].ime << studenti[i].prezime << " iznosi: " << prosjek << "\n";
		}
	}

}
void stud_max_bodovi(std::vector<Student>& studenti) {
	int max = 0;
	for (int i = 0; i < studenti.size(); i++)
	{
		if (studenti[i].ukupno > max)
		{
			max = i;
		}
	}
	std::cout << "Student sa najvise bodova je" << studenti[max].ime << " " << studenti[max].prezime << " sa: " << studenti[max].ukupno << " bodova\n";
}


void stud_min_bodovi(std::vector<Student>& studenti) {
	int min = 0;
	for (int i = 0; i < studenti.size(); i++)
	{
		if (studenti[i].ukupno < min)
		{
			min = i;
		}
	}
	std::cout << "Student sa najmanje bodova je" << studenti[min].ime << " " << studenti[min].prezime << " sa: " << studenti[min].ukupno << " bodova\n";
}

void pronadi(std::vector<Student>& studenti) {
	std::string ID;
	std::cout << "Unesi ID za studenta kojeg zelite pronaci: ";
	std::cin >> ID;

	for (int i = 0; i < studenti.size(); i++)
	{
		if (studenti[i].ID_student == ID)
		{
			std::cout << studenti[i].ID_student << " " << studenti[i].ime << " " << studenti[i].prezime << " " << studenti[i].gender << " \n";
			std::cout << "kviz1: " << studenti[i].kviz1 << " kviz2: " << studenti[i].kviz2 << " ocj na sredini: " << studenti[i].ocjena_na_sred << " ocj na kraju: "
				<< studenti[i].ocjena_kraj << " ukupno: " << studenti[i].ukupno << "\n";
		}
	}


}
void sortiraj(std::vector<Student>& studenti) {
	std::sort(studenti.begin(), studenti.end(), comparare);
}

int main() {


	std::vector<Student> studenti(20);
	int izbor = 11;
	std::cout << "Za dodavanje novog studenta 1\n" << "Za brisanje studenta 2\n" << "Za azuritanje 3\n" << "Za prikaz svih zapisa 4\n" <<
		"Za izracun prosjeka bodova studenta 5\n" << "Za prikaz studenta sa najvise bodova 6\n" << "Za prikaz studenta s najmanje bodova 7\n" << "Za pronaci studenta pomocu ID 8\n"
		<< "Za sortiranje studenata prema ukupnom broju bodova 9\n" << "Za izlaz 0\n ";

	while (izbor != 0) {
		std::cin >> izbor;
		switch (izbor) {
		case 1: dodaj(studenti);
			break;
		case 2: izbrisi(studenti);
			break;
		case 3: azuriraj(studenti);
			break;
		case 4: prikazi_sve(studenti);
			break;
		case 5: izracun_prosjeka(studenti);
			break;
		case 6: stud_max_bodovi(studenti);
			break;
		case 7: stud_min_bodovi(studenti);
			break;
		case 8: pronadi(studenti);
			break;
		case 9: sortiraj(studenti);
			break;
		}
		std::cout << "\nOdaberite sljedecu opciju ";
	}
	return 0;

}

