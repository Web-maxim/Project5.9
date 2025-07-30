// Snack.h
#ifndef SNACK_H
#define SNACK_H

#include <string>

class Snack {
protected:
    std::string name;

public:
    explicit Snack(const std::string& name);
    virtual ~Snack();

    std::string getName() const;
    void setName(const std::string& newName); 
};

#endif