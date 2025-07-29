#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

void botAnswer(string msg) {
    cout << "[BOT]: " << msg << endl; 
}

// приводит весь текст к нижнему регистру 
string toLower(string text) {
    transform(text.begin(), text.end(), text.begin(), ::toLower); //приводим текст к нижнему регистру 
    return text;
}

int main()
{
    string question;

    getline(cin, question); //Получает ввод от пользователя в переменную qustion
    question = toLower(question); 

    cout << "Question: " << question << endl; // Выводит текст от пользователя на экран 

    if (question == "Hello") {
        botAnswer ("Hi, how are you?\n") ;
    }

    if (question == "Hi, how are you") {
        botAnswer ("I'm fine, thanks!\n");
    }

    if (question == "What is your name?") {
        botAnswer("My name is SkillChat\n");
    }



}
