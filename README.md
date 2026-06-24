# 🔒 Bluetooth Attack Simulator

A safe, educational C++ simulation that demonstrates how Bluetooth attacks work — **without interacting with real devices**.  
Built for learning, experimenting, and understanding wireless security concepts in a controlled environment.

---

## 🚀 Features

- Simulation of common Bluetooth attack vectors:
  - 🔹 Weak pairing exploitation  
  - 🔹 Device spoofing  
  - 🔹 Unauthorized connection attempts  
- Defensive countermeasures included  
- Fully offline and safe to use  
- Clear and intuitive console interface  
- Modular design — easy to extend with new attack types  

---

## 🧠 Technologies Used

- **C++** — core programming language  
- **Simulation logic** — for attack/defense modeling  
- **Basic security concepts** — for educational understanding  

---

## 📁 Project Structure

| File / Folder | Description |
|----------------|-------------|
| `main.cpp` | Core simulation logic |
| `attacks/` | Simulated attack modules |
| `defense/` | Defensive response logic |
| `README.md` | Project documentation |

---

## ⚙️ How to Run

```bash
# Clone the repository
git clone https://github.com/Martun1/bluetooth-attack-simulator

# Navigate to project directory
cd bluetooth-attack-simulator

# Compile the program
g++ main.cpp -o bluetooth_sim

# Run the simulation
./bluetooth_sim
