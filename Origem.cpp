#include <iostream>
#include<locale>
using namespace std;

int tamanho, y, i, j;
bool z;
char frase[5000];
void transformador();

int main(){

	
	setlocale(LC_ALL, "");
	while (1) {
		
		y = 1;
		tamanho = 0;
		z = 1;

		cout << "digite aki:"; cin >> frase; cout << endl;

		transformador();

		for (i = 0; i < 100; i++)
		{
			if (frase[i] == ',')frase[i] = ' ';
			cout << frase[i] << ' ';
		}


		cout << "á" << endl;
		
		cout << endl;

		//limpador
		for (j = 0; j < 5000; j++)frase[j] = 0;

	}
	return 0;
}

void transformador() {
	while (y < 5000)
	{
		switch (frase[y])
		{
		case 'a': frase[y] = 'A'; break;
		case 'á': frase[y] = 'Á'; break;
		case 'b': frase[y] = 'B'; break;
		case 'c': frase[y] = 'C'; break;
		case 'd': frase[y] = 'D'; break;
		case 'é': frase[y] = 'É'; break;
		case 'e': frase[y] = 'E'; break;
		case 'f': frase[y] = 'F'; break;
		case 'g': frase[y] = 'G'; break;
		case 'h': frase[y] = 'H'; break;
		case 'i': frase[y] = 'I'; break;
		case 'j': frase[y] = 'J'; break;
		case 'k': frase[y] = 'K'; break;
		case 'l': frase[y] = 'L'; break;
		case 'm': frase[y] = 'M'; break;
		case 'n': frase[y] = 'N'; break;
		case 'o': frase[y] = 'O'; break;
		case 'p': frase[y] = 'P'; break;
		case 'q': frase[y] = 'Q'; break;
		case 'r': frase[y] = 'R'; break;
		case 's': frase[y] = 'S'; break;
		case 't': frase[y] = 'T'; break;
		case 'u': frase[y] = 'U'; break;
		case 'v': frase[y] = 'V'; break;
		case 'w': frase[y] = 'W'; break;
		case 'x': frase[y] = 'X'; break;
		case 'y': frase[y] = 'Y'; break;
		case 'z': frase[y] = 'Z'; break;
		case ' ':frase[y] = ' '; break;
		default:
			break;
		}
		y += 2;

	}
}

