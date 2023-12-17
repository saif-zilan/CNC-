#include "axis.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    // Create three Axis objects for X, Y, and Z axes
    Axis xAxis, yAxis, zAxis;

    // Example CNC logic: set forces and simulate motion
    for (int i = 0; i < 10; ++i) {
        // Set forces for each axis (replace with your actual CNC logic)
        xAxis.setForce(1.0);
        yAxis.setForce(0.8);
        zAxis.setForce(0.5);

        // Simulate motion for each axis
        xAxis.forwardIntegrate(0.1);  // Delta time = 0.1 seconds
        yAxis.forwardIntegrate(0.1);
        zAxis.forwardIntegrate(0.1);

        // Display current positions (replace with your actual CNC logic)
        std::cout << "X Position: " << xAxis.getPosition() << ", ";
        std::cout << "Y Position: " << yAxis.getPosition() << ", ";
        std::cout << "Z Position: " << zAxis.getPosition() << std::endl;

        // Pause for visualization (replace with your actual CNC logic)
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}
