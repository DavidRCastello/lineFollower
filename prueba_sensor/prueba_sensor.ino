int e=255;

void setup()
{
  pinMode (2, OUTPUT); //MotorL avanzar
  pinMode (3, OUTPUT); //MotorL retroceder
  pinMode (4, OUTPUT); //MotorR avanzar
  pinMode (5, OUTPUT); //MotorR retroceder
  pinMode (8, INPUT); //sensorL
  pinMode (9, INPUT); //sensorM
  pinMode (10, INPUT); //sensorR 
  
}
void loop()
{
  if(digitalRead(8)==0 && digitalRead(9)==0 && digitalRead(10)==0){
    digitalWrite (2, 1);
    digitalWrite (3, 0);
    digitalWrite (4, 1);
    digitalWrite (5, 0);  
  }
  
  if(digitalRead(8)==0 && digitalRead(9)==0 && digitalRead(10)==1){
    digitalWrite (2, 0);
    digitalWrite (3, 0);
    digitalWrite (4, 1);
    digitalWrite (5, 0);  
  }
  
  if(digitalRead(8)==0 && digitalRead(9)==1 && digitalRead(10)==0){
    digitalWrite (2, 1);
    digitalWrite (3, 0);
    digitalWrite (4, 1);
    digitalWrite (5, 0);  
  }

  if(digitalRead(8)==0 && digitalRead(9)==1 && digitalRead(10)==1){
    digitalWrite (2, 0);
    digitalWrite (3, 1);
    digitalWrite (4, 1);
    digitalWrite (5, 0);  
  }

  if(digitalRead(8)==1 && digitalRead(9)==0 && digitalRead(10)==0){
    digitalWrite (2, 1);
    digitalWrite (3, 0);
    digitalWrite (4, 0);
    digitalWrite (5, 0);  
  }

  if(digitalRead(8)==1 && digitalRead(9)==0 && digitalRead(10)==1){
    digitalWrite (2, 1);
    digitalWrite (3, 0);
    digitalWrite (4, 1);
    digitalWrite (5, 0);  
  }

  if(digitalRead(8)==1 && digitalRead(9)==1 && digitalRead(10)==0){
    digitalWrite (2, 1);
    digitalWrite (3, 0);
    digitalWrite (4, 0);
    digitalWrite (5, 1);  
  }

  if(digitalRead(8)==1 && digitalRead(9)==1 && digitalRead(10)==1){
    digitalWrite (2, 0);
    digitalWrite (3, 0);
    digitalWrite (4, 0);
    digitalWrite (5, 0);  
  }
}
