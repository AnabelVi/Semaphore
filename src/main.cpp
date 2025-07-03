const int button = PIN5;

void setup()
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(button, OUTPUT);

    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);

}

void loop()
{
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(SECONDS(10));
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(SECONDS(2));
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(SECONDS(10));
}
