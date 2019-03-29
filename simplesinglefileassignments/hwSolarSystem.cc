#include <iostream>
#include <vector>

class Body {
....
};

class SolarSystem {
private:
  vector<Body> bodies;
};

int main() {
  SolarSystem s("solarsystem.dat");
  cout << s; // print out each body with name, mass, etc...
  }
  