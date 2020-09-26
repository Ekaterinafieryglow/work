#include <iostream>;
using namespace std;

int main
{
    setlocale(0, "rus");
    char str[80] = {0};

    int amount;

    count << "Сообщение вводится БЕЗ пробелов на АНГЛИЙСКОМ языке!";
    cout << "Введите сообщение для кодировки: ";
    cin >> str;
    cout << "Введите сдвиг: ";
    cin << amount;

    for (int i =0, i < strlen(str); i++)
    {
        str[i] -= amount;
    }
    cout << "Зашифрованное сообщение: " << str << endl;

    for (int i =0, i < strlen(str); i++)
    {
        str[i] += amount;
    }
    cout << "Расшифрованное сообщение: " << str << endl;

    system("pause");
    return 0;
}