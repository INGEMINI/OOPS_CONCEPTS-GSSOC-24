#include <iostream>
using namespace std;

// Abstract base class
class CAL_VOLUME
{
protected:
  float radius; // Common data member for radius of the shape

public:
  // Virtual function to input data
  void getdata(float r)
  {
    radius = r;
  }

  // Pure virtual function to compute and display volume (to be implemented in derived classes)
  virtual void display_volume() = 0;
};

// Derived class for Cone
class Cone : public CAL_VOLUME
{
private:
  float height; // Specific data member for height of the cone

public:
  // Function to input data for the cone
  void getdata(float r, float h)
  {
    CAL_VOLUME::getdata(r); // Call base class getdata
    height = h;
  }

  // Function to calculate and display the volume of the cone
  void display_volume()
  {
    const float PI = 3.14159;
    float volume = (PI * radius * radius * height) / 3;
    cout << "Volume of the Cone: " << volume << endl;
  }
};

// Derived class for Hemisphere
class Hemisphere : public CAL_VOLUME
{
public:
  // Function to calculate and display the volume of the hemisphere
  void display_volume()
  {
    const float PI = 3.14159;
    float volume = (2 * PI * radius * radius * radius) / 3;
    cout << "Volume of the Hemisphere: " << volume << endl;
  }
};

// Derived class for Cylinder
class Cylinder : public CAL_VOLUME
{
private:
  float height; // Specific data member for height of the cylinder

public:
  // Function to input data for the cylinder
  void getdata(float r, float h)
  {
    CAL_VOLUME::getdata(r); // Call base class getdata
    height = h;
  }

  // Function to calculate and display the volume of the cylinder
  void display_volume()
  {
    const float PI = 3.14159;
    float volume = PI * radius * radius * height;
    cout << "Volume of the Cylinder: " << volume << endl;
  }
};

int main()
{
  Cone cone;
  Hemisphere hemisphere;
  Cylinder cylinder;

  float radius, height;

  // Input for Cone
  cout << "Enter the radius and height of the cone: ";
  cin >> radius >> height;
  cone.getdata(radius, height);
  cone.display_volume();

  // Input for Hemisphere
  cout << "Enter the radius of the hemisphere: ";
  cin >> radius;
  hemisphere.getdata(radius);
  hemisphere.display_volume();

  // Input for Cylinder
  cout << "Enter the radius and height of the cylinder: ";
  cin >> radius >> height;
  cylinder.getdata(radius, height);
  cylinder.display_volume();

  return 0;
}
