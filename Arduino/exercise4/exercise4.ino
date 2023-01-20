void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);  // 9
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1500);
  digitalWrite(13, LOW); //8
  delay(1500);
  digitalWrite(13, HIGH);  //7
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  delay(1500);
  digitalWrite(13, LOW);   //6
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH);
  delay(1500);
  digitalWrite(13, HIGH);  // 5
  delay(1500);
  digitalWrite(12, HIGH);  //4
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(1500);
  digitalWrite(12, LOW);  // 3
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(1500);
  digitalWrite(13, LOW); // 2
  digitalWrite(11, HIGH);
  delay(1500);
  digitalWrite(13, HIGH);  // 1
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  delay(1500);
  digitalWrite(13, LOW); // 0
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1500);
}
