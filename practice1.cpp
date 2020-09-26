#include <iostream>;
using namespace std;

int main
{
    setlocale(0, "rus");
    char str[80] = {0};

    string command;
    int amount;

    count << "Сообщение вводится БЕЗ пробелов на АНГЛИЙСКОМ языке!";
    cout << "Введите сообщение для кодировки: ";
    cin >> str;
    cout << "Введите сдвиг: ";
    cin << amount;
    
    do 
	{
		cout << "Возможные команды: encode, decode. Ваша команда:  ";
		cin >> command;
		if (command == "decode")
		{
			for (int i = 0; i < strlen(str); i++)
			{
				{
					str[i] -= amount;
				}
			}
			cout << "Зашифрованное сообщение:  " << str << endl;
		}
    }
	while ((command != "encode") and (command != "decode"));


    for (int i =0, i < strlen(str); i++)
    {
        str[i] += amount;
    }
    cout << "Расшифрованное сообщение: " << str << endl;

    system("pause");
    return 0;
}
