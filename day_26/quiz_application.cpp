#include <iostream>
using namespace std;

int main() {
    int score = 0, choice;

    cout << "--- Quiz Application ---\n";

    // Question 1
    cout << "Q1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n";
    cin >> choice;
    if(choice == 2) score++;

    // Question 2
    cout << "Q2. Who is known as the Father of C++?\n";
    cout << "1. Dennis Richie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cin >> choice;
    if(choice == 2) score++;

    // Question 3
    cout << "Q3. Which data structure uses FIFO?\n";
    cout << "1. Stack\n2. Queue\n3. Tree\n4. Graph\n";
    cin >> choice;
    if(choice == 2) score++;

    cout << "\nYour final score is: " << score << "/3\n";

    if(score == 3) cout << "Excellent!\n";
    else if(score == 2) cout << "Good job!\n";
    else cout << "Keep practicing!\n";

    return 0;
}
