#define vermelho 10
#define verde 9
#define azul 6

void setup() {
  // put your setup code here, to run once:
  pinMode(azul,INPUT);
  pinMode(verde,INPUT);
  pinMode(vermelho,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(azul,90);
  analogWrite(verde,255);
  analogWrite(vermelho,90);
}
