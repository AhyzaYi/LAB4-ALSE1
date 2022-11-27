#ifndef LIB_GRUPO1_H
#define LIB_GRUPO1_H

#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Participante{
        private:
                string nombre;
                unsigned int identificacion;
                unsigned int cant_pulsador;
        public: 
		Participante ();
                Participante (unsigned int id, string nom);

                void set_participant(unsigned int id, string nom);
                void set_pushed(unsigned int cant);
                unsigned int get_identificacion();
                string get_nombre();
                unsigned int get_cant_pulsador();
};

unsigned int sleep(unsigned int seconds);
int jugar(float tiempo_preparacion, float tiempo_lectura);

#endif

