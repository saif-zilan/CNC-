# CNC-Certainly! Here's the README.md file with all the information in one document:

```markdown
# CNC Machine Tool Simulator

This project implements a simulator for a cartesian machine tool using C++. Each axis is modeled as a first-order system with position and speed as state variables. The simulator runs a dynamics simulation for each axis in parallel threads and uses MQTT to communicate with the CCNC executable.

## Build Instructions

### Prerequisites
- CMake (minimum version 3.10)
- C++ compiler (supporting C++11 or later)

### Build Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/cnc-machine-simulator.git
   cd cnc-machine-simulator
   ```

2. Create a build directory and run CMake:
   ```bash
   cmake -Bbuild
   ```

3. Compile the project:
   ```bash
   cmake --build build
   ```

4. (Optional) Install the executables:
   ```bash
   cmake --build build --target install
   ```

## Usage

### Simulator

Run the simulator executable to simulate CNC machine tool dynamics. The simulation will output position information for each axis.

```bash
./build/simulate
```


### Tuning

The tuning executable is provided to tune PID parameters for each axis. Adjust the parameters in `machine.ini` for tuning.


## Contributing

Feel free to contribute by submitting issues or pull requests. Follow the [Contribution Guidelines](CONTRIBUTING.md) for more details
