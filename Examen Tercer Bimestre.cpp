#include <iostream>
#include <fstream>
using namespace std;
int main (){
string a;
ofstream fich ("Examen.txt");
cout<<"Ingrese datos";
getline (cin,a);
fich<<a;
}
