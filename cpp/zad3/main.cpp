#include <iostream>

using namespace std;

int main(){
	char q;

	while(q!='q'){

	int x;
	int suma;

	cout<<"Podaj liczbe"<<endl;
	cin>>x;

	while(x<0){
	cout<<"Liczba nie moze byc mniejsza od 0 wprowadz liczbe dodatnia"<<endl;
	cin>>x;

}


	suma=suma+x;
	cout<<"Twoja suma narazie to"<<endl;
	cout<<suma<<endl;

	cout<<"Jesli chcesz wyjsc wcisnij q, jesli nie wprowadz dowolny inny klawisz"<<endl;
	cin>>q;
}
	return 0;
}
