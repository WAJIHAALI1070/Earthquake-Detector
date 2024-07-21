# Earthquake Detector
Dive into the next frontier of seismic monitoring with our innovative project. We've seamlessly integrated the NodeMCU microcontroller, fortified with a precision vibration sensor, with the robust capabilities of the Blynk IoT Cloud. This synergy offers a real-time window into ground vibrations, transmitted instantly over Wi-Fi. Explore our system's intuitive user interfaces, designed for web platforms, that provide immediate access to critical seismic data. Additionally, customizable alert thresholds ensure timely notifications, amplifying community readiness and response.
## Problem Statement
In regions vulnerable to seismic activities, there exists a pressing need for a real-time earthquake detection and alert system that seamlessly integrates hardware, cloud computing, and user-friendly interfaces. It lies in creating an energy-efficient, scalable, and easily accessible solution that not only detects ground vibrations in real-time but also provides timely notifications to stakeholders, ensuring enhanced disaster preparedness and fostering community resilience.
## Solution
## At a Glance
### Challenges
- Hardware Integration
- Cloud Scalability
- Data Transmission Delays
- User Interface Design
### Benefits
- Enhanced Disaster Preparedness
- User Accessibility
- Real-time Monitoring
- Customizable Alerts
## Hardware and Setup
Initialization involves setting up libraries, Blynk authentication, and WiFi credentials. Pins are allocated for the LED indicator (D0), SW420 sensor (D2), and an additional LED (D13). In the setup function, pins are configured, serial communication is initiated, and a Blynk connection is established. A timer calls the readSW420 function every second, sending sensor data to Blynk.
## Main Loop
The main loop maintains Blynk server communication and executes scheduled tasks. Using pulseIn, the vibration duration from the SW420 sensor on D2 is measured, with durations above 350 microseconds triggering the LED on D13. Vibration data is continuously visualized on Blynk app's virtual pins (V1 for sensor readings and V3 for analyzed values). Remote LED control through Blynk is also facilitated via virtual pin V0.
## Analysis
Integration & Precision: Using pulseIn, the vibration duration from the SW420 sensor on D2 is measured, with durations above 350 microseconds triggering the LED on D13.
User Accessibility & Alerts: Leveraging the Blynk IoT Cloud, the system offers a user-friendly interface for remote monitoring. Alert thresholds and LED indicators provide immediate visual cues, enhancing responsiveness to seismic events.
Sustainability & Impact: Designed with energy efficiency in mind, the system promises long-term, autonomous operation. Its potential for early warning and community resilience underscores its significance in proactive disaster management.
## Contributors
For questions or feedback, please contact:

- Wajiha Ali: [wali.bee21seecs@seecs.edu.pk](mailto:wali.bee21seecs@seecs.edu.pk)
- Muhammad Huzaifa: [mhuzaifa.bee21seecs@seecs.edu.pk](mailto:mhuzaifa.bee21seecs@seecs.edu.pk)

Feel free to reach out to us with any inquiries related to this project.

