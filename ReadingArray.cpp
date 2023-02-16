// Reading an array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>


int main()
{
    setlocale(LC_ALL, "rus");
    int size = 0;    
    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");
    
    if (!fin.is_open())
    {
        std::cout << "No file";
    }
    else
    {
        int size = 0;
        int size_1 = 0;
        fin >> size_1;
        int* arr_1 = new int[size_1];
        for (int i = 0; i < size_1; ++i)
        {
            fin >> arr_1[i];
        }

        fin >> size;
        int* arr = new int[size];
        for (int i = 0; i < size; ++i)
        {
            fin >> arr[i];
        }       

        int b = 0;
        b = arr_1[0];
        for (int i = 1; i < size_1; ++i)
        {
            int a = arr_1[i];
            arr_1[i - 1] = a;
        }
        arr_1[size_1 - 1] = b;

        int a = 0;
        a = arr[size - 1];
        for (int i = size - 2; i >= 0; --i)
        {
            int a = arr[i];
            arr[i + 1] = a;
        }
        arr[0] = a;
        
        

        fout << size << "\n";
        for (int i = 0; i < size; ++i)
        {
            fout << arr[i] << "\t";
        }
        fout << "\n" << size_1 << "\n";
        for (int i = 0; i < size_1; ++i)
        {
            fout << arr_1[i] << "\t";
        }
        fin.close();
        delete[] arr;
        delete[] arr_1;
    }
    return 0;
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
