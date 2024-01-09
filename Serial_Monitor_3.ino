int led = 10;
int led2 = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
//  while (Serial.available() != "led" && Serial.available()!= "led2") {
    while(Serial.available() == 0){
    Serial.println("In while loop");
    delay(300);
  }

  String str = Serial.readString();

//  if (str == "1") {
//    digitalWrite(led, HIGH);
//    delay(100);
//    digitalWrite(led, LOW);
//    delay(100);
//  } else if (str == "2") {
//    digitalWrite(led2, HIGH);
//    delay(100);
//    digitalWrite(led2, LOW);
//    delay(100);
//  } else {
//    Serial.println("Invalid input");
//  }

      while(str == "1"){
        digitalWrite(led, HIGH);
        delay(100);
        digitalWrite(led, LOW);
        delay(100);
      }
}
