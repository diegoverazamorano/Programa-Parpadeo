// Este programa permite modificar el tiempo de encendido y apagado del pin 13 de la placa arduino, esta a su vez cuenta con un led en
//esa posicion
//Ademas cambia el valor de la intensidad de la luz modificando la variable i


int i;                               // declarar variable entera i
void setup() {
  // configura el pin 13 como una salida
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
for(i=1;i<255;i++){
  digitalWrite(LED_BUILTIN, i);   // enciende el led a un voltaje i=1 y aumenta hasta 255
  delay(5);                         //tiempo en milisegundos entre cada iteracion
  }
  delay(500);                       // tiempo en milisegundos 500ms=medio segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el led a un voltaje LOW, valor=0
  for(i=255;i>0;i--){
  digitalWrite(LED_BUILTIN, LOW);    // disminuye intensidad desde i=255 hasta i=0
  delay(5);                         //tiempo en milisegundos entre cada iteracion
  }
  delay(2000);                       // tiempo en milisegundos 2000ms=2 segundos

}
