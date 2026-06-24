# 🚗 Car Service Manager

A C++ command-line application for managing car service history, repairs, and categories.  
Designed with real workshop logic in mind — practical, simple, and fast.

---

## 🔧 Features

- Add new cars to the system  
- Record repairs by category:
  - 🛠 Engine  
  - 🚙 Chassis  
  - 🧰 Body  
  - ⚡ Electronics  
- Persistent file storage  
- Clean and intuitive CLI interface  
- Modular structure for easy expansion  

---

## 🛠 Technologies Used

- C++  
- OOP  
- File I/O  

---

## 📁 Project Structure

| File | Description |
|------|-------------|
| `main.cpp` | Program entry point |
| `Car.h / Car.cpp` | Car object and logic |
| `ServiceManager.h / .cpp` | Repair management system |
| `data.txt` | Persistent storage |

---

## ▶️ How to Run

```bash
git clone https://github.com/Martun1/Car-Service-Manager
cd Car-Service-Manager
g++ main.cpp Car.cpp ServiceManager.cpp -o car_manager
./car_manager
