#include <iostream>
using namespace std;

class mahasiswa {
public :
	int nim;
	void showNim(); //deklrasi method
};

void mahasiswa::showNim() {//implementasi method diluar class
	cout << "No Induk =" << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };		//object mhs
	mhs.showNim();			// member acces operator

	mahasiswa ref = mhs;	//pointer reference refmhs
	ref.nim = 2;			//memeber acces operator
	mhs.showNim();

	mahasiswa* pmhs = &mhs;
	pmhs->nim = 3;
	mhs.showNim();
	system("pause");
	return 0;


}


