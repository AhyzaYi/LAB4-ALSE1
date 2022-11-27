#include "lib_grupo1.h"
#include "tty_lib2.h"

//constructores
Participante::Participante(){}

Participante::Participante(unsigned int id, string nom){
	nombre = nom;
	identificacion = id;
	cant_pulsador = 0;
}

//funciones
void Participante::set_participant(unsigned int id, string nom){
	nombre = nom;
	identificacion = id;
}

void Participante::set_pushed(unsigned int cant){
	cant_pulsador = cant;
}

unsigned int Participante::get_identificacion(){
	return identificacion;		
}

string Participante::get_nombre(){
	return nombre;
}

unsigned int Participante::get_cant_pulsador(){
	return cant_pulsador;	
}


int jugar(float tiempo_preparacion, float tiempo_lectura)
{
	struct termios tty;
        int serial_port;
	
	config_tty ("/dev/ttyS0", &tty, B9600, &serial_port);

        int read_buf;
        int num_bytes;
	
	sleep(2);
	write(serial_port, "s", sizeof(char)); //Amarillo
        sleep(tiempo_preparacion);
 
        write(serial_port, "r", sizeof(char)); //Verde
        sleep(tiempo_lectura);
 
        write(serial_port, "S", sizeof(char)); //Rojo

        num_bytes = read(serial_port, &read_buf, sizeof(read_buf));

      	close(serial_port);

	return read_buf;
}
