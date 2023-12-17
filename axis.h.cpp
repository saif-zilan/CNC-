#ifndef AXIC_H
#define AXIC_H

#include <mutex>

class Axis {
public:
    Axis(double initialPosition = 0.0, double initialSpeed = 0.0, double dampingCoefficient = 0.1, double movableMass = 1.0);
    ~Axis();

    void setForce(double force);
    double getPosition() const;
    double getSpeed() const;

    void forwardIntegrate(double deltaTime);

private:
    double position;
    double speed;
    double force;
    double dampingCoefficient;
    double movableMass;

    std::mutex mutex; // To synchronize access to axis state
};

#endif // AXIC_H
