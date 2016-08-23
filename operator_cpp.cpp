#include <iostream>
using namespace std;

class numeros {
	int n;
public:
	void set(int a) { n = a;}
	void show(){  cout<<n<<endl; }
    numeros operator +(numeros op); // implementacion de la clase
    
	
};


// funcion que sobrecarga operador +
 numeros numeros::operator +(numeros op){
	numeros temp;
	temp.n = n + op.n; // retenemos la variable 
	return temp;
}




int main(int argc, char *argv[]) {
	
numeros a,b,c;


a.set(23);
a.show();

b.set(1);
b.show();

c = a +b; 
c.show();
	
	
	
	return 0;
}

