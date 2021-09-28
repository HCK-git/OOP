#ifndef Ingridient_H
#define Ingridient_H

#define NO_NAME ""
#define NO_MEASUREMENT ""
#define NO_COUNT 0

#include <iostream>
#include <string>

class Ingridient {
public:
    Ingridient();
    Ingridient(std::string &name, std::string &measurement, int count);
    Ingridient(const Ingridient &different);

    std::string& getName();
    std::string& getMeasurement();
    int getCount() const;

    void setName(std::string name);
    void setMeasurement(std::string measurement);
    void setCount(int count);

    ~Ingridient();
    
private:
    std::string name;
    std::string measurement;
    int count;
};

#endif