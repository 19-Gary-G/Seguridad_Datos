// [ ===== Created using duckify.huhn.me @ dev 356a9805 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: US

#include "DigiKeyboard.h"

// msedge
const uint8_t key_arr_0[] PROGMEM = {0,16, 0,22, 0,8, 0,7, 0,10, 0,8};
// brave
const uint8_t key_arr_1[] PROGMEM = {0,5, 0,21, 0,4, 0,25, 0,8};
// opera
const uint8_t key_arr_2[] PROGMEM = {0,18, 0,19, 0,8, 0,21, 0,4};
// chrome
const uint8_t key_arr_3[] PROGMEM = {0,6, 0,11, 0,21, 0,18, 0,16, 0,8};
// firefox
const uint8_t key_arr_4[] PROGMEM = {0,9, 0,12, 0,21, 0,8, 0,9, 0,18, 0,27};
// safari
const uint8_t key_arr_5[] PROGMEM = {0,22, 0,4, 0,9, 0,4, 0,21, 0,12};
// "https://fakeupdate.net/win10ue"
const uint8_t key_arr_6[] PROGMEM = {2,52, 0,11, 0,23, 0,23, 0,19, 0,22, 2,51, 0,56, 0,56, 0,9, 0,4, 0,14, 0,8, 0,24, 0,19, 0,7, 0,4, 0,23, 0,8, 0,55, 0,17, 0,8, 0,23, 0,56, 0,26, 0,12, 0,17, 0,30, 0,39, 0,24, 0,8, 2,52};
// "https://youtu.be/dQw4w9WgXcQ?t=0s"
const uint8_t key_arr_7[] PROGMEM = {2,52, 0,11, 0,23, 0,23, 0,19, 0,22, 2,51, 0,56, 0,56, 0,28, 0,18, 0,24, 0,23, 0,24, 0,55, 0,5, 0,8, 0,56, 0,7, 2,20, 0,26, 0,33, 0,26, 0,38, 2,26, 0,10, 2,27, 0,6, 2,20, 2,56, 0,23, 0,46, 0,39, 0,22, 2,52};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    // Windows+R
    DigiKeyboard.sendKeyStroke(21, 8); // GUI R
    // spam de navegadores
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING msedge
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200); // DELAY 200
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING brave
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200); // DELAY 200
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING opera
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200); // DELAY 200
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING chrome
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200); // DELAY 200
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING firefox
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200); // DELAY 200
    duckyString(key_arr_5, sizeof(key_arr_5)); // STRING safari
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(200); // DELAY 200
    // fakew10update
    duckyString(key_arr_6, sizeof(key_arr_6)); // STRING "https://fakeupdate.net/win10ue"
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(4000); // DELAY 4000
    // rick roll
    duckyString(key_arr_7, sizeof(key_arr_7)); // STRING "https://youtu.be/dQw4w9WgXcQ?t=0s"
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(4000); // DELAY 4000
}

void loop() {}

// Created using duckify.huhn.me @ dev 356a9805