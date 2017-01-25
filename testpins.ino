#define STARTPIN 10
#define ENDPIN   14
#define DELAY    1000

void setup() {
  for (int i = STARTPIN; i<ENDPIN; i++) pinMode(i,OUTPUT);
  Serial.begin(57600);
  Serial.println("testpins");
}

void loop() {
  for (int i = STARTPIN; i<ENDPIN; i++) {
    Serial.println(i);
    digitalWrite(i,HIGH);
    delay(DELAY);
    digitalWrite(i,LOW);
  }
}
