int led = 8;

void setup() {
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop() {
    int x = analogRead(A0);
    Serial.println(x);

    delay(5);

    if (x < 750) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}