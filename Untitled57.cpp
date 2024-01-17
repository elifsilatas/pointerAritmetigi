#include <iostream>

using namespace std;
/*
pointer kullanarak kullanıcıdan 5 sayı okuyunuz ve sonra
okunan sırayla ekrana geri bastırınız.
*/ 

int main()
{
	cout << "Lutfen 5 adet sayi giriniz" << endl;
	int *p;
	p = (int*) malloc(sizeof(int)*5);
	for(int i=0; i<5; i++){
		cin >> *(p+i);
	}
	for(int i=0; i<5; i++){
		cout << *(p+i);
	}
}