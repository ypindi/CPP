#include <iostream>
#include <vector>
using namespace std;

class BankAccount
{
    int amount;

public:
    void deposit(int value)
    {
        amount += value;
    }
};

// Association
class Customer
{
    BankAccount *account;

public:
    Customer(BankAccount *acc) : account(acc) {}
};

///////////////////////////////////////////
///////////////////////////////////////////

// Generalization or Inheritance.
// Here, even as interface.

class Vehicle
{
public:
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void drive() override {};
};

//////////////////////
//////////////////////
//////////////////////
// namespaces
namespace Simulation
{
    class Vehicle
    { /* ... */
    };
    class Traffic
    { /* ... */
    };
    class Road
    { /* ... */
    };
}

//////////////////////
//////////////////////
//////////////////////

// Aggregation - one can exist without other.
class Player
{
};

class Team
{
    vector<Player *> players;

public:
    void addPlayer(Player *player)
    {
        players.push_back(player);
    }
};

//////////////////////
//////////////////////
//////////////////////

// Composition - one can't exist without other.

class Room
{
};

class House
{
    vector<Room> rooms;

public:
    House(int numRooms)
    {
        for (int i = 0; i < numRooms; i++)
        {
            rooms.emplace_back();
        }
    }
};

//////////////////////
//////////////////////
//////////////////////

// Dependency

class File
{
};

class Logger
{
    File *logfile;

public:
    Logger(File *file) : logfile(file) {}
};

//////////////////////
//////////////////////
//////////////////////

// Flow
// Example: In a factory automation program,
// data flows between ConveyorBelt and RobotArm.

class ConveyorBelt
{
public:
    std::string getItem();
};

class RobotArm
{
public:
    void pickUp(std::string item);
};

ConveyorBelt belt;
RobotArm arm;
arm.pickUp(belt.getItem()); // Flow of data
