# RF Energy Harvesting IoT Sensor Node

This repository presents a **low-power, energy-autonomous IoT sensor node**
designed using **RF energy harvesting principles**.

The project focuses on **energy-aware embedded system design** and
autonomous operation under **intermittent power availability**.

## Project Objective

To design and implement an IoT sensor node capable of operating
without a conventional power supply by harvesting ambient RF energy,
making it suitable for long-term, maintenance-free deployments.

## System Overview

The system consists of:

- **Energy Harvesting Subsystem**
  - Ambient RF energy collection
  - Energy storage and regulation

- **Power Management Subsystem**
  - TI BQ25570 energy harvesting PMIC
  - Efficient power conditioning and storage control

- **Embedded Sensing & Control**
  - ESP32 microcontroller
  - Duty-cycled sensing and deep-sleep operation

## Operating Principle

1. Ambient RF energy is harvested
2. Harvested energy is regulated and stored
3. ESP32 wakes from deep sleep when energy is available
4. Sensor data is acquired
5. System returns to deep sleep to conserve energy

This **harvest → wake → sense → sleep** cycle enables
energy-neutral operation.

## Hardware Components

- ESP32 Microcontroller
- RF Energy Harvester
- TI BQ25570 Power Management IC
- Energy Storage Element (Supercapacitor / Rechargeable battery)
- Environmental / Motion Sensors
- Supporting passive components

## Software Stack

- **Programming Language:** Embedded C/C++
- **Development Environment:** Arduino IDE
- **ESP32 Board Package:** Espressif Systems
- **Power Strategy:** Deep sleep and duty cycling

## Repository Structure
rf-energy-harvesting-iot/
├── docs/ # System architecture diagrams
├── firmware/ # Low-power ESP32 firmware
└── README.md

## Project Status

✔ Low-power firmware implemented  
✔ Deep-sleep and duty-cycle strategy validated  
✔ Energy-autonomous operation demonstrated  
🔄 Long-term field testing planned

## Research Relevance

This project demonstrates concepts relevant to:

- Energy-harvesting embedded systems
- Sustainable IoT devices
- Ultra-low-power firmware design
- Autonomous sensor networks




