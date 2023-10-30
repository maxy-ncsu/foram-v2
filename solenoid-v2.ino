// Arduino code for pressure box

int SOLENOID_1 = 13;
int SOLENOID_2 = 12;
int SOLENOID_3 = 11;
int SOLENOID_4 = 10;
int data;
int sol_arr[5] = {0, 0, 0, 0, 0};

void setup() {
  Serial.begin(9600);
  pinMode(SOLENOID_1, OUTPUT);
  pinMode(SOLENOID_2, OUTPUT);
  pinMode(SOLENOID_3, OUTPUT);
  pinMode(SOLENOID_4, OUTPUT);
  digitalWrite(SOLENOID_1, LOW);
  digitalWrite(SOLENOID_2, LOW);
  digitalWrite(SOLENOID_3, LOW);
  digitalWrite(SOLENOID_4, LOW);
}

void loop() {
  data = Serial.read();

  switch (data) {
    case '1':
      if (sol_arr[1]) {
        digitalWrite(SOLENOID_1, LOW);
      }
      else {
        digitalWrite(SOLENOID_1, HIGH);
      }

      sol_arr[1] = !sol_arr[1];
      break;
    case '2':
      if (sol_arr[2]) {
        digitalWrite(SOLENOID_2, LOW);
      }
      else {
        digitalWrite(SOLENOID_2, HIGH);
      }

      sol_arr[2] = !sol_arr[2];
      break;
    case '3':
      if (sol_arr[3]) {
        digitalWrite(SOLENOID_3, LOW);
      }
      else {
        digitalWrite(SOLENOID_3, HIGH);
      }

      sol_arr[3] = !sol_arr[3];
      break;
    case '4':
      if (sol_arr[4]) {
        digitalWrite(SOLENOID_4, LOW);
      }
      else {
        digitalWrite(SOLENOID_4, HIGH);
      }

      sol_arr[4] = !sol_arr[4];
      break;

    case '0':
      digitalWrite(SOLENOID_1, LOW);
      digitalWrite(SOLENOID_2, LOW);
      digitalWrite(SOLENOID_3, LOW);
      digitalWrite(SOLENOID_4, LOW);
      break;
  }
}
