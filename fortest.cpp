#include <iostream>
using namespace std;
int height, weight;


int main()
{

    setlocale(LC_ALL, "Ru");

    cout << "Введите высоту: ";
    cin >> height;
    cout << "Введите ширину: ";
    cin >> weight;

    for (int i = 0; i < height+2; i++)
    {
        for (int j = 0; j < weight+1; j++)
        {
            if (i == 0 && j == weight/2)
            {
                cout << "^";
            }
            else if (height == weight && i <= height / 2 && i-1 == j && j != weight / 2) //i==2, j==0; i==3, j==1
            {
                cout << "\\";
            }
            else if (i<=height/2 && i==j+(height/2 - weight/2)+1 && j != weight / 2) // weight/2 - (height/2)
            {
                cout << "\\";
            }
            else if (i < height/2 + 1 && j == weight/2)
            {
                cout << "|";
            }
            else if (i <= height / 2 && j+i == (height/2 + weight/2)+1 && j != weight / 2) // weight/2 - (height/2)
            {
                cout << "/";
            }
            else if (i==height/2 + 1 && j < weight/2)
            {
                cout << "-";
            }
            else if (i==height/2 + 1 && j==weight/2)
            {
                cout << "+";
            }
            else if (i == height / 2 + 1 && j > weight/2 && j!=weight)
            {
                cout << "-";
            }
            else if (i==height/2 + 1 && j==weight)
            {
                cout << "->";
            }

            else if (i >= height / 2 && j + i == (height / 2 + weight / 2) + 1 && j != weight / 2) // weight/2 - (height/2)
            {
                cout << "/";
            }

            else if (i > height / 2 + 1 && j == weight / 2)
            {
                cout << "|";
            }

            else if (i >= height / 2 && i == j + (height / 2 - weight / 2) + 1 && j != weight / 2) // weight/2 - (height/2)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
