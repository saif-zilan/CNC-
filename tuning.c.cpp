#include "axis.h"
#include <iostream>

int main() {
    // Create an Axis object for tuning (replace with your specific axis)
    Axis tuningAxis;

    // Example tuning logic: apply a step change in force and observe response
    tuningAxis.setForce(1.0);  // Initial force

    for (int i = 0; i < 10; ++i) {
        // Simulate response for a short duration
        tuningAxis.forwardIntegrate(0.1);  // Delta time = 0.1 seconds

        // Display current position during tuning
        std::cout << "Tuning Axis Position: " << tuningAxis.getPosition() << std::endl;
    }

    return 0;
}
