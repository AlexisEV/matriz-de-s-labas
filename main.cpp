// Hello World program 
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include <cstdlib>

using namespace std;

void imprimir_array(char array[10][10])
{
	for (int i = 0; i < 10; i++){

		cout << '\n';
		
		for (int j = 0; j < 10; j++){

			cout << array[i][j] << ' ';
		}
	}
}

int main() 
{   

	// Array que almacena las letras en minuscula y mayuscula
	char alfabetoArray[52] = 
	{
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'

	};

	char vocales[10] = {'a','e','i','o','u','A','E','I','O','U'};

	// Array que almacena los casilleros vacios para crear una sopa de letras
	char sopaArray [10] [10];

	for (int i = 0; i < 10; i++){
		
		for (int j = 0; j < 10; j++){

			sopaArray[i][j] = 48;
		}
	}


	// Un bucle que recorre el array de letras y los asigna aleatoriamente a el array vacio estableciendo coordenadas random en ambos ejes(osea filas y columnas)
	for(int i = 0; i < 52; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			sopaArray[i][j] = alfabetoArray[rand()%52];
		}

	}

	imprimir_array(sopaArray);

	for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{

			for(int k = 0; k < 10; k++)
			{
				if((sopaArray[i][j] == vocales[k]))
				{
					cout << sopaArray[i][j] << " Es una vocal\n";
				}
			}

		}
	}


	return 0;

}

