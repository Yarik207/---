#include <iostream>
#include <string>

using namespace std;

int main()
{
    string question;

    getline(cin, question); //Получает ввод от пользователя в переменную qustion

    cout << "Question: " << question << endl; // Выводит текст от пользователя на экран 

    if (question == "Hello") {
        cout << "Hi, how are you?\n";
    }

    if (question == "Hi, how are you") {
        cout << "I'm fine, thanks!\n";
    }



}
