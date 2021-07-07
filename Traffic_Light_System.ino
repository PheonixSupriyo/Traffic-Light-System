// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(15000); // Wait for 15000 milliseconds
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(15000); // Wait for 15000 milliseconds
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(15000); // Wait for 15000 milliseconds
  digitalWrite(4, LOW);
}
