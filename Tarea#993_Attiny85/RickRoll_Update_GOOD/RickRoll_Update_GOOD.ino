#define kdb_es_es
#include "DigiKeyboard.h"

void setup() {
  // Configuración inicial, si es necesaria
}

void loop() {
  // Espera 2 segundos al inicio
  DigiKeyboard.delay(2000);

  // Maximiza la ventana del navegador en pantalla completa usando F11
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(100);  // Espera 1 segundo para asegurar que la pantalla esté en pantalla completa
  
  // Abre Fake Windows Update en Microsoft Edge
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("brave ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);  // Espera 1 segundo
  DigiKeyboard.print("https://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);  // Espera 5 segundos

  // Abre YouTube en Microsoft Edge
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("brave ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);  // Espera 1 segundo
  DigiKeyboard.print("https://youtu.be/dQw4w9WgXcQ?t=0s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);  // Espera 5 segundos


  // Bucle infinito para mantener la ventana abierta
  for (;;) {
    // Bucle vacío
}
}