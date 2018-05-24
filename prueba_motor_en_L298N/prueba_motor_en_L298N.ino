int e=255;

void setup()
{
  pinMode (A2, OUTPUT);    // Input4 conectada al pin 4 
  pinMode (A1, OUTPUT);    // Input3 conectada al pin 5
}
void loop()
{
  // Motor gira en un sentido
  analogWrite (A2, e/2);
  analogWrite (A1, 0); 
  delay(5000);
  // Motor no gira
  analogWrite (A2, 0); 
  delay(1000);
  // Motor gira en sentido inverso
  analogWrite (A1, e/4);
  delay(5000);
  // Motor no gira
  analogWrite (A1, 0); 
  delay(5000);
}
