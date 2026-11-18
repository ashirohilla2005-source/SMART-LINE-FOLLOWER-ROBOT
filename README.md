🤖 Smart Line Follower Robot Using Arduino

<p align="center">
  <img src="https://img.shields.io/badge/Project-Robotics-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Microcontroller-Arduino%20Uno-00979D?style=for-the-badge&logo=arduino&logoColor=white">
  <img src="https://img.shields.io/badge/Programming-C%2B%2B-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Domain-Embedded%20Systems-green?style=for-the-badge">
</p><p align="center">
  <b>An autonomous robotic system that detects and follows a predefined path using infrared sensors, Arduino-based decision-making, and motor control.</b>
</p>---

📌 Project Overview

The Smart Line Follower Robot Using Arduino is an autonomous mobile robot designed to follow a predefined path without human intervention.

The robot uses Infrared (IR) sensors to detect the contrast between a black line and a white surface. Sensor signals are processed by an Arduino Uno, which controls the movement and direction of two DC gear motors through an L298N motor driver.

By continuously sensing the path and adjusting motor movement, the robot can navigate along a track through real-time sensor-based decision-making.

This project demonstrates the practical implementation of robotics, embedded systems, sensor interfacing, motor control, automation, and hardware-software integration.

---

✨ Key Highlights

<table>
<tr>
<td align="center">🤖<br><b>Autonomous Navigation</b><br>Operates without manual control</td>
<td align="center">🔍<br><b>IR-Based Detection</b><br>Detects black and white surfaces</td>
</tr>
<tr>
<td align="center">🧠<br><b>Embedded Intelligence</b><br>Arduino-based decision making</td>
<td align="center">⚙️<br><b>Motor Control</b><br>Independent control of two motors</td>
</tr>
<tr>
<td align="center">⚡<br><b>PWM Speed Control</b><br>Adjustable motor speed</td>
<td align="center">🔄<br><b>Real-Time Feedback</b><br>Continuous path correction</td>
</tr>
</table>---

🎯 Objectives

- Design and develop an autonomous line-following robotic system.
- Implement IR sensor-based path detection.
- Process sensor inputs using Arduino Uno.
- Control DC motors through an L298N motor driver.
- Implement decision-making logic for forward movement, left turns, right turns, and stopping.
- Understand practical concepts of embedded systems, robotics, automation, and hardware integration.

---

🧰 Hardware Components

Component| Quantity| Purpose
Arduino Uno| 1| Main controller and decision-making unit
L298N Motor Driver Module| 1| Controls motor direction and speed
DC Gear Motors| 2| Robot locomotion
IR Sensor Modules| 2| Line and surface detection
Wheels| 2| Movement
Castor Wheel| 1| Stability and support
7.4V Lithium Battery| 1| Power supply
Breadboard| 1| Circuit prototyping
Jumper Wires| As required| Electrical connections
Chassis/Base Platform| 1| Component mounting
Power Switch| 1| Power control

---

🏗️ System Architecture

flowchart TD
    A[IR Sensors] --> B[Arduino Uno]
    B --> C[L298N Motor Driver]
    C --> D[Left DC Motor]
    C --> E[Right DC Motor]
    F[7.4V Battery] --> C
    F --> B

System Workflow

1. IR sensors detect the surface beneath the robot.
2. Sensor signals are transmitted to the Arduino Uno.
3. Arduino processes the sensor inputs.
4. Decision-making logic determines the required movement.
5. The L298N motor driver controls the motors.
6. The robot continuously adjusts its movement to follow the line.

---

⚙️ Working Principle

The robot operates using the infrared reflectance principle.

- White surface: Reflects more infrared light.
- Black line: Absorbs more infrared light.

The IR sensors detect this difference and provide digital signals to the Arduino.

The Arduino continuously reads both sensor values and determines the robot's movement.

🚦 Movement Logic

Left Sensor| Right Sensor| Robot Action
0| 0| ⬆️ Move Forward
1| 0| ➡️ Turn Right
0| 1| ⬅️ Turn Left
1| 1| ⏹️ Stop

«Sensor logic used in this project: "0 = White Surface" and "1 = Black Line".»

---

🔌 Pin Configuration

Motor Driver – L298N

