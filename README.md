
---

# 📌 **2. Car Service Manager — README.md**

```markdown
# Car Service Manager
A C++ command‑line application for managing car repair history, categories, and service records.  
Designed for real-world use in small workshops.

## 🚗 Features
- Add new cars
- Record repairs by category:
  - Engine
  - Chassis
  - Body
  - Electronics
- Persistent file storage
- Clean and simple CLI interface

## 🛠 Technologies Used
- C++
- OOP
- File I/O

## 📂 Project Structure
- `main.cpp` — program entry point
- `Car.h / Car.cpp` — car object
- `ServiceManager.h / .cpp` — logic for storing and managing repairs
- `data.txt` — persistent storage

## ▶️ How to Run
```bash
git clone https://github.com/Martun1/Car-Service-Manager
g++ main.cpp Car.cpp ServiceManager.cpp -o car_manager
./car_manager

🎯 Purpose
Built to combine programming with real automotive workflow knowledge.

🔮 Future Improvements
JSON storage

Search filters

GUI version

📄 License
MIT License
