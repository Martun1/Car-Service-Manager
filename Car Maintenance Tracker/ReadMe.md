# Car Service Manager (C++ CLI)

A simple CLI application to manage car maintenance and repair history.

## Features
- Add new cars (brand and model)
- Add repairs for each car:
    - Section (Engine, Chassis, Body, Electronics)
    - Type of repair (Oil, Filters, Belts, SparkPlugs, etc.)
    - Date of repair
    - Mileage
- Show repair history for each car
- Data is saved in `car_service.txt` and loaded automatically

## Usage
```bash
g++ car_service_manager.cpp -o car_service_manager
./car_service_manager
