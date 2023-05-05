#include <iostream>
#include <string>

using namespace std;

class TBook {
private:
    string Name;
    string Author;
    int Count;

public:
    TBook() {
        Name = "";
        Author = "";
        Count = 0;
    }
    TBook(string name, string author, int count) {
        Name = name;
        Author = author;
        Count = count;
    }
    void SetName(string name) {
        Name = name;
    }
    void SetAuthor(string author) {
        Author = author;
    }
    void SetCount(int count) {
        Count = count;
    }
    string GetName() const {
        return Name;
    }
    string GetAuthor() const {
        return Author;
    }
    int GetCount() const {
        return Count;
    }
};

int main()
{
   TBook book1;
   book1.SetName("CRIME AND PUNISHMENT");
   book1.SetAuthor("Fedor Dostoevsky");
   book1.SetCount(10);

   TBook book2("WAR AND PEACE", "Lev Tolstoy", 10);

   cout << "First Book: " << book1.GetName() << ", " << book1.GetAuthor() << ", " << book1.GetCount() << endl;
   cout << "Second Book: " << book2.GetName() << ", " << book2.GetAuthor() << ", " << book2.GetCount() << endl;

   return 0;
}
