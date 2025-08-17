# 📚 Library Management System  

A simple **C++ console-based application** to manage books in a library.  
The system allows you to **add, update, delete, classify, search, and display books**.  

---

## 🚀 Features  

- **Add Book** – Store book details like ID, name, topic, price, and author  
- **Update Book** – Modify existing book details by ID  
- **Delete Book** – Remove a book using its ID  
- **Classify Books by Price** – View books priced below or equal to a given amount  
- **Search Book** – Find a book by its ID  
- **Display All Books** – Show all available books in the library  
- **Check if Library is Empty** – Prevents operations when no books exist  

---

## 🛠️ Technologies Used  

- **Language**: C++  
- **Concepts**: Classes & Objects, Arrays, Encapsulation, Functions  

---

## 📂 File Structure  

```
LibraryManagement/
│── library.cpp    # Main C++ source file
│── README.md      # Project documentation
```

---

## ▶️ How to Run  

1. **Clone the repository**  
   ```bash
   git clone https://github.com/your-username/library-management.git
   cd library-management
   ```

2. **Compile the program**  
   ```bash
   g++ library.cpp -o library
   ```

3. **Run the program**  
   ```bash
   ./library
   ```

---

## 📋 Sample Menu  

```
Library Management System
1. Add a Book
2. Update a Book
3. Classify by Price
4. Delete a Book
5. Display All Books
6. Search a Book
7. Exit
```

---

## ✨ Example  

**Input:**  
```
Enter Book ID: 101
Enter Book Name: C++ Primer
Enter Book Topic: Programming
Enter Book Price: 499
Enter Author Name: Stanley B. Lippman
```

**Output:**  
```
Book added successfully.

Book Details:
ID: 101
Name: C++ Primer
Topic: Programming
Price: 499
Author: Stanley B. Lippman
```

---

## 📌 Future Enhancements  

- Save and load book data from files (persistent storage)  
- Advanced search by name/author/topic  
- GUI-based version with Qt or C++/CLI  

---

## 🏷️ License  

This project is **free to use** for learning and academic purposes.  
