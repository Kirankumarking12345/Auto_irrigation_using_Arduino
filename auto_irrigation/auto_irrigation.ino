 int pin=A0;
 int motor=5;
 
void setup() 
{
  pinMode(A0,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int value,perct;
  value = analogRead(pin);
  perct  = map(value,540,1023,100,0);
  if(perct<=50)
  {
    digitalWrite(motor,1);
    Serial.print("Moisture percentage = ");
    Serial.println(perct);
  }
  else
  {
    digitalWrite(motor,0);
    Serial.print("Moisture percentage = ");
    Serial.println(perct);
  }
  
  
 
}
