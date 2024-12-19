// Question 1
#include "iostream"
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << (x*(x+1))/2;
    return 0;
}
// Question 2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Prime" : "Not Prime") << endl;
    return 0;
}

// Question 3
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        cout << i << (i + 2 > n ? "" : " ");
    }
    return 0;
}

// Question 4
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}


// Question 5
#include "iostream"
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= 10)
    {
        cout << i << " X " << n << " = " << i * n << endl;
        i++;
    }
}
// Question 6
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while (n > 0) {
        count++;
        n /= 10;
    }
    cout << count << endl;
    return 0;
}

// Question 7
#include "iostream"
using namespace std;

int main()
{
    int x, rev = 0;
    cin >> x;

    while (x != 0)
    {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    cout << rev << endl;
}
// Question 8
#include <iostream>
using namespace std;

int main() {
    int n, largest = 0;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit > largest) {
            largest = digit;
        }
        n /= 10;
    }
    cout << largest << endl;
    return 0;
}

// Question 9
#include "iostream"
using namespace std;

int main()
{
    int que, rev = 0;
    cin >> que;
    int n = que;
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == que)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}
// Question 10
#include "iostream"
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while (n != 0)
    {
        int a = n % 10;
        sum += a;
        n = n / 10;
    }
    cout << sum;
}
// Question 11
#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius) {
    return PI * radius * radius;
}

double calculateArea(double length, double breadth) {
    return length * breadth;
}

double calculateArea(double base, double height, int) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;

    cin >> radius >> length >> breadth >> base >> height;

    cout << calculateArea(radius) << endl;
    cout << calculateArea(length, breadth) << endl;
    cout << calculateArea(base, height, 0) << endl;

    return 0;
}
// Question 12
#include <iostream>
using namespace std;

int calculateSalary(int stipend) {
    return stipend;
}

int calculateSalary(int baseSalary, int bonuses) {
    return baseSalary + bonuses;
}

int calculateSalary(int baseSalary, int bonuses, int incentives) {
    return baseSalary + bonuses + incentives;
}

int main() {
    int stipend, baseSalary1, bonuses1, baseSalary2, bonuses2, incentives;

    cin >> stipend;
    cin >> baseSalary1 >> bonuses1;
    cin >> baseSalary2 >> bonuses2 >> incentives;

    cout << "Intern Salary: " << calculateSalary(stipend) << endl;
    cout << "Employee Salary: " << calculateSalary(baseSalary1, bonuses1) << endl;
    cout << "Manager Salary: " << calculateSalary(baseSalary2, bonuses2, incentives) << endl;

    return 0;
}

// Question 13
class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void setDetails(int empId, string empName, float empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }
    void displayDetails() {
        cout << "Employee ID: " << id << "\nEmployee Name: " << name << "\nEmployee Salary: " << salary << endl;
    }
};

// Question 14
class Student {
public:
    int rollNumber;
    string name;
    void setStudentDetails(int r, string n) {
        rollNumber = r;
        name = n;
    }
};

class Result : public Student {
public:
    int marks[3];
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void calculateAndDisplay() {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Roll Number: " << rollNumber << "\nName: " << name
             << "\nTotal: " << total << "\nPercentage: " << (total / 3.0) << "%" << endl;
    }
};

// Question 15
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

// Question 16:
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};
// Question 17
void operate(int matA[2][2], int matB[2][2], int operation) {
    int result[2][2] = {};
    if (operation == 1) { // Addition
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result[i][j] = matA[i][j] + matB[i][j];
    } else if (operation == 2) { // Multiplication
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result[i][j] += matA[i][k] * matB[k][j];
    }
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}

// Question 18
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};
// Question 19
class Book {
public:
    string title, author;
    int isbn;
    void setBookDetails(string t, string a, int i) {
        title = t;
        author = a;
        isbn = i;
    }
};
class Borrower {
public:
    string name;
    int id;
    void setBorrowerDetails(string n, int i) {
        name = n;
        id = i;
    }
};
class Library : public Book, public Borrower {
public:
    void borrowBook() {
        cout << name << " (ID: " << id << ") has borrowed \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
    void returnBook() {
        cout << name << " (ID: " << id << ") has returned \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
};
// Question 20
class Account {
public:
    virtual void calculateInterest() = 0; // Pure virtual function
};
class SavingsAccount : public Account {
    double balance, rate, time;
public:
    SavingsAccount(double b, double r, double t) : balance(b), rate(r), time(t) {}
    void calculateInterest() override {
        cout << "Savings Account Interest: " << (balance * rate * time / 100) << endl;
    }
};
class CurrentAccount : public Account {
    double balance, fee;
public:
    CurrentAccount(double b, double f) : balance(b), fee(f) {}
    void calculateInterest() override {
        cout << "Balance after fee deduction: " << (balance - fee) << endl;
    }
};


