#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "-g2Fty-AXgetAJRp3zPyC6pPS9OV_3jn";

char ssid[] = "OnePlus 5T";
char pass[] = "Sidsa678";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
