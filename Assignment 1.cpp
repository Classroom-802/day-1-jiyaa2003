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
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float employeeSalary;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    void setEmployeeName(string name) {
        employeeName = name;
    }

    void setEmployeeSalary(float salary) {
        employeeSalary = salary;
    }

    int getEmployeeID() {
        return employeeID;
    }

    string getEmployeeName() {
        return employeeName;
    }

    float getEmployeeSalary() {
        return employeeSalary;
    }

    void displayDetails() {
        cout << "Employee ID: " << getEmployeeID() << endl;
        cout << "Employee Name: " << getEmployeeName() << endl;
        cout << "Employee Salary: " << getEmployeeSalary() << endl;
    }
};

int main() {
    Employee emp;

    int id;
    string name;
    float salary;

    cin >> id;
    cin.ignore();
    getline(cin, name);
    cin >> salary;

    emp.setEmployeeID(id);
    emp.setEmployeeName(name);
    emp.setEmployeeSalary(salary);

    emp.displayDetails();

    return 0;
}


// Question 14
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;

public:
    void setDetails(int roll, string studentName) {
        rollNumber = roll;
        name = studentName;
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    int marks[3];
    int total;
    float percentage;

public:
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        total = marks[0] + marks[1] + marks[2];
        percentage = (total / 300.0) * 100;
    }

    void displayResult() {
        displayDetails();
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;
    int roll;
    string name;
    int m1, m2, m3;

    cin >> roll;
    cin.ignore();
    getline(cin, name);
    cin >> m1 >> m2 >> m3;

    student.setDetails(roll, name);
    student.setMarks(m1, m2, m3);
    student.displayResult();

    return 0;
}


// Question 15
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}
    void area() {
        cout << "Circle Area: " << fixed << setprecision(2) << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    void area() {
        cout << "Rectangle Area: " << fixed << setprecision(2) << length * breadth << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}
    void area() {
        cout << "Triangle Area: " << fixed << setprecision(2) << 0.5 * base * height << endl;
    }
};

int main() {
    float radius, length, breadth, base, height;

    cin >> radius;
    cin >> length >> breadth;
    cin >> base >> height;

    Circle circle(radius);
    Rectangle rectangle(length, breadth);
    Triangle triangle(base, height);

    circle.area();
    rectangle.area();
    triangle.area();

    return 0;
}

// Question 16:
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() override {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    void area() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    float radius, length, breadth, base, height;

    cin >> radius;
    cin >> length >> breadth;
    cin >> base >> height;

    Circle circle(radius);
    Rectangle rectangle(length, breadth);
    Triangle triangle(base, height);

    Shape* shapes[3];
    shapes[0] = &circle;
    shapes[1] = &rectangle;
    shapes[2] = &triangle;

    for (int i = 0; i < 3; i++) {
        shapes[i]->area();
    }

    return 0;
}

// Question 17
#include <iostream>
#include <vector>
using namespace std;

class MatrixOperations {
public:
    void operate(vector<vector<int>>& A, vector<vector<int>>& B, int m, int n, int p, int operation) {
        if (operation == 1) {
            if (A.size() == B.size() && A[0].size() == B[0].size()) {
                vector<vector<int>> result(m, vector<int>(n, 0));
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        result[i][j] = A[i][j] + B[i][j];
                    }
                }
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Invalid dimensions for operation." << endl;
            }
        } else if (operation == 2) {
            if (n == B.size()) {
                vector<vector<int>> result(m, vector<int>(p, 0));
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < p; j++) {
                        for (int k = 0; k < n; k++) {
                            result[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < p; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Invalid dimensions for operation." << endl;
            }
        }
    }
};

int main() {
    int m, n, p, operation;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cin >> n >> p;
    vector<vector<int>> B(n, vector<int>(p));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    cin >> operation;

    MatrixOperations mo;
    mo.operate(A, B, m, n, p, operation);

    return 0;
}


// Question 18
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    double getArea() {
        return length * breadth;
    }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int r) : radius(r) {}
    double getArea() {
        return 3.14159 * radius * radius;
    }
};

class Triangle : public Shape {
    int base, height;
public:
    Triangle(int b, int h) : base(b), height(h) {}
    double getArea() {
        return 0.5 * base * height;
    }
};

int main() {
    int shapeType;
    cin >> shapeType;

    Shape* shape = nullptr;

    if (shapeType == 1) {
        int length, breadth;
        cin >> length >> breadth;
        shape = new Rectangle(length, breadth);
    } else if (shapeType == 2) {
        int radius;
        cin >> radius;
        shape = new Circle(radius);
    } else if (shapeType == 3) {
        int base, height;
        cin >> base >> height;
        shape = new Triangle(base, height);
    }

    if (shape) {
        cout << "The area of the shape is: " << shape->getArea() << endl;
        delete shape;
    }

    return 0;
}

// Question 19
#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title, author;
    int ISBN;
public:
    Book(string t, string a, int isbn) : title(t), author(a), ISBN(isbn) {}
};

class Borrower {
protected:
    string name;
    int ID;
public:
    Borrower(string n, int id) : name(n), ID(id) {}
};

class Library : public Book, public Borrower {
public:
    Library(string t, string a, int isbn, string n, int id)
        : Book(t, a, isbn), Borrower(n, id) {}

    void borrowBook() {
        cout << "Borrower " << name << " (ID: " << ID << ") has borrowed \""
             << title << "\" by " << author << " (ISBN: " << ISBN << ")." << endl;
    }

    void returnBook() {
        cout << "Borrower " << name << " (ID: " << ID << ") has returned \""
             << title << "\" by " << author << " (ISBN: " << ISBN << ")." << endl;
    }

    void performAction(int action) {
        if (action == 1) {
            borrowBook();
        } else if (action == 2) {
            returnBook();
        } else {
            cout << "Invalid action type." << endl;
        }
    }
};

int main() {
    string title, author, name;
    int ISBN, ID, action;

    cin >> ws;
    getline(cin, title);
    getline(cin, author);
    cin >> ISBN;

    cin >> ws;
    getline(cin, name);
    cin >> ID;

    cin >> action;

    Library library(title, author, ISBN, name, ID);
    library.performAction(action);

    return 0;
}

// Question 20
#include <iostream>
using namespace std;

class Account {
protected:
    int balance;
public:
    Account(int bal) : balance(bal) {}
    virtual void calculateInterest() = 0;  // Pure virtual function
    virtual ~Account() {}
};

class SavingsAccount : public Account {
    int rate, time;
public:
    SavingsAccount(int bal, int r, int t) : Account(bal), rate(r), time(t) {}
    void calculateInterest() override {
        int interest = balance * rate * time / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};

class CurrentAccount : public Account {
    int maintenanceFee;
public:
    CurrentAccount(int bal, int fee) : Account(bal), maintenanceFee(fee) {}
    void calculateInterest() override {
        balance -= maintenanceFee;
        cout << "Balance after fee deduction: " << balance << endl;
    }
};

int main() {
    int accountType, balance, rate, time, fee;
    
    cin >> accountType >> balance;

    if (accountType == 1) {
        cin >> rate >> time;
        SavingsAccount savings(balance, rate, time);
        savings.calculateInterest();
    } else if (accountType == 2) {
        cin >> fee;
        CurrentAccount current(balance, fee);
        current.calculateInterest();
    } else {
        cout << "Invalid account type." << endl;
    }

    return 0;
}
