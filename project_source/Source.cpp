/*
#include <iostream>        // подключаем заголовочный файл iostream
int main()                  // определяем функцию main
{                               // начало функции
    setlocale(LC_ALL, "");      // функция поддержки кириллических символов
    std::cout <<"Привет мир!";  // выводим строку на консоль
    std::cout << "Bye World";
    return 0;                   // выходим из функции
}                               // конец функции
*/




#include <iostream>     // подключаем заголовочный файл iostream
#include <stdio.h>
#include <Windows.h>    // Изменение цвета отдельных слов
#include <string>       // Для хранения строк в C++ применяется тип string.

enum ConsoleColor {
Black = 0,
Blue = 1,
Green = 2,
Cyan = 3,
Red = 4,
Magenta = 5,
Brown = 6,
LightGray = 7,
DarkGray = 8,
LightBlue = 9,
LightGreen = 10,
LightCyan = 11,
LightRed = 12,
LightMagenta = 13,
Yellow = 14,
White = 15
};

int x = 1;                          // определение переменной ВНЕ функции main (по умолчанию значение такой переменной - 0)
int main()                          // определяем функцию main. В скобках указывается тип данных (int, float, double и т.д.). Если () или (void) - тип данных не указан
{                                   // начало функции
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Получаение дескриптора устройства стандартного вывода
    setlocale(LC_ALL, "");          // функция поддержки кириллических символов

    // Установка белого фона за отдельным символом. Цвет символа - черный

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 1. Вывод строки на консоль");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    std::cout << "Привет мир!" << "\n";     // выводим строку на консоль


    // Целочисленные типы данных
   /*
   short           a = -10;
    unsigned short  b = 10;
    int             c = -30;
    unsigned int    d = 60;
    long            e = -170;
    unsigned long   f = 45;
    long long       g = 89;
    */

    // Типы чисел с плавающей точкой иили дробные числа
    /*
    float           h = -10.45;
    double          i = 0.00105;
    long double     j = 30.890045;
    */

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 2. Инициализация переменной");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    int age = 27;           // инициализация переменной
    int year = 1993;

    // int age;
    // age = 27;            // определение переменной ВНУТРИ функции main

    std::cout << "Возраст = " << age << " лет" << "\n";
    std::cout << "Переменная " << "X = " << x << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 3. Определение переменной-символа");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    char A = 'A';       // определение переменной символьного типа
    char age_b = 66;        // 66 - код символа 'B' в таблице символов ASCII
    wchar_t B = 'B';

    std::cout << "Возраст A (тип char) " << A << "\n";
    std::cout << "Возраст B (тип wchar) " << B << "\n";     // поток std::cout для переменной wchar_t вместо символа будет выводить его числовой код

    std::wcout << A << " (char)" << ' ' << B << " (wchar)" << "\n";

    std::cout << (char)B << '\n';    // операция приведения к типу char
    //std::wcout << "Возрасты A и B (тип char и wchar) " << B << '\n';  // ТЕКСТ ОТОБРАЖАЕТСЯ НЕКОРРЕКТНО

    std::cout << "Размер памяти в байтах, которую занимает переменная " << "age = "  << sizeof(age) << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 4. Преобразования типов");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    int i_1 = 'B';        // символ 'B' будет автоматически преобразовываться в число - код символа в таблице ASCII 66
    char word = 66;     // код 66 в символьном типе озачает символ 'B'
    std::cout << i_1 << " in ASCII is " << word << "\n";

    // переменная типа bool получает false, если значение равно 0. Во всех остальных случаях переменная получает true.
    bool b_1 = 1;     // результат - true
    bool b_2 = 3.4;   // результат - true
    bool b_3 = 'g';   // результат - true
    bool b_4 = 0;     // результат - false

    int i_2 = true;       // результат - 1
    double d_1 = false;   // результат - 0

    int i_3 = 3.45;        // результат - 3
    int i_4 = 7.21;        // результат - 7

    float a = 35005;                // результат - 35005
    double b = 3500500000033;       // результат - 3.5005e+012

    // при присвоении значения -1 переменная типа unsigned char получит 256 - |-1/256| = 255
    unsigned char uc_1 = -1;           // результат - 255

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 5. Определения константы");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    const int y = 22;
    const int x = y;
    const float Pi = 3.1415;
    std::cout << "Константа Y = " << y << "\n";
    std::cout << "Константы X и Y равны 22" << "\n";
    std::cout << "Число Пи равно " << Pi << "\n" ;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 6. Бинарные операции");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    // бинарные операции (опреации с двумя операндами)
    int i_5 = age + year;
    std::cout << i_5 << "\n";

    int i_6 = year - age;
    std::cout << i_6 << "\n";

    int i_7 = age * year;
    std::cout << i_7 << "\n";

    float f_1 = (float)year / (float)age;
    std::cout << "Float " << f_1 << "\n";

    double d_2 = (double)year / (double)age;
    std::cout << "Double " << d_2 << "\n";

    // Операция получения остатка от целочисленного деления:
    int i_8 = year % age;
    std::cout << "Остаток от целочисленного деления " << i_8 << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 7. Унарные арифметические операции");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    // унарные арифметические операции, которые производятся над одним числом: ++ (инкремент) и -- (декремент)
    int i_9 = ++age;        // Префиксный инкремент
    std::cout << "Возраст через 1 год = " << i_9 << "\n";
    int i_10 = i_9++;      // Постфиксный инкремент
    std::cout << "Возраст через 2 года (" << i_9 << ") будет больше, чем через 1 год ("  << i_10 << ")" << "\n";
    std::cout << "age = " << age << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 8. Операции отношения");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    bool b_5 = i_9 == age;          // false
    bool b_6 = i_10 == age;         // true
    std::cout << b_5 << ' ' << b_6 << "\n";

    bool b_7 = i_9 >= i_10;  // true
    bool b_8 = i_9 != i_10;
    std::cout << b_7 << ' ' << b_8 << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 9. Логические операции");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    // ! (операция отрицания)
    bool b_9 = true;
    bool b_10 = !b_9;
    std::cout << "Отрицание " << b_9 << " есть " << b_10 << "\n";

    // && (конъюнкция, логическое умножение)
    bool b_11 = true;
    bool b_12 = false;
    std::cout << (b_11 && b_12) << ' ' << (b_11 && true) << ' ' << (b_12 && false) << "\n";     // 0 1 0

    // || (дизъюнкция, логическое сложение)
    std::cout << (b_11 || b_12) << ' ' << (b_11 || true) << ' ' << (b_12 || false) << "\n";     // 1 1 0

    bool b_13 = 0 > 5;              // false
    bool b_14 = 0 < 7;              // true
    bool b_15 = 10 > 13 && 5 < 14;      // false
    bool b_16 = b_13 && b_14 || true;    // true
    std::cout << b_13 << ' ' << b_14 << ' ' << b_15 << ' ' << b_16 << "\n";     // 0 1 0 1

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 10. Побитовые операции");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    // Операции сдивга - работают с целочисленными величинами в двоичной системе
    int i_11 = 2 << 2;           // 10 на ДВА разрядов влево = 1000 - в результате получим 8
    int i_12 = 16 >> 3;          // 10000 на ТРИ разряда вправо = 10 - в результате получим 2

    // Поразрядные операции
    int i_13 = 5 | 2;          // 101 | 010 = 111  - 7     поразрядная дизъюнкция
    int i_14 = 6 & 2;          // 110 & 010 = 10  - 2      поразрядная конъюнкция (нули в начале отбрасываются)
    int i_15 = 5 ^ 2;          // 101 ^ 010 = 111 - 7      поразрядное исключающее ИЛИ
    int i_16 = ~9;             // -10                      поразрядное отрицание или инверсия

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 11. Операции присваивания");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    int i_17, i_18, i_19, i_20;
    i_17 = i_18 = i_19 = 34;

    i_20 = i_17 + i_18 + i_19;      // 102
    std::cout << "i_20 = " << i_20 << "\n";

    // += : присваивание после сложения.
    i_17 += i_20;                   // 34 + 102 = 136 = i_17
    std::cout << "i_17 = " << i_17 << "\n";

    // -=: присваивание после вычитания
    i_18 -= i_17;                   // -102
    std::cout << "i_18 = " << i_18 << "\n";

    // *=: присваивание после умножения
    i_19 *= i_17;                   // 4624
    std::cout << "i_19 = " << i_19 << "\n";

    // /= : присваивание после деления
    i_20 /= i_17;                   // 0.75 округляется до 0
    std::cout << "i_20 = " << i_20 << "\n";

    // %=: присваивание после деления по модулю
    i_17 %= age;                        // остаток от деления 136 на 28 (age) равен 24
    std::cout << "i_17 = " << i_17 << "\n";

    /*

    <<= : присваивание после сдвига разрядов влево
    >>= : присваивание после сдвига разрядов вправо
    &= : присваивание после поразрядной конъюнкции
    |= : присваивание после поразрядной дизъюнкции
    ^= : присваивание после операции исключающего ИЛИ

    */

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 12. Вывод с консоли");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    // Для вывода на консоль применяется оператор <<.
    // Этот оператор получает два операнда.
    // Левый операнд представляет объект типа ostream, в данном случае объект cout.
    // А правый операнд - значение, которое надо вывести на консоль.

    // "\n" - перевод на новую строку
    // "\t" - табуляция
    // значение std::endl вызывает перевод на новую строку и сброс буфера

    int Tom_age = 33;
    double Tom_weight = 81.23;
    std::cout << "Name: " << "Tom" << "\n";
    std::cout << "Age: " << Tom_age << std::endl;
    std::cout << "Weight: " << Tom_weight << std::endl;

    // Ввод с консоли
    // Для считывания с консоли данных применяется оператор ввода >>

    std::cout << "Input age: ";
 //   std::cin >> Tom_age;            // тип integer
    std::cout << "Input weight: ";
//    std::cin >> Tom_weight;         // тип double
    // std::cin >> age >> weight; // можно по цепочке считывать данные в различные переменные
    // После ввода одного из значений надо будет ввести пробел и затем вводить следующее значение.
    std::cout << "Tom age: " << Tom_age << "\t Tom weight: " << Tom_weight << std::endl;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 13. Пространства имен и using");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    /*
    Префикс "std::" указывает, что объекты cout, cin, endl определены в пространствен имен std.
    А само двойное двоеточие :: представляет оператор области видимости (scope operator),
    который позволяет указать, в каком пространсте имен определен объект.

    Оператор "using" позволяет ввести в программу объекты из различных пространств имен

                                using пространство_имен::объект
    */

    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

// int main()
 // {
    cout << "Input age: ";
//    cin >> Tom_age;
    cout << "Tom age: " << Tom_age << endl;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 14. Условные конструкции");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    // Конструкция if проверяет истинность условия, и если оно истинно, выполняет блок инструкций

    /*
        if (условие)
        {
            инструкции;
        }
    */
    // В качестве условия использоваться условное выражение, которое возвращает true или false.

    if(age > Tom_age)
    {
        std::cout << "My age is greater than Tom age \n";
    }

    if(age < Tom_age)
    {
        std::cout << "My age is less than Tom age \n";
    }

    // else

    if(age == Tom_age)
    std::cout << "My age is equal to Tom age \n";
        else    std::cout << "My age is non equal Tom age \n";

    /*
    Нередко надо обработать не два возможных альтернативных варианта, а гораздо больше.
    Например, в случае выше можно насчитать три условия: переменная x может быть больше 60, меньше 60 и равна 60.
    Для проверки альтернативных условий мы можем вводить выражения else if:
    */

    // В данном случае мы получаем три ветки развития событий в программе
    // Если в блоке if или else или else-if необходимо выполнить только одну инструкцию, то фигурные скобки можно опустить:
    if(age > Tom_age)
            std::cout << "My age is greater than Tom age \n";
    else if (age < Tom_age)
            std::cout << "My age is less than Tom age \n";
    else
            std::cout << "My age is equal Tom age \n";

    // Конструкция switch

    /*
        switch(выражение)
    {
        case константа_1: инструкции_1;
        case константа_2: инструкции_2;

        default: инструкции;
    }
    */

    // После ключевого слова switch в скобках идет сравниваемое выражение.
    // Значение этого выражения последовательно сравнивается со значениями после оператора сase.
    // И если совпадение будет найдено, то будет выполняться определенный блок сase.

    // В конце конструкции switch может стоять блок default.
    // Он необязателен и выполняется в том случае, если значение после switch не соответствует ни одному из операторов case.

    int i_22 = age;
    switch(i_22)
    {
        case 10:
            std::cout << "i_22  = 10" << "\n";
            break;
        case 23:
            std::cout << "i_22  = age" << "\n";
            break;
        case 35:
            std::cout << "i_22  = Tom_age" << "\n";
            break;
        default:
            std::cout << "i_22 is undefined" << "\n";
            break;
    }
    // Чтобы избежать выполнения последующих блоков case/default, в конце каждого блока ставится оператор break.


// Тернарный оператор
    // Тернарный оператор "?:" позволяет сократить определение простейших условных конструкций if и имеет следующую форму:

    //  [первый операнд - условие] ? [второй операнд] : [третий операнд]

    /*
    Оператор использует сразу три операнда.
    В зависимости от условия тернарный оператор возвращает второй или третий операнд: если условие равно true
    (то есть истинно), то возвращается второй операнд; если условие равно false (то есть ложно), то третий.
    */

    int i_23 = 5;
    int i_24 = 3;
    char sign = '-';
        std::cout << "Введите знак операции: ";
 //       std::cin >> sign;
            int result = sign=='+' ? i_23 + i_24 : i_23 - i_24;
        std::cout << "Результат: " << result << "\n";

        /*
        В данном случае производится ввод знака операции.
        Здесь результатом тернарной операции является переменная result.
        И если переменная sign содержит знак "+", то result будет равно второму операнду - (x+y) = 8.
        Иначе result будет равно третьему операнду = 2.
        */

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 15. Цикл WHILE");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

// Цикл while - цикл с ПРЕДУСЛОВИЕМ
// Цикл while выполняет некоторый код, пока его условие истинно, то есть возвращает true.

    /*
    while(условие)
    {
        // выполняемые действия (набор инструкций)
    }
    */

    // Выведем квадраты чисел от 1 до 9
    int i_25 = 1;
    while(i_25 < 10)
    {
        cout << i_25 << " * " << i_25 << " = " << i_25 * i_25 << endl;
        i_25++;
    }
    // Если цикл содержит одну инструкцию, то фигурные скобки можно опустить:
    int i_26 = 0;
    while(++i_26 < 10)
        cout << i_26 << " * " << i_26 << " = " << i_26 * i_26 << endl;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 16. Цикл FOR");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

// Цикл for
    /*
    for (выражение_1; выражение_2; выражение_3)
        {
        // тело цикла
        }
    выражение_1 выполняется один раз при начале выполнения цикла и представляет установку начальных условий,
    как правило, это инициализация счетчиков - специальных переменных, которые используются для контроля за циклом.
    выражение_2 представляет условие, при соблюдении которого выполняется цикл.
    Как правило, в качестве условия используется операция сравнения, и если она возвращает ненулевое значение
    (то есть условие истинно), то выполняется тело цикла, а затем вычисляется выражение_3.
    выражение_3 задает изменение параметров цикла, нередко здесь происходит увеличение счетчиков цикла на единицу.
    */

    // Перепишем программу по выводу квадратов чисел с помощью цикла for
    for(int i_27 = 10; i_27 > 0; i_27--)
        cout << i_27 << " * " << i_27 << " = " << i_27 * i_27 << endl;
    // Необязательно указывать все три выражения в определении цикла, мы можем одно или даже все из них опустить:
    // for(; i < 10;)

    // вложенные циклы / двойные циклы (вывод таблицы умножения)
    for (int i_28 = 1; i_28 < 10; i_28++)
        {
            for (int i_29 = 1; i_29 < 10; i_29++)
            {
                std::cout << i_28 * i_29 << "\t";
            }
            std::cout << std::endl;
        }

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 17. Цикл DO");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
// Цикл do - цикл с ПОСТУСЛОВИЕМ
    /*
    do
        {
            инструкции
        }
    while(условие);
    */

    int i_30 = 5;
    do
    {
        std::cout << "i_30" << '=' << i_30 << std::endl;
        i_30--;
    }
    while(i_30 > 0);

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("Задание № 18. Операторы continue и break");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

// Операторы "continue" и "break"
    // Иногда возникает необходимость выйти из цикла до его завершения

    int i_31 = 1;
    for ( ; ;)
    {
        std::cout << i_31 << "*" << i_31 << "=" << i_31*i_31 << "\n";
        i_31++;
        if (i_31 > 9) break;
    }

// оператор continue производит переход к следующей итерации

int summ_1 = 0;
for (int i_32=0; i_32<10; i_32++)
{
    if (i_32 % 2 == 0) continue;
    summ_1 +=i_32;
    std::cout << "i_32 = " << i_32 << "\n";
}
std::cout << "summ_1 = " << summ_1 << std::endl; // 25

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 19. Ссылки (reference)");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";

// Ссылки (reference)
    // После установления ссылки мы можем через нее манипулировать самим объектом, на который она ссылается:

int number_1 = 5;
int &refNumber_1 = number_1;
cout << refNumber_1 << endl;;
refNumber_1 = 25;
cout << number_1 << endl;

    // ссылки на константы

const int number_2 = 6;
const int &refNumber_2 = number_2;
cout << refNumber_2 << endl;
    // refNumber_2 = 20;       изменять значение по ссылке нельзя

    // константная ссылка может указывать и на обычную переменную

int number_3 = 7;
const int &refNumber_3 = number_3;
cout << refNumber_3 << endl;
    // refNumber_3 = 20;        изменять значение по ссылке на константу нельзя
    // но мы можем изменить саму переменную
number_3 = 27;
cout << refNumber_3 << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 20. Массивы");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";

// Массивы

    //  определим массив из 4 чисел
int m_1[4]; // массив из неопределенных чисел
int m_2[4] = {1, 2, 3, 4}; // Значения в фигурных скобках - инициализаторы

    // неявное задание массива
int m_3[] = {1, 2, 3, 4, 5, 6};

    // символьные массивы
char m_4[] = {'h','e','l','l','o'};
char m_5[] = "world";
    // во втором случае массив m_5 будет иметь не 5 элементов, а 6, поскольку при инициализации строкой в символьный массив автоматически добавляется нулевой символ '\0'.

    // После определения массива мы можем обратиться к его отдельным элементам по индексу
    // нумерация начинается с нуля
int first_number = m_4[0];
cout << first_number << endl; // 'h'
    m_4[0] = 'H';
cout << m_4 << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 21. Перебор массивов");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
// Перебор массивов
    // Используя циклы, можно пробежаться по всему массиву и через индексы обратиться к его элементам:

int size = sizeof(m_3)/sizeof(m_3[0]);
for(int i_32 = 0; i_32 < size; i_32++)
    cout << m_3[i_32] << endl;
    /*
    с помощью выражения sizeof(m_3) находим длину всего массива в байтах,
    а с помощью выражения sizeof(m_3[0]) - длину одного элемента в байтах.
    Разделив два значения, можно получить количество элементов в массиве
     */

    // существует еще одна форма цикла for, которая предназначена специально для работа с коллекциями, в том числе с массивами

    /* for(тип переменная : коллекция)
        {
            инструкции;
        }
    */

for(char symbol_1 : m_4)
    cout << symbol_1 << endl;
    // При переборе массива каждый перебираемый элемент будет помещаться в переменную number,
    // значение которой в цикле выводится на консоль.

    // Если тип объектов в массиве неизвестен, то можно использовать спецификатор auto для определения типа:
for(auto symbol_2 : m_5)
    cout << symbol_2 << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 22. Многомерные массивы");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
// Многомерные массивы
    // Элементы таких массивов сами в свою очередь являются массивами, в которых также элементы могут быть массивами.

    // двухмерный массив чисел
    // Такой массив состоит из трех элементов, при этом каждый элемент представляет массив из двух элементов
int m_2d[3][2] = { {1, 2}, {4, 5}, {7, 8} };
cout << m_2d[1][0] << endl;
m_2d[1][0] = 155;       // изменение элемента
cout << m_2d[1][0] << endl;

// Переберем двухмерный массив:
const int ROW = 3, COL = 3;
int numbers[ROW][COL] = { {1, 2,3 }, {4 ,5 ,6}, {7 ,8 ,9} };
for(int i_33 = 0; i_33 < ROW; i_33++)
{
    for(int i_34 = 0; i_34 < COL; i_34++)
    {
        cout << numbers[i_33][i_34] << "\t";
    }
    cout << endl;
}

    //  Другая форма цикла for:
for(auto &subnumbers : numbers)
{
    for(int number : subnumbers)
    {
        cout << number << "\t";
    }
    cout << endl;
}

    /*
    Для перебора массивов, которые входят в массив, применяются ссылки.
    То есть во внешнем цикле for(auto &subnumbers : numbers) &subnumbers представляет ссылку
    на подмассив в массиве. Во внутреннем цикле for(int number : subnumbers) из каждого подмассива
    в subnumbers получаем отдельные его элементы в переменную number и выводим ее значение на консоль.
    */

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 23. Строки");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";

// Строки
std::string morning = "Good morning, C++!";
std::cout << morning << "\n";
/*
    Тип string определен в стандартной библиотеке и при его использовании
    надо указывать пространство имен std.
    Можно использовать выражение using, чтобы не указывать префикс std:
    using std::string;
    СТРОКА 317
*/

// Для инициализации строк можно использовать различные способы:

string s1;                 // пустая строка
string s2 = "Good";       // Good
string s3("morning");      // morning
string s4(5, '!');     // !!!!!
string s5 = s2;            // Good

cout << s1 << "\n";
cout << s2 << "\n";
cout << s3 << "\n";
cout << s4 << "\n";
cout << s5 << "\n";

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 24. Конкатенация строк");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // можно объединять строки с помощью стандартной операции сложения
string STR = "<<" + s2 + ">>" + " + " + "<<" + s3 + ">> = " + s2 + " " + s3;     // Good morning
cout << STR << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 25. Сравнение строк");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // Оператор "==" возвращает true, если все символы обеих строк равны

bool result_1 = s2 == s3;         // false
     result_1 = s2 == "morning";  // false
     result_1 = s2 == "Good";     // true
    // При этом символы должны совпадать в том числе по регистру

    // Операция "!=" возвращает true, если две строки не совпадают
bool result_2 = s2 != s3;         // true
     result_2 = s2 != "Good";     // true
     result_2 = s2 != "good";     // false


    /*

    Остальные базовые операции сравнения <, <=, >, >= сравнивают строки в зависимости
    от регистра и алфавитного порядка символов.
    Например, строка "b" условно больше строки "a", так как символ b по алфавиту идет
    после символа a. А строка "a" больше строки "A".
    Если первые символы строки равны, то сравниваются последующие символы

    */

s3.replace( 0, 1, 1, 'M' );     // замена (изменение) первого символа в строке
bool result_3 = s2 < s3;        // false
cout << s2 << " > " << s3 << " " << result_3 << " (true)" << endl;
    // символ "G" меньше символа "M", так в алфавите G стоит раньше M

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 26. Размер строки");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // С помощью метода size() можно узнать размер строки, то есть из скольких символов она состоит

cout << "Длина строки STR составляет" << " " << STR.size() << " " << "символов" << endl; //

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 27. Чтение строки с консоли");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // Для считывания введенной строки с консоли можно использовать объект std::cin:
string NAME;
cout << "Введите ваше Имя: ";
cin >> NAME;
cout << "Ваше Имя, кажется, " << NAME << " ?" << endl;
    // кириллица не поддерживается!!

    /*
    Однако если при данном способе ввода строка будет содержать подстроки, разделенные пробелом,
    то std::cin будет использовать только первую подстроку:
    "NAME SURNAME" --> "NAME"
    */

    // НЕ РАБОТАЕТ!!
    // Чтобы считать всю строку, применяется метод getline():

string FIO;
cout << "Введите ваши ФИО: ";
std::getline(std::cin, FIO);
cout << "Ваши данные, кажется, " << FIO << " ?" << endl;
    // НЕ РАБОТАЕТ!!

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 28. Получение и изменение символов строки");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
char c_1 = s2[1];       // G
s2[0] = 'M';
cout << s2 << endl;     // Mood


// Функции
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("Задание № 29. Определение и объявление функций");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";


SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Cyan));
printf("Bye World!");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

return 0; // выходим из функции
} // конец функции
