#include <iostream>
#include <string>

class Fruit
{
public:
    virtual std::string getTaste() const
    {
        return "Generic fruit taste";
    }
};

class Apple : public Fruit
{
public:
    std::string getTaste() const override
    {
        return "Sweet";
    }
};

class Banana : public Fruit
{
public:
    std::string getTaste() const override
    {
        return "Creamy";
    }
};

class Orange : public Fruit
{
public:
    std::string getTaste() const override
    {
        return "Tangy";
    }
};

class Grape : public Fruit
{
public:
    std::string getTaste() const override
    {
        return "Juicy";
    }
};

class Pineapple : public Fruit
{
public:
    std::string getTaste() const override
    {
        return "Sweet and Sour";
    }
};

int main()
{

    int choice;
    std::cin >> choice;

    Fruit *selectedFruit;

    switch (choice)
    {
    case 1:
        selectedFruit = new Apple();
        break;
    case 2:
        selectedFruit = new Banana();
        break;
    case 3:
        selectedFruit = new Orange();
        break;
    case 4:
        selectedFruit = new Grape();
        break;
    case 5:
        selectedFruit = new Pineapple();
        break;
    default:
        std::cout << "Invalid choice, defaulting to generic fruit." << std::endl;
        selectedFruit = new Fruit();
        break;
    }

    std::cout << "The taste of the fruit is: " << selectedFruit->getTaste() << std::endl;

    // Clean up dynamically allocated memory
    delete selectedFruit;

    return 0;
}
