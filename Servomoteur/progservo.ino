#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "5SEj2cqZwyIVBzSmscuI2_DleVdwm3TC";
char ssid[] = "Galaxy note 9";
char pass[] = "aknw6498"; 
Servo servo;

void setup()
{
Blynk.begin(auth, ssid, pass);
servo.attach(2); // NodeMCU sur la broche D4
}
BLYNK_WRITE(V1) // Cette fonction est appelée lors d'un appui sur le bouton virtuel
{
servo.write(param.asInt()); // Passage de la valeur du potentiometre
}
BLYNK_WRITE(V2)
{
servo.write(0);
}
BLYNK_WRITE(V3)
{
servo.write(90);
}

void loop()
{
Blynk.run();
}
