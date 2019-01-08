



void setup() {
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(3 ,OUTPUT);
pinMode(5 ,OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);

pinMode(A3, INPUT);

pinMode(A1, INPUT);

pinMode(A2, INPUT);

delay(2000);

Serial.begin(9600)

}
void front()
{
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
}

void left()
{
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
}
void right()
{
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
}


void loop() {

int value1=analogRead(A3);

int value2=analogRead(A1);

int value3=analogRead(A2);

if (value1>value2&&value1>value3) {

front();

delay(1000);



}

else if (value2>value1&&value2>value3) {

left();


delay(500);

}

else if (value3>value1&&value3>value2) {

right();

delay(500);


}

}





