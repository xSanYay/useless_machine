#include <Servo.h>                       
Servo handServo;
Servo boxServo;

int switchanimation = 0, action = 1, vot, randNumber = 0;
const int switch = 2;
const int ServoPin = 5; // servo that turns off switch,signal connection 
const int ServoBoxPin = 6; // servo that opens lid, signal connection

void setup() {
  Serial.begin(9600);
  handServo.attach(ServoPin);
  boxServo.attach(ServoBoxPin);
  handServo.write(180);   // this will be for that hand that turns off the switch
  boxServo.write(70);     // This will be the starting position for servo that opens closes box.
}

void loop() {
  switchanimation = digitalRead(switch);

  if (switchanimation == LOW) {

    // Animation 1
    if (action == 1) {
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(13);
      }
      for (int i = 180; i >= 35; i--) {
        handServo.write(i);
        delay(20);
      }
      delay(1000);
      handServo.write(26);
      delay(200);
      for (int i = 26; i <= 180; i++) {
        handServo.write(i);
        delay(20);
      }
      for (int i = 110; i >= 70; i--) {
        boxServo.write(i);
        delay(20);
      }
      action++;
    }

    // Animation 2
    else if (action == 2) {
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(550);
      handServo.write(26);
      delay(550);
      handServo.write(180);
      delay(550);
      boxServo.write(70);
      delay(1500);
      action++;
    }

    // Animation 3
    else if (action == 3) {
      Serial.println("Action 3");
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      boxServo.write(70);
      delay(2000);
      handServo.write(26);
      delay(550);
      handServo.write(180);
      delay(500);
      boxServo.write(70);
      action++;
    }

    // Animation 4
    else if (action == 4) {
      Serial.println("Action 4");
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(20);
      }
      for (int i = 180; i >= 35; i--) {
        handServo.write(i);
        delay(20);
      }
      delay(2000);
      handServo.write(26);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }

    // Animation 5
    else if (action == 5) {
      Serial.println("Action 5");
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      handServo.write(65);
      delay(550);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(200);
      handServo.write(40);
      delay(200);
      handServo.write(65);
      delay(2000);
      handServo.write(26);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }

    // Animation 6
    else if (action == 6) {
      Serial.println("Action 6");
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      for (int i = 180; i >= 35; i--) {
        handServo.write(i);
        delay(30);
      }
      handServo.write(26);
      delay(400);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }

    // Animation 7
    else if (action == 7) {
      Serial.println("Action 7");
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(400);
      handServo.write(26);
      delay(1000);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }

    // Animation 8
    else if (action == 8) {
      Serial.println("Action 8");
      for (int i = 70; i <= 110; i++) {
        boxServo.write(i);
        delay(6);
      }
      handServo.write(26);
      delay(2000);
      handServo.write(180);
      delay(1000);
      boxServo.write(70);
      action++;
    }

    // Animation 9
    else if (action == 9) {
      Serial.println("Action 9");
      for (int i = 70; i <= 105; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(2000);
      for (int i = 180; i >= 35; i--) {
        handServo.write(i);
        delay(40);
      }
      delay(500);
      handServo.write(26);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action++;
    }

    // Animation 10
    else if (action == 10) {
      Serial.println("Action 10");
      for (int i = 70; i <= 105; i++) {
        boxServo.write(i);
        delay(6);
      }
      delay(1000);
      for (int i = 0; i < 3; i++) {
        handServo.write(65);
        delay(200);
        handServo.write(40);
        delay(200);
      }
      handServo.write(26);
      delay(200);
      handServo.write(180);
      delay(400);
      boxServo.write(70);
      action = 1;
    }
  }
}
