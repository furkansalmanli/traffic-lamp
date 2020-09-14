int led1=3;
int led2=4;
int led3=5;
  void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  }

  // the loop function runs over and over again forever
  void loop() {
    digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(3000);                       // wait for a second
    digitalWrite(led3, HIGH);    // turn the LED off by making the voltage LOW
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1, HIGH);    // turn the LED off by making the voltage LOW
    delay(2000); 
    digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  }

