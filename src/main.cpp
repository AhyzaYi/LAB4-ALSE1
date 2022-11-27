#include "tty_lib2.h"
#include "lib_grupo1.h"
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]){
	
	int cant_per = 0;
        int cont = 0;
	int read_buf = 0;
	std::string name;
	
	string nombre;
	unsigned int identificador;

	//Verificar la cantidad de argumentos
       	float tiempo_preparacion;
        float tiempo_lectura;

	if( argc =!3)
        {
                cout << "Cantidad erronea de argumentos"<< endl;
        }
        else
        {
                tiempo_preparacion = atof(argv[1]);
                tiempo_lectura = atof(argv[2]);
        }

	std::cout << "\n\tIngrese la cantidad de participantes: ";
        std::cin >> cant_per;
	
        Participante participantes[cant_per];

	for (cont; cont < cant_per; cont++){
		std::cout << "\n\tIngrese el nombre del participante "<< cont+1 <<": ";
		std::cin >> nombre;
		std::cout << "\tIngrese el ID del participante "<< cont+1 <<": ";
		std::cin >> identificador;

		participantes[cont].set_participant(identificador, nombre);
		
		read_buf = jugar(tiempo_preparacion, tiempo_lectura);
		participantes[cont].set_pushed((char)read_buf);
		
		
		
	};
	
	//Resultados
	for (cont=0; cont < cant_per; cont++)
	{
		std::cout<<"\n\tEl nombre del participante "<<cont+1<<" es: "<<participantes[cont].get_nombre()<<endl;
        	std::cout<<"\tEl id del participante "<<cont+1<<" es: "<<participantes[cont].get_identificacion()<<endl;
		std::cout<<"\tEl numero de pulsaciones es: "<<participantes[cont].get_cant_pulsador()<<endl;

	}
	return 0;
}


