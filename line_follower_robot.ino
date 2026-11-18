// ==========================================
// SMART LINE FOLLOWER ROBOT USING ARDUINO
// ==========================================
// Motor Pins
#define ENA 6
#define ENB 5
#define IN1 11
#define IN2 10
#define IN3 9
#define IN4 8
// IR Sensor Pins
#define LEFT_SENSOR 3
#define RIGHT_SENSOR 2
// Speed settings
int baseSpeed = 90;
int turnSpeed = 150;
void setup() {
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(LEFT_SENSOR, INPUT);
pinMode(RIGHT_SENSOR, INPUT);
Serial.begin(9600);
}
void loop() {
int left = digitalRead(LEFT_SENSOR);
intright = digitalRead(RIGHT_SENSOR);
Serial.print("L: ");
Serial.print(left);
Serial.print(" R: ");
Serial.println(right);
// Forward (both sensors on white surface)
if (left == 0 && right == 0) {
forward();
}
// Left sensor detects line -> turn right
else if (left == 1 && right == 0) {
rightTurn();
}
// Right sensor detects line -> turn left
else if (left == 0 && right == 1) {
leftTurn();
}
// Both sensors detect line -> stop
else {
stopMotors();
}
}
// MOTOR FUNCTIONS
// Forward movement
void forward() {
analogWrite(ENA, baseSpeed);
analogWrite(ENB, baseSpeed);
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}
// Turn Right (only right motor runs) void
rightTurn() {
// Left motor OFF
analogWrite(ENA, 0);
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
// Right motor ON
analogWrite(ENB, turnSpeed);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}
// Turn Left (only left motor runs)
void leftTurn() {
// Left motor ON
analogWrite(ENA, turnSpeed);
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
// Right motor OFF
analogWrite(ENB, 0);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}
// Stop motors
void stopMotors() {
analogWrite(ENA, 0);
analogWrite(ENB, 0);
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}