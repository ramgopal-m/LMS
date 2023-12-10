#include <iostream>
#include <string>
#define maxBooks 100
using namespace std;

class Book {
public:
    int bookid;
    string name;
    string topic;
    double price;
    string author;

    // Function to input book details
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> bookid;

        cout << "Enter Book Name: ";
        cin.sync();
        getline(cin, name);

        cout << "Enter Book Topic: ";
        cin.sync();
        getline(cin, topic);

        cout << "Enter Book Price: ";
        cin >> price;

        cout << "Enter Author Name: ";
        cin.sync();
        getline(cin,author);
    }

    // Function to display book details
    void display() {
        cout << "\nBook Details:\n";
        cout << "ID: " << bookid << "\n";
        cout << "Name: " << name << "\n";
        cout << "Topic: " << topic << "\n";
        cout << "Price: " << price << "\n";
        cout << "Author: " << author << "\n";
    }
};

// Library class to manage books
class Library {
private:
    Book b[maxBooks];
    int numBooks;                    

public:
    Library()   {
        numBooks=0;
    }
    // Function to check if library empty
    int islibraryEmpty()
    {
        if(numBooks==0)
        {
            cout << "Library is empty\n";
        }
        return numBooks;
        
    }
    // Function to add a book to the library
    void addBook() {
        if (numBooks < maxBooks) {
            b[numBooks].inputDetails();
            numBooks++;
            cout << "Book added successfully.\n";
        } else {
            cout << "Library is full. Cannot add more books.\n";
        }
    }

    // Function to update book details based on book ID
    void updateBook(int bookid) {
        if(islibraryEmpty()==0)
        {
            return;
        }
        for (int i = 0; i < numBooks; ++i) {
            if (b[i].bookid == bookid) {
                cout << "Enter updated details:\n";
                b[i].inputDetails();
                cout << "Book updated successfully.\n";
                return;
            }
        }
        cout << "Book not found. Update failed.\n";
    }

    // Function to classify books by price
    void classifyByPrice(double maxPrice) 
    {
        if(islibraryEmpty()==0)
        {
            return;
        }
        int countNumberOfBooks=0;
        cout << "\nBooks with Price <= " << maxPrice << ":\n";
        for (int i = 0; i < numBooks; ++i) 
        {
            if (b[i].price <= maxPrice) 
            {
                b[i].display();
                countNumberOfBooks++;
            }
        }
        if(countNumberOfBooks==0)
        {
            cout<<"Books are not available in the Library.\n";
        }
    }

    // Function to delete a book based on book ID
    void deleteBook(int bookid) {
        if(islibraryEmpty()==0)
        {
            return;
        }
        for (int i = 0; i < numBooks; ++i) {
            if (b[i].bookid == bookid) {
                for (int j = i; j < numBooks - 1; ++j) {
                    b[j] = b[j + 1];
                }
                numBooks--;
                cout << "Book deleted successfully.\n";
                return;
            }
        }
        cout << "Book not found. Deletion failed.\n";
    }

    // Function to display all books in the library
    void displayall() {
        if(islibraryEmpty()==0)
        {
            return;
        }
            cout << "\nAll Books in the Library:\n";
            for (int i = 0; i < numBooks; ++i) 
            {
                b[i].display();
            }
    }
    // Function to Search book in the library
    void searchBook(int bookid)
    {
        if(islibraryEmpty()==0)
        {
            return;
        }
        for (int i = 0; i < numBooks; ++i) {
            if (b[i].bookid == bookid) {
                cout << "Search Book:\n";
                b[i].display();
                return;
            }
        }
        cout << "Search Book not found.\n";
    }
};

int main() {
    Library lib;
    int choice, bookid;
    double maxPrice;

    do{
        cout << "\nLibrary Management System\n";
        cout << "1. Add a Book\n";
        cout << "2. Update a Book\n";
        cout << "3. Classify by Price\n";
        cout << "4. Delete a Book\n";
        cout << "5. Display All Books\n";
        cout << "6. Search a Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                cout << "Enter Book ID to update: ";
                cin >> bookid;
                lib.updateBook(bookid);
                break;
            case 3:
                cout << "Enter maximum price to classify: ";
                cin >> maxPrice;
                lib.classifyByPrice(maxPrice);
                break;
            case 4:
                cout << "Enter Book ID to delete: ";
                cin >> bookid;
                lib.deleteBook(bookid);
                break;
            case 5:
                lib.displayall();
                break;
                
            case 6:
                cout << "Enter Book ID to search: ";
                cin >> bookid;
                lib.searchBook(bookid);
            case 7:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    }while(choice!=7);

    return 0;
}
