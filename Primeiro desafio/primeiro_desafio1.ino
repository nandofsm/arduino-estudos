// C++ code
//
int temperatura = 0;

int RED = 6;
int GREEN = 3;
int BLUE = 5;
int BUZZ = 4;
int MOTOR = 2;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(MOTOR, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BUZZ, OUTPUT);
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  if (temperatura >= 50) {
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    digitalWrite(BUZZ, HIGH);
  } else if (temperatura >= 30) {
    digitalWrite(RED, LOW);
    digitalWrite(BUZZ, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);
  }
  
  if (temperatura >= 30) {
    digitalWrite(MOTOR, HIGH);
  }

  if (temperatura < 30) {
    digitalWrite(RED, LOW);
    digitalWrite(MOTOR, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(BUZZ, LOW);
    digitalWrite(GREEN, HIGH);
  }
  delay(100);
}