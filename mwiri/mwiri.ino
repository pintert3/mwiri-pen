#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 temp_sensor = Adafruit_MLX90614();
double temp;

void setup() {
  Serial.begin(9600);
  int temp_status = mlx.begin();

  if(!temp_status) {
    Serial.println("Error starting mlx sensor");
  }

  delay(1000);
}

void loop() {
  temp = temp_sensor.readObjectTempC();
  Serial.print("TEMP: ");
  Serial.println(temp);
  delay(6000);
}

