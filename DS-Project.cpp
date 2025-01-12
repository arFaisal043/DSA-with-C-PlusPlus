#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

const int MAX_BOOKS = 100;
Book library[MAX_BOOKS];
int bookCount = 0;

stack<Book> recentBooks; // Stack to store recently added books
queue<Book> borrowedBooks; // Queue to manage borrowed books

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Library is full! Cannot add more books.\n";
        return;
    }

    Book newBook;
    cout << "Enter Book ID: ";
    cin >> newBook.id;
    cin.ignore(); // To handle newline character after ID input
    cout << "Enter Book Title: ";
    getline(cin, newBook.title);
    cout << "Enter Book Author: ";
    getline(cin, newBook.author);

    library[bookCount++] = newBook;
    recentBooks.push(newBook); // Push the book onto the stack
    cout << "Book added successfully!\n";
}

void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    int index = -1;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Book not found!\n";
        return;
    }

    for (int i = index; i < bookCount - 1; i++) {
        library[i] = library[i + 1];
    }

    bookCount--;
    cout << "Book deleted successfully!\n";
}

void searchBook() {
    string title;
    cin.ignore();
    cout << "Enter Book Title to search: ";
    getline(cin, title);

    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].title.find(title) != string::npos) {
            cout << "Book Found: [ID: " << library[i].id << ", Title: " << library[i].title << ", Author: " << library[i].author << "]\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No book found with the given title!\n";
    }
}

void sortBooks() {
    cout << "Sort by: 1. Title 2. Author\nChoose an option: ";
    int option;
    cin >> option;

    if (option == 1) {
        sort(library, library + bookCount, [](Book a, Book b) {
            return a.title < b.title;
        });
        cout << "Books sorted by title!\n";
    } else if (option == 2) {
        sort(library, library + bookCount, [](Book a, Book b) {
            return a.author < b.author;
        });
        cout << "Books sorted by author!\n";
    } else {
        cout << "Invalid option!\n";
    }
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "No books in the library!\n";
        return;
    }

    cout << "\nLibrary Books:\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "[ID: " << library[i].id << ", Title: " << library[i].title << ", Author: " << library[i].author << "]\n";
    }
}

void displayRecentBooks() {
    if (recentBooks.empty()) {
        cout << "No recently added books to display!\n";
        return;
    }

    cout << "\nRecently Added Books (Last In, First Out):\n";
    stack<Book> temp = recentBooks;
    while (!temp.empty()) {
        Book b = temp.top();
        temp.pop();
        cout << "[ID: " << b.id << ", Title: " << b.title << ", Author: " << b.author << "]\n";
    }
}

void borrowBook() {
    int id;
    cout << "Enter Book ID to borrow: ";
    cin >> id;

    int index = -1;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Book not found!\n";
        return;
    }

    borrowedBooks.push(library[index]);
    cout << "Book borrowed successfully!\n";
}

void displayBorrowedBooks() {
    if (borrowedBooks.empty()) {
        cout << "No borrowed books to display!\n";
        return;
    }

    cout << "\nBorrowed Books (First In, First Out):\n";
    queue<Book> temp = borrowedBooks;
    while (!temp.empty()) {
        Book b = temp.front();
        temp.pop();
        cout << "[ID: " << b.id << ", Title: " << b.title << ", Author: " << b.author << "]\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Delete Book\n";
        cout << "3. Search Book\n";
        cout << "4. Sort Books\n";
        cout << "5. Display All Books\n";
        cout << "6. Display Recently Added Books\n";
        cout << "7. Borrow Book\n";
        cout << "8. Display Borrowed Books\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                deleteBook();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                sortBooks();
                break;
            case 5:
                displayBooks();
                break;
            case 6:
                displayRecentBooks();
                break;
            case 7:
                borrowBook();
                break;
            case 8:
                displayBorrowedBooks();
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}
