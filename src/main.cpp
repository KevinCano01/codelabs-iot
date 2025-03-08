#include <Arduino.h>

#define LED 2

/**
 * Función que se ejecuta una vez al inicio del programa
 */
void setup() {
    Serial.begin(115200);
    pinMode(LED, OUTPUT); // Configuramos el pin 2 como salida
    digitalWrite(LED, LOW);
}

/**
 * Esta función es similar al main de C
 * Con la excepción de que loop es un bucle infinito
 */
void loop() {
    Serial.println("Hola mundo!");
    delay(3000); // Retardo bloqueante
    digitalWrite(LED, HIGH);
    delay(3000);
    digitalWrite(LED, LOW);
}

