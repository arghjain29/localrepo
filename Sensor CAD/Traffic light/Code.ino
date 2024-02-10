// C++ code
// TRAFFIC LIGHT

void setup()
{
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(12,OUTPUT);
  
  Serial.begin(9600);
 
}

void loop()
{
  digitalWrite(8, HIGH);
  Serial.println("RED LIGHT"); 
  delay(2000);
    	
  digitalWrite(8, LOW);
  delay(100);

  
  digitalWrite(7, HIGH);
  Serial.println("YELLOW LIGHT"); 
  delay(2000);
   
  digitalWrite(7, LOW);
  delay(100);

  
  digitalWrite(12, HIGH);
  Serial.println("GREEN LIGHT");
  delay(2000);
    	
  digitalWrite(12, LOW);
  delay(100);

  
  	Serial.println("\n\n\n\n");
  
}
