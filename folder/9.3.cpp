#include <iostream>
using namespace std;

class rupee; // Forward declaration

class pais
{
private:
    int paisa;

public:
    pais(int p = 0) : paisa(p) {}

    operator rupee(); // Conversion operator declaration

    void disp()
    {
        cout << "Paisa: " << paisa << endl;
    }
};

class rupee
{
private:
    int rupees;

public:
    rupee(int r = 0) : rupees(r) {}

    operator pais(); // Conversion operator declaration

    void disp()
    {
        cout << "Rupees: " << rupees << endl;
    }
};

// Conversion operator definition for pais to rupee
pais::operator rupee()
{
    return rupee(paisa / 100);
}

// Conversion operator definition for rupee to paisa
rupee::operator pais()
{
    return pais(rupees * 100);
}

int main()
{
    rupee r(100); // Create rupee object with 100 rupees
    pais p = r;   // Convert rupee to paisa

    r.disp(); // Display rupees
    p.disp(); // Display paisa

    pais q(500); // Create pais object with 500 paisa
    rupee s = q; // Convert paisa to rupee

    q.disp(); // Display paisa
    s.disp(); // Display rupees

    return 0;
}
