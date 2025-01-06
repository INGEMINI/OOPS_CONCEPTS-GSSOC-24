#include <iostream>
using namespace std;

// Base class Publication
class Publication
{
protected:
  string title;

public:
  // Constructor to initialize the title
  Publication(string t) : title(t) {}

  // Member function to display title
  virtual void showInfo() const
  {
    cout << "Title: " << title << endl;
  }
};

// Derived class Book
class Book : virtual public Publication
{
protected:
  int accessionNumber;

public:
  // Constructor to initialize title and accession number
  Book(string t, int accessionNo) : Publication(t), accessionNumber(accessionNo) {}

  // Override showInfo() function to include book information
  void showInfo() const override
  {
    cout << "Accession Number: " << accessionNumber << endl;
  }
};

// Derived class Magazine
class Magazine : virtual public Publication
{
protected:
  int volumeNumber;

public:
  // Constructor to initialize title and volume number
  Magazine(string t, int volNo) : Publication(t), volumeNumber(volNo) {}

  // Override showInfo() function to include magazine information
  void showInfo() const override
  {
    cout << "Volume Number: " << volumeNumber << endl;
  }
};

// Derived class Journal (Inheriting from both Book and Magazine)
class Journal : public Book, public Magazine
{
public:
  // Constructor to initialize title, accession number, and volume number
  Journal(string t, int accessionNo, int volNo)
      : Publication(t), Book(t, accessionNo), Magazine(t, volNo) {}

  // Override showInfo() function to include both Book and Magazine information
  void showInfo() const override
  {
    Publication::showInfo(); // Call base class showInfo only once
    Book::showInfo();        // Call Book's showInfo
    Magazine::showInfo();    // Call Magazine's showInfo
  }
};

int main()
{
  // Create an object of Journal with title "Science Journal", accession number 600, and volume number 50
  Journal journal("Science Journal", 600, 50);

  // Invoke showInfo() for the Journal object
  journal.showInfo();

  return 0;
}
