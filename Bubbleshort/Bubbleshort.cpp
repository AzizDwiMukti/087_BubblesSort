#include <iostream>
#include <string>
using namespace std;

int arr(20); // Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variable global n untuk menyimpan banyaknya elemen array

void input() {  //procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break; // keluar dari Loop
