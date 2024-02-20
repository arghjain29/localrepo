// C++ code
//
int x = 0;
void setup()
{
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop()
{
  x = digitalRead(11);
  Serial.println( x);
  if (x == HIGH){
  Serial.println("motion detected");
  delay(1000);
  }
  else {
  Serial.println("motion not detected");
  delay(1000);
  }
}
