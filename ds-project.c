#include <stdio.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_BOOKS 100
#define MAX_LENGTH 100
#define MAX_BORROWED_BOOKS 10

typedef struct {
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];
    int isAdmin;
    char borrowedBooks[MAX_BORROWED_BOOKS][MAX_LENGTH];
    int borrowedCount;
} User;

typedef struct {
    char title[MAX_LENGTH];
    char author[MAX_LENGTH];
    int isAvailable;
} Book;

User users[MAX_USERS];
Book books[MAX_BOOKS];
int userCount = 0;
int bookCount = 0;

Book recentlyAddedBooks[MAX_BOOKS]; // Stack for recently added books
int top = -1;

// Function to sort books alphabetically by title
void sortBooksByTitle() {
    for (int i = 0; i < bookCount - 1; i++) {
        for (int j = 0; j < bookCount - i - 1; j++) {
            if (strcmp(books[j].title, books[j + 1].title) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void registerUser(int isAdmin) {
    if (userCount >= MAX_USERS) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    printf("Enter username: ");
    scanf(" %[^\n]s", users[userCount].username);

    printf("Enter password: ");
    scanf(" %[^\n]s", users[userCount].password);

    users[userCount].isAdmin = isAdmin;
    users[userCount].borrowedCount = 0;
    userCount++;

    printf("Registration successful!\n");
}

int loginUser() {
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];

    printf("Enter username: ");
    scanf(" %[^\n]s", username);

    printf("Enter password: ");
    scanf(" %[^\n]s", password);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return i; // Successful login
        }
    }

    return -1; // Login failed
}

void removeUser() {
    char username[MAX_LENGTH];

    printf("Enter username of the user to remove: ");
    scanf(" %[^\n]s", username);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            for (int j = i; j < userCount - 1; j++) {
                users[j] = users[j + 1];
            }
            userCount--;
            printf("User removed successfully!\n");
            return;
        }
    }

    printf("User not found.\n");
}

void displayStudents() {
    printf("Registered Students:\n");
    for (int i = 0; i < userCount; i++) {
        if (!users[i].isAdmin) {
            printf("Username: %s\n", users[i].username);
        }
    }
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Book limit reached. Cannot add more books.\n");
        return;
    }

    printf("Enter book title: ");
    scanf(" %[^\n]", books[bookCount].title);

    printf("Enter book author: ");
    scanf(" %[^\n]", books[bookCount].author);

    books[bookCount].isAvailable = 1;

    // push recently added stack
    if (top + 1 < MAX_BOOKS) {
        recentlyAddedBooks[++top] = books[bookCount];
    }

    bookCount++;
    sortBooksByTitle(); // Sort books after adding
    printf("Book added successfully.\n");
}

void removeBook() {
    char title[MAX_LENGTH];

    printf("Enter the title of the book to remove: ");
    scanf(" %[^\n]", title);

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].title, title) == 0) { // compare input str title & title in books arr  // strcmp used to compare two strings
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Book removed successfully.\n");
            return;
        }
    }

    printf("Book not found.\n");
}

void displayBooks() {
    printf("Books in Library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Title: %s, Author: %s, Available: %s\n", books[i].title, books[i].author, books[i].isAvailable ? "Yes" : "No");
    }
}

void displayRecentlyAddedBooks() {
    printf("Recently Added Books:\n");
    for (int i = top; i >= 0; i--) {
        printf("Title: %s, Author: %s\n", recentlyAddedBooks[i].title, recentlyAddedBooks[i].author);
    }
}



void searchBooks() {
    char title[MAX_LENGTH];
    int st = 0, end = bookCount - 1;

    printf("Enter the title of the book to search: ");
    scanf(" %[^\n]s", title);

    while (st <= end) {
        int mid = st + (end - st) / 2;
        int res = strcmp(books[mid].title, title);  // In strcmp, If all characters are the same, it returns 0.

        if (res == 0) {
            printf("Book found: Title: %s, Author: %s, Available: %s\n", books[mid].title, books[mid].author, books[mid].isAvailable ? "Yes" : "No");
            return;
        }

        if (res < 0) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    printf("Book not found.\n");
}

void borrowBook(int userIndex) {
    char title[MAX_LENGTH];

    if (users[userIndex].borrowedCount >= MAX_BORROWED_BOOKS) {
        printf("Borrow limit reached. Cannot borrow more books.\n");
        return;
    }

    printf("Enter the title of the book to borrow: ");
    scanf(" %[^\n]s", title);

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].title, title) == 0 && books[i].isAvailable) {
            books[i].isAvailable = 0;
            strcpy(users[userIndex].borrowedBooks[users[userIndex].borrowedCount++], title);  // strcpy() used to copy one string to another string
            printf("Book borrowed successfully!\n");
            return;
        }
    }

    printf("Book not found or not available.\n");
}

