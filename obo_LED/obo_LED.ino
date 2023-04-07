const int led[3] = { 6, 9, 10 };
const int button = 7;
int cnt = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 3; i++) {
    pinMode(led[i], OUTPUT);
  }
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(button);
  if (cnt == 4){
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    cnt = 0;
  }
  if (cnt == 3) {
    if (buttonState == HIGH) {
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      cnt++;
    }
  }
  if (cnt == 2 && buttonState == HIGH) {
    //digitalWrite(led[cnt - 1], LOW);
    digitalWrite(led[cnt], HIGH);
    delay(350);
    cnt++;
  }
  if (cnt == 1 && buttonState == HIGH) {
    //digitalWrite(led[cnt - 1], LOW);
    digitalWrite(led[cnt], HIGH);
    delay(350);
    cnt++;
  }
  if (cnt == 0 && buttonState == HIGH) {
    //digitalWrite(led[cnt + 2], LOW);
    digitalWrite(led[cnt], HIGH);
    delay(350);
    cnt++;
  }
}
