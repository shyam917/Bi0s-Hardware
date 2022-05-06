int dutycycle;
float N;
float Ton;
float Toff=1000-Ton;
void setup()
{
 pinMode(8,OUTPUT); 
 Serial.begin(9600); 
  Serial.println("enter the voltage you want");
 while(Serial.available()==0){}
 N=Serial.parseInt();
 Ton=N*200.;
 Serial.println(N);
  
}

void loop()
{
  
  digitalWrite(8,HIGH);
  delay(Ton);
  digitalWrite(8,LOW);
  delay(Toff);
}