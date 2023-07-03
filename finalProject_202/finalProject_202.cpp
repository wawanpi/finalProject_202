#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/

};
class Lingkaran :public bidangDatar { 
	/*lengkapi disini*/
private:
	float r; //Jari jari
	   
public:
	void input() {
		cout << "Lingkaran dibuat " << endl;
		cout << "Masukan Jejari = ";
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return  2 * 3.14 * r;
	}
	void cekUkuran() {
		if (Keliling () >=40) {
			cout << "Ukuran lingkaran adalah Besar" << endl;
			return;
		else (Keliling() <=20){
			cout << "Ukuran Lingkaran adalah Sedang" << < endl;
			return;

		}
		}
	}
	
	

};
class Persegipanjang :public bidangDatar {
	/*lengkapi disini*/
private:
	float sisi;
public:
	void input() {
		cout << "Persegi Panjang di buat " << endl;
		cout << "Masukan Panjang = ";
		cin >> sisi;
		setX(sisi);
	}
	float panjang(int sisi) {
		return;
	}
	float lebar(int sisi) {
		return;
	}


	
};
int main() {
	/*lengkapi disini*/
	bidangDatar* obyek;
	Lingkaran a;
	Persegipanjang b;

	obyek = &a;
	obyek->input();
	int r = obyek->getX();
	cout << "Luas Lingkaran = " << a.Luas(r) << endl;
	cout << "keliling lingkaran = " << a.Keliling(r) << endl;
	obyek = &b;
	int sisi;
	obyek->input();
	int sisi = obyek->getX();
	cout << "Luas Persegi panjang = " << b.Luas(sisi) << endl;
	cout << "Keliling Lingkaran = " << b.Keliling(sisi) << endl;


	return 0;
}
