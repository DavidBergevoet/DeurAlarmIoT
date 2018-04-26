
#define TRIGGER LOW
byte PIN = 4;
byte INTERRUPT = 2;
byte z = LOW;
byte n = LOW;
uint32_t trig;
byte s=0;

volatile bool stop;

void setup() {
  pinMode (PIN, INPUT);
  
  Serial.begin (9600);
  attachInterrupt(digitalPinToInterrupt(INTERRUPT), stopInterrupt, RISING);
  trig = millis();
  pinMode(3, OUTPUT);
}

void loop() {
  
  n = digitalRead(PIN);
  if (n == TRIGGER && z == TRIGGER 
     && millis() - trig > 7000){
    sing(s);
    ++s;
    s %= 3;
  } else if (n == TRIGGER && z != TRIGGER){
    z = LOW;
    trig = millis();
  } else if (n != TRIGGER){
    z = !TRIGGER;
    analogWrite(13,0);
  }
}

void stopInterrupt(){
  stop = true;
}

