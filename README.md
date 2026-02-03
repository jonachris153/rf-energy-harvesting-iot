# RF Energy Harvesting IoT Sensor Node

This repository presents a **low-power, energy-autonomous IoT sensor node**
designed using RF energy harvesting principles.

The focus of this work is on **energy-aware embedded system design**
and autonomous operation under intermittent power availability.

## System Overview
- Ambient RF energy harvesting
- Power management using TI BQ25570
- ESP32-based low-power firmware
- Environmental and motion sensing

## Operating Principle
1. RF energy is harvested and rectified
2. Energy is stored and regulated by the BQ25570
3. ESP32 wakes periodically from deep sleep
4. Sensor data is collected
5. Device returns to deep sleep

## Repository Structure
rf-energy-harvesting-iot/
├── firmware/ # Low-power ESP32 firmware
└── README.md

## Tools & Technologies
- ESP32
- Embedded C/C++
- TI BQ25570 PMIC
- Low-power system design

## Research Relevance
This project demonstrates concepts relevant to:
- Energy-neutral IoT systems
- Sustainable embedded devices
- Long-term autonomous sensing


