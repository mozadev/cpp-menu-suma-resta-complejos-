#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;
void menu()
{
cout << endl; cout << endl;
cout << "MENU PRINCIPAL" << endl;
cout << "1. sumar dos numeros complejos" << endl;
cout << "2. restar dos numeros complejos" << endl;
cout << "ingresa su opcion: ";
}
void sumaimaginarios()
{
float *partereal1, *partereal2;
float *parteim1, *parteim2;
partereal1 = new float;
partereal2 = new float;
parteim1 = new float;
parteim2 = new float;
cout << "numero 1" << endl;
cout << "parte real: "; cin >> *partereal1;
cout << "parte imaginaria: "; cin >> *parteim1;
cout << "numero 2" << endl;
cout << "parte real: "; cin >> *partereal2;
cout << "parte imaginaria: "; cin >> *parteim2;
cout << "(" << *partereal1 << "+" << *parteim1 << "i)+(" << *partereal2 << "+" << *parteim2 << "i) = (" << *partereal1 + *partereal2 <<" + "<<*parteim1+*parteim2<<"i)";
delete partereal1, partereal2, parteim1, parteim2;
}
void restaimaginarios()
{
float *partereal1, *partereal2;
float *parteim1, *parteim2;
partereal1 = new float;
partereal2 = new float;
parteim1 = new float;
parteim2 = new float;
cout << "numero 1" << endl;
cout << "parte real: "; cin >> *partereal1;
cout << "parte imaginaria: "; cin >> *parteim1;
cout << "numero 2" << endl;
cout << "parte real: "; cin >> *partereal2;
cout << "parte imaginaria: "; cin >> *parteim2;
cout << "(" << *partereal1 << "+" << *parteim1 << "i)-(" << *partereal2 << "+" << *parteim2 << "i) = (" << *partereal1 - *partereal2 << " + " << *parteim1 - *parteim2 << "i)";
delete partereal1, partereal2, parteim1, parteim2;
}
int main()
{
int option;
while (1)
{
menu();
cin >> option;
switch (option)
{
case 1:
cout << endl << "suma de los numeros comlejos" << endl;
sumaimaginarios();
cout << endl;
break;
case 2:
cout << endl << "la resta de los numeros complejos" << endl;
restaimaginarios();
cout << endl;
break;
case 3:
exit(0);
break;
default:
cout << "ingrese opcion correcta" << endl;
menu();
}
}
_getch();
}