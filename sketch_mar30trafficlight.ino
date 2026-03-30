#define RED_LED 10
#define YELLOW_LED 9
#define GREEN_LED 8

int TIMER = 0;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
 
  if (TIMER <= 50) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
  } 
  else if (TIMER > 50 && TIMER <= 60) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } 
  else if (TIMER > 60 && TIMER <= 120) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  delay(1000); 
  TIMER++;     

  if (TIMER > 120) {
    TIMER = 0; 
  }
}