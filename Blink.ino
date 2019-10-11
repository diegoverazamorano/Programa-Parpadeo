// Este programa permite modificar el tiempo de encendido y apagado del pin 13 de la placa arduino, esta a su vez cuenta con un led en
//esa posicion



void setup() {
  // configura el pin 13 como una salida
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // enciende el led a un voltaje HIGH, valor=255
  delay(500);                       // tiempo en milisegundos 500ms=medio segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el led a un voltaje LOW, valor=0
  delay(2000);                       // tiempo en milisegundos 2000ms=2 segundos
}
