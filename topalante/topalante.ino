int e=255;

void setup(){
  pinMode (2, OUTPUT); //MotorL avanzar
  pinMode (3, OUTPUT); //MotorL retroceder
  pinMode (4, OUTPUT); //MotorR avanzar
  pinMode (5, OUTPUT); //MotorR retroceder
}
void loop()
{
    digitalWrite (2, 1);
    digitalWrite (3, 0);
    digitalWrite (4, 1);
    digitalWrite (5, 0);  
}