Pin| Arduino Pin| Function
ENA| 6| Left motor speed control (PWM)
ENB| 5| Right motor speed control (PWM)
IN1| 11| Left motor direction
IN2| 10| Left motor direction
IN3| 9| Right motor direction
IN4| 8| Right motor direction

IR Sensors

Sensor| Arduino Pin
Left IR Sensor| 3
Right IR Sensor| 2

---

💻 Software & Technologies

Technology| Application
Arduino IDE| Program development and uploading
C/C++| Embedded programming
Arduino Uno| Microcontroller platform
PWM| Motor speed control
Digital I/O| Sensor interfacing
Serial Monitor| Debugging and sensor monitoring

---

🧠 Control Logic

The control algorithm continuously executes the following process:

START
  │
  ▼
Read Left & Right IR Sensors
  │
  ▼
Analyze Sensor Values
  │
  ├── 0, 0 ──────► Move Forward
  │
  ├── 1, 0 ──────► Turn Right
  │
  ├── 0, 1 ──────► Turn Left
  │
  └── 1, 1 ──────► Stop
  │
  ▼
Repeat Continuously

The system uses a continuous feedback loop in which sensor readings determine the robot's motion, allowing it to correct its path in real time.

---

🚀 Features

- Autonomous line-following operation
- Real-time IR sensor feedback
- Arduino-based decision-making
- Independent left and right motor control
- PWM motor speed adjustment
- Differential-drive mechanism
- Serial Monitor debugging
- Simple and cost-effective hardware design
- Modular and upgradeable architecture

---

🏭 Applications

- Industrial automation
- Automated Guided Vehicles (AGVs)
- Warehouse material transportation
- Smart delivery systems
- Robotics education and research
- Automated manufacturing environments
- Embedded systems experimentation

---

🔮 Future Scope

The system can be upgraded with several advanced features:

Enhancement| Potential Benefit
PID Control| Improved tracking accuracy and smoother movement
Ultrasonic Sensor| Obstacle detection and collision avoidance
Bluetooth Module| Wireless control and monitoring
Wi-Fi / IoT| Remote monitoring and data connectivity
Camera-Based Detection| Advanced path recognition
Additional IR Sensors| Improved navigation on complex tracks
AI-Based Navigation| Intelligent decision-making
AGV Integration| Industrial material transportation

---

📚 Learning Outcomes

Through this project, practical knowledge was gained in:

- Embedded system design
- Arduino programming
- Infrared sensor interfacing
- Motor driver integration
- PWM-based speed control
- Robotics and automation
- Digital electronics
- Hardware troubleshooting
- Circuit implementation
- Real-time decision-making

---

👥 Project Team

Team Member| Roll Number
Ashi| 252301013
Simran| 252301071

Department: Electronics and Communication Engineering
Institution: University Institute of Engineering and Technology (UIET), Kurukshetra University, Kurukshetra

Project Guide: Mr. Krishan Gopal, Assistant Professor

---

📂 Repository Structure

Smart-Line-Follower-Robot/
│
├── README.md
├── Arduino_Code/
│   └── line_follower_robot.ino
│
├── Circuit_Diagram/
│   └── circuit_diagram.png
│
├── Block_Diagram/
│   └── block_diagram.png
│
├── Project_Report/
│   └── project_report.pdf
│
└── Images/
    ├── robot_front.jpg
    ├── robot_top.jpg
    └── robot_testing.jpg

---

📖 Project Documentation

The complete project report includes:

- Introduction and objectives
- Component selection and technical justification
- Circuit diagram
- System block diagram
- Working principle
- Arduino programming
- Applications and advantages
- Future scope
- Conclusion and references

---

🏁 Conclusion

The Smart Line Follower Robot Using Arduino successfully demonstrates the integration of sensing, embedded processing, and motor control to create an autonomous robotic system.

By combining IR sensors, Arduino Uno, an L298N motor driver, and DC gear motors, the robot can detect a predefined path and automatically adjust its movement.

The project provides a practical foundation for understanding robotics and embedded systems while serving as a platform for future development involving PID control, obstacle avoidance, wireless communication, IoT, and intelligent navigation.

---

<p align="center">
  <b>🚀 Learn • Build • Innovate</b>
  <br>
  <i>Exploring robotics through practical engineering.</i>
</p>
