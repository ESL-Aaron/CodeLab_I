#include <iostream>
#include <string>
#include <vector>    
#include <cctype>    // For using tolower
#include <algorithm> // For using transform
using namespace std;

// Helper function to convert a string to lowercase, there is a simillar function in the git repository
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(),
                   // Lambda function to apply tolower to each character
                   [](unsigned char c){ return tolower(c); });
    return s;
}

int main() {
    cout << "Welcome to the Euro Geography Quiz!" << endl;
    cout << "Answer the following questions." << endl;
    cout << "------------------------------------------" << endl;

    // Vectors to store questions and correct answers
    vector<string> questions = {
        "What is the capital of France?",
        "What is the capital of Germany?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of England?",
        "What is the capital of Portugal?",
        "What is the capital of Netherlands?",
        "What is the capital of Belgium?",
        "What is the capital of Greece?",
        "What is the capital of Ireland?"
    };

    // Corresponding correct answers stored in lowercase for easy comparison
    vector<string> correctAnswers = {
        "paris",
        "berlin",
        "rome",
        "madrid",
        "london",
        "lisbon",
        "amsterdam",
        "brussels",
        "athens",
        "dublin",
    };

    // Vector to store user answers for review at the end
    // as they are entered, it would be more complex
    vector<string> userAnswers(questions.size()); 
    int score = 0; // Counter for correct answers

    // Loop through all questions
    for (int i = 0; i < questions.size(); ++i) {
        cout << "\n" << (i + 1) << ". " << questions[i] << endl;
        cout << "Your answer: ";
        getline(cin, userAnswers[i]); // Read user answer, using getline to allow spaces

        // Convert user answer to lowercase for case-insensitive comparison
        string userAnswerLower = toLower(userAnswers[i]);
        
        // Convert the correct answer to lowercase for comparison
        string correctAnswerLower = toLower(correctAnswers[i]);

        // Check if the user answer matches the correct answer 
        if (userAnswerLower == correctAnswerLower) {
            score++; // Increment score if correct
        }
    }

    // Display Results at the End 
    cout << "\n------------------------------------------" << endl;
    cout << "Quiz Finished! Here are your results:" << endl;
    cout << "You got " << score << " out of " << questions.size() << " questions correct." << endl;
    cout << "------------------------------------------" << endl;

    

    return 0; 
}