void returnBook(int userIndex) {
    char title[MAX_LENGTH];

    printf("Enter the title of the book to return: ");
    scanf(" %[^\n]s", title);

    for (int i = 0; i < users[userIndex].borrowedCount; i++) {
        if (strcmp(users[userIndex].borrowedBooks[i], title) == 0) {
            for (int j = 0; j < bookCount; j++) {
                if (strcmp(books[j].title, title) == 0) {
                    books[j].isAvailable = 1;
                    break;
                }
            }
            for (int j = i; j < users[userIndex].borrowedCount - 1; j++) {
                strcpy(users[userIndex].borrowedBooks[j], users[userIndex].borrowedBooks[j + 1]);  // After remove books, the rest of the books are moved to the left.
            }
            users[userIndex].borrowedCount--;
            printf("Book returned successfully!\n");
            return;
        }
    }

    printf("You have not borrowed this book.\n");
}

void displayMenu(int isAdmin) {
    if (isAdmin) {
        printf("\n");
        printf("Admin Panel:\n");
        printf("1. Register Student\n");
        printf("2. Register Admin\n");
        printf("3. Remove Student\n");
        printf("4. View All Students\n");
        printf("5. Add Book\n");
        printf("6. Remove Book\n");
        printf("7. View All Books\n");
        printf("8. View Recently Added Books\n");
        printf("9. Logout\n");
    } else {
        printf("\n");
        printf("Student Panel:\n");
        printf("1. View All Books\n");
        printf("2. Search Book\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. View Recently Added Books\n");
        printf("6. Logout\n");
    }
}

int main() {
    int choice, userIndex;
    printf("\nHi there! Welcome to Our Project ");
    printf("\n- Library Management System \n");

    while (1) {

        printf("\n");
        printf("1. Register as a Admin\n");
        printf("2. Register as a Student\n");
        printf("3. Login\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser(1); // Register as admin (1)
                break;
            case 2:
                registerUser(0); // Register as student (0)
                break;
            case 3:
                userIndex = loginUser();
                if (userIndex == -1) {
                    printf("Login failed. Please try again.\n");
                } else {
                    printf("Login successful!\n");
                    while (1) {
                        displayMenu(users[userIndex].isAdmin);
                        scanf("%d", &choice);

                        if (choice == 9 || (choice == 6 && !users[userIndex].isAdmin)) {
                            break; // Logout
                        }

                        if (users[userIndex].isAdmin) {
                            switch (choice) {
                                case 1:
                                    registerUser(0); // Register student
                                    break;
                                case 2:
                                    registerUser(1); // Register admin
                                    break;
                                case 3:
                                    removeUser(); // Remove user
                                    break;
                                case 4:
                                    displayStudents(); // View all students
                                    break;
                                case 5:
                                    addBook(); // Add book
                                    break;
                                case 6:
                                    removeBook(); // Remove book
                                    break;
                                case 7:
                                    displayBooks(); // View books
                                    break;
                                case 8:
                                    displayRecentlyAddedBooks(); // View recently added books
                                    break;
                                default:
                                    printf("Invalid choice. Please try again.\n");
                            }
                        } else {
                            switch (choice) {
                                case 1:
                                    displayBooks(); // View books
                                    break;
                                case 2:
                                    searchBooks(); // Search book (binary)
                                    break;
                                case 3:
                                    borrowBook(userIndex); // Borrow book
                                    break;
                                case 4:
                                    returnBook(userIndex); // Return book
                                    break;
                                case 5:
                                    displayRecentlyAddedBooks(); // View recently added books
                                    break;
                                default:
                                    printf("Invalid choice. Please try again.\n");
                            }
                        }
                    }
                }
                break;
            case 4:
                printf("Exit the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
