#include <stdlib.h>

extern "C" {
    uint16_t test_assembly_function();
}

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.write("Led is shining\n");
    delay(1000);

    char str[6];
    uint16_t i16 = test_assembly_function(); 
    itoa(i16, str, 16);

    digitalWrite(LED_BUILTIN, LOW);
    Serial.write(str);
    delay(1000);
}
