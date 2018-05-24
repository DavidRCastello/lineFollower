void setup()
{
  pinMode (4, OUTPUT);    // Input4 conectada al pin 4 
  pinMode (5, OUTPUT);    // Input3 conectada al pin 5
}
void loop()
{
  // Motor gira en un sentido
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  delay(5000);

  // Motor no gira
  digitalWrite (A2, 0); 
  delay(1000);
  
  digitalWrite (5, HIGH);
  digitalWrite (4, LOW); 
  delay(5000);

  // Motor no gira
  digitalWrite (A1, 0); 
  delay(1000);
}
