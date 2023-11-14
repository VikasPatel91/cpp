#include <iostream>
using namespace std;
class Color
{
public:
    virtual void paint() = 0;
};
class RedPaint : public Color
{
public:
    void paint() override
    {
        cout << "I'm Painting with Red color." << endl;
    }
};
class BluePaint : public Color
{
public:
    void paint() override
    {
        cout << "I'm Painting with Blue color." << endl;
    }
};
int main()
{
    char choice;
    std::cin >> choice;
    Color *paintObject = nullptr;
    if (choice == 'R' || choice == 'r')
    {
        paintObject = new RedPaint();
    }
    else if (choice == 'B' || choice == 'b')
    {
        paintObject = new BluePaint();
    }
    else
    {
        std::cout << "Invalid choice!" << std::endl;
        return 1; // Terminate the program
    }
    paintObject->paint();
    delete paintObject;

    return 0;
}
