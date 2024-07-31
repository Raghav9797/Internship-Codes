#include <iostream>
#include <string>
#include <map>

class Booking
{
private:
    std::map<std::string, double> bookings;
    double twoWheelerRate;
    double threeWheelerRate;
    double fourWheelerRate;

public:
    Booking() : twoWheelerRate(30.0), threeWheelerRate(40.0), fourWheelerRate(50.0) {}

    // Setter functions
    void setTwoWheelerRate(double rate)
    {
        twoWheelerRate = rate;
    }

    void setThreeWheelerRate(double rate)
    {
        threeWheelerRate = rate;
    }

    void setFourWheelerRate(double rate)
    {
        fourWheelerRate = rate;
    }

    // Getter functions
    double getTwoWheelerRate() const
    {
        return twoWheelerRate;
    }

    double getThreeWheelerRate() const
    {
        return threeWheelerRate;
    }

    double getFourWheelerRate() const
    {
        return fourWheelerRate;
    }

    int main()
    {
        return 0;
    }
