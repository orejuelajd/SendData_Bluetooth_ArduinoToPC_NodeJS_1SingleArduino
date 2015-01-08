/*
  Simple skecth con el cual la placa arduino enviará al portatil o equipo, con el cual se encuentre emparentado mediante bluetooth,
  un contador y este se imprimirá en el puerto serial bluetooth o COM que se crea al emparentar a los dos dispositivos.
*/ 

#include <SoftwareSerial.h>// Libreria para el serial bluetooth

SoftwareSerial btserial(10, 11); // RX, TX
int contador = 0; // el dato dado por el computador

void setup() {
  btserial.begin(9600);
  btserial.println("Puerto serial bluetooth inicializado");
}

void loop() {
   if (btserial.available()){
      btserial.println("HOLAA");
    }
delay(2000);// Espera para el siguiente dato ...

}
