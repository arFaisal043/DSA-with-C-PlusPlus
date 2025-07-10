#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAX_BOOKS = 1000;
const int MAX_TITLE = 1000;
const int MAX_AUTHOR = 100;

struct Book {
    string title;
    string author;
    int id;
};

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Library is full\n";
        return;
    }
    
    cout << "Enter book ID: ";
    cin >> library[bookCount].id;
    cin.ignore(); 
    
    cout << "Enter book title: ";
    getline(cin, library[bookCount].title);
    
    cout << "Enter author name: ";
    getline(cin, library[bookCount].author);
    
    bookCount++;
    cout << "Book added successfully!\n";
}

void deleteBook() {
    string title;
    cout << "Enter title for delete book: ";
    getline(cin, title);
    
    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].title == title) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            found = true;
            i--; 
        }
    }
    
    if (found) {
        cout << "Book deleted successfully!\n";
    } else {
        cout << "Book not found here!\n";
    }
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "No books in the library\n";
        return;
    }
    
    cout << "\nLibrary Books (" << bookCount << "):\n";
    cout << "ID\tTitle\t\tAuthor\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < bookCount; i++) {
        cout << library[i].id << "\t" << library[i].title << "\t\t" << library[i].author << "\n";
    }
}

// sorting functions

void selectionSort() {
    for (int i = 0; i < bookCount - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < bookCount; j++) {
            if (library[j].title < library[min_idx].title) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(library[i], library[min_idx]);
        }
    }
    cout << "\nBooks sorted by title using Selection Sort:\n";
    displayBooks();
}

void insertionSort() {
    for (int i = 1; i < bookCount; i++) {
        Book key = library[i];
        int j = i - 1;
        
        while (j >= 0 && library[j].title > key.title) {
            library[j + 1] = library[j];
            j--;
        }
        library[j + 1] = key;
    }
    cout << "\nBooks sorted by title using Insertion Sort:\n";
    displayBooks();
}


void merge(int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    Book L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = library[l + i];
    for (j = 0; j < n2; j++)
        R[j] = library[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i].title <= R[j].title) {
            library[k] = L[i];
            i++;
        } else {
            library[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        library[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        library[k] = R[j];
        j++;
        k++;
    }
}

void mergeSortHelper(int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSortHelper(l, m);
        mergeSortHelper(m + 1, r);
        merge(l, m, r);
    }
}

void mergeSort() {
    mergeSortHelper(0, bookCount - 1);
    cout << "\nBooks sorted by title using Merge Sort:\n";
    displayBooks();
}

int partition(int low, int high) {
    Book pivot = library[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (library[j].title < pivot.title) {
            i++;
            swap(library[i], library[j]);
        }
    }
    swap(library[i + 1], library[high]);
    return (i + 1);
}

void quickSortHelper(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        quickSortHelper(low, pi - 1);
        quickSortHelper(pi + 1, high);
    }
}

void quickSort() {
    quickSortHelper(0, bookCount - 1);
    cout << "\nBooks sorted by title using Quick Sort:\n";
    displayBooks();
}

void findBook() {
    string title;
    cout << "Enter title of book to find: ";
    getline(cin, title);
    
    for (int i = 0; i < bookCount; i++) {
        if (library[i].title == title) {
            cout << "\nBook found:\n";
            cout << "ID: " << library[i].id << "\n";
            cout << "Title: " << library[i].title << "\n";
            cout << "Author: " << library[i].author << "\n";
            return;
        }
    }
    cout << "Book not found!\n";
}

int main() {
    int choice;
    
    cout << "Library Management System\n";
    
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Book\n";
        cout << "2. Delete Book\n";
        cout << "3. Display All Books\n";
        cout << "4. Sort Books\n";
        cout << "5. Find Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 
        
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                deleteBook();
                break;
            case 3:
                displayBooks();
                break;
            case 4:
                cout << "\nSorting Options:\n";
                cout << "1. Insertion Sort\n";
                cout << "2. Selection Sort\n";
                cout << "3. Merge Sort\n";
                cout << "4. Quick Sort\n";
                cout << "Enter sorting method: ";
                int sortChoice;
                cin >> sortChoice;
                cin.ignore();
                
                switch (sortChoice) {
                    case 1:
                        insertionSort();
                        break;
                    case 2:
                        selectionSort();
                        break;
                    case 3:
                        mergeSort();
                        break;
                    case 4:
                        quickSort();
                        break;
                    default:
                        cout << "Invalid choice!\n";
                }
                break;
            case 5:
                findBook();
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    
    return 0;
}