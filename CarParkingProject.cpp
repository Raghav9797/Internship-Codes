/*#include <iostream>
#include <string>
#include <vector>

class Car
{
    private;
    std::string licensePlate;
    std::string owner;

public:
    Car(std::string lp, std::string 0)
        : licensePlate(lp), owner(o) {}

    // Setter Functions

    void LicensePlate(const std::string &newlicensePlate)
    {
        licensePlate = newlicensePlate;
    }

    void Owner(const std::string &newOwner)
    {
        owner = newOwner;
    }

    // Getter Functions

std::string getLicensePlate(), const(
    return licensePlate;
)
std::string getOwner(), const(
    return owner;

    //Display
void display() const {
        std::cout << "License Plate: " << licensePlate << std::endl;
        std::cout << "Owner: " << owner << std::endl;
    }
};

class ParkingLot
{
    std::vector<Car> parkedCars;
    int capacity;

public:
    ParkingLot(int cap)
        : capacity(cap)()

              bool parkedCar(const Car &car)
    {
        if (parkedCars.size() < capacity)
        {
            parkedCars.push_back(car);
            return true;
        }
        else
        {
            std::cout << "Parking lot is full!" << std::endl;
            return false;
        }
    }
    void displayParkedCars() const
    {
        std::cout << "Parked Cars:\n";
        for (const auto &car : parkedCars)
        {
            car.display();
        }
    }
};
int main()
{
    ParkingLot myParkingLot(3);
    Car car1("BC123", "Sanjay gore");
    Car car2("YZ457", "Janvi manse");
    // Car car3("MN423", "Aliya kapse");
    // Car car4("QR6124", "meena sharma");
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    // myParkingLot.parkCar(car3);
    // myParkingLot.parkCar(car4;
    myParkingLot.displayParkedCars();
    return 0;
}

#include <iostream>
#include <string>
#include <vector>

class Car
{
private:
    std::string licensePlate;
    std::string owner;

public:
    Car(const std::string &lp, const std::string &o)
        : licensePlate(lp), owner(o) {}

    // Setter Functions
    void setLicensePlate(const std::string &newLicensePlate)
    {
        licensePlate = newLicensePlate;
    }

    void setOwner(const std::string &newOwner)
    {
        owner = newOwner;
    }

    // Getter Functions
    std::string getLicensePlate() const
    {
        return licensePlate;
    }

    std::string getOwner() const
    {
        return owner;
    }

    // Display
    void display() const
    {
        std::cout << "License Plate: " << licensePlate << std::endl;
        std::cout << "Owner: " << owner << std::endl;
    }
};

class ParkingLot
{
private:
    std::vector<Car> parkedCars;
    int capacity;

public:
    ParkingLot(int cap) : capacity(cap) {}

    bool parkCar(const Car &car)
    {
        if (parkedCars.size() < capacity)
        {
            parkedCars.push_back(car);
            return true;
        }
        else
        {
            std::cout << "Parking lot is full!" << std::endl;
            return false;
        }
    }

    void displayParkedCars() const
    {
        std::cout << "Parked Cars:\n";
        for (const auto &car : parkedCars)
        {
            car.display();
        }
    }
};

int main()
{
    ParkingLot myParkingLot(10);

    Car car1("BC123", "Sanjay Gore");
    Car car2("YZ457", "Janvi Manse");
    Car car3("MN423", "Aliya Kapse");
    Car car4("QR6124", "Meena Sharma");

    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.parkCar(car3);
    myParkingLot.parkCar(car4); // This should display "Parking lot is full!"

    myParkingLot.displayParkedCars();

    return 0;
}
*/

#include <iostream>

#include <string>

#include <vector>

class Car
{

private:
    std::string licensePlate;

    std::string owner;

public:
    Car(std::string lp, std::string o)

        : licensePlate(lp), owner(o)
    {
    }

    std::string getLicensePlate() const
    {

        return licensePlate;
    }

    void display() const
    {

        std::cout << "License Plate: " << licensePlate << ", Owner: " << owner << std::endl;
    }
};

class ParkingLot
{

private:
    std::vector<Car> parkedCars;

    int capacity;

public:
    ParkingLot(int cap)

        : capacity(cap)
    {
    }

    bool parkCar(const Car &car)
    {

        if (parkedCars.size() < capacity)
        {

            parkedCars.push_back(car);

            return true;
        }
        else
        {

            std::cout << "Parking lot is full!" << std::endl;

            return false;
        }
    }

    void displayParkedCars() const
    {

        std::cout << "Parked Cars:\n";

        for (const auto &car : parkedCars)
        {

            car.display();
        }
    }
};

int main()
{

    ParkingLot myParkingLot(10);

    Car car1("BC123", "Sanjay gore");

    Car car2("YZ457", "Janvi manse");

    Car car3("MN423", "Aliya kapse");

    Car car4("QR6124", "meena sharma");

    myParkingLot.parkCar(car1);

    myParkingLot.parkCar(car2);

    myParkingLot.parkCar(car3);

    myParkingLot.parkCar(car4);

    myParkingLot.displayParkedCars();

    return 0;
}

/*

Car Class: Defines a car with a license plate and owner. It includes a constructor to initialize these attributes and a method to display car information.

ParkingLot Class: Manages a collection of cars using a std::vector and has a capacity limit. It provides methods to park a car and display all parked cars.

Main Function: Creates instances of Car, attempts to park them in an instance of ParkingLot, and then displays the parked cars.

*/
