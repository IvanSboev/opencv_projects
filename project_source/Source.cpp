/*
#include <iostream>        // ���������� ������������ ���� iostream
int main()                  // ���������� ������� main
{                               // ������ �������
    setlocale(LC_ALL, "");      // ������� ��������� ������������� ��������
    std::cout <<"������ ���!";  // ������� ������ �� �������
    std::cout << "Bye World";
    return 0;                   // ������� �� �������
}                               // ����� �������
*/




#include <iostream>     // ���������� ������������ ���� iostream
#include <stdio.h>
#include <Windows.h>    // ��������� ����� ��������� ����
#include <string>       // ��� �������� ����� � C++ ����������� ��� string.

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

int x = 1;                          // ����������� ���������� ��� ������� main (�� ��������� �������� ����� ���������� - 0)
int main()                          // ���������� ������� main. � ������� ����������� ��� ������ (int, float, double � �.�.). ���� () ��� (void) - ��� ������ �� ������
{                                   // ������ �������
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // ���������� ����������� ���������� ������������ ������
    setlocale(LC_ALL, "");          // ������� ��������� ������������� ��������

    // ��������� ������ ���� �� ��������� ��������. ���� ������� - ������

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 1. ����� ������ �� �������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    std::cout << "������ ���!" << "\n";     // ������� ������ �� �������


    // ������������� ���� ������
   /*
   short           a = -10;
    unsigned short  b = 10;
    int             c = -30;
    unsigned int    d = 60;
    long            e = -170;
    unsigned long   f = 45;
    long long       g = 89;
    */

    // ���� ����� � ��������� ������ ���� ������� �����
    /*
    float           h = -10.45;
    double          i = 0.00105;
    long double     j = 30.890045;
    */

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 2. ������������� ����������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    int age = 27;           // ������������� ����������
    int year = 1993;

    // int age;
    // age = 27;            // ����������� ���������� ������ ������� main

    std::cout << "������� = " << age << " ���" << "\n";
    std::cout << "���������� " << "X = " << x << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 3. ����������� ����������-�������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    char A = 'A';       // ����������� ���������� ����������� ����
    char age_b = 66;        // 66 - ��� ������� 'B' � ������� �������� ASCII
    wchar_t B = 'B';

    std::cout << "������� A (��� char) " << A << "\n";
    std::cout << "������� B (��� wchar) " << B << "\n";     // ����� std::cout ��� ���������� wchar_t ������ ������� ����� �������� ��� �������� ���

    std::wcout << A << " (char)" << ' ' << B << " (wchar)" << "\n";

    std::cout << (char)B << '\n';    // �������� ���������� � ���� char
    //std::wcout << "�������� A � B (��� char � wchar) " << B << '\n';  // ����� ������������ �����������

    std::cout << "������ ������ � ������, ������� �������� ���������� " << "age = "  << sizeof(age) << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 4. �������������� �����");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    int i_1 = 'B';        // ������ 'B' ����� ������������� ����������������� � ����� - ��� ������� � ������� ASCII 66
    char word = 66;     // ��� 66 � ���������� ���� ������� ������ 'B'
    std::cout << i_1 << " in ASCII is " << word << "\n";

    // ���������� ���� bool �������� false, ���� �������� ����� 0. �� ���� ��������� ������� ���������� �������� true.
    bool b_1 = 1;     // ��������� - true
    bool b_2 = 3.4;   // ��������� - true
    bool b_3 = 'g';   // ��������� - true
    bool b_4 = 0;     // ��������� - false

    int i_2 = true;       // ��������� - 1
    double d_1 = false;   // ��������� - 0

    int i_3 = 3.45;        // ��������� - 3
    int i_4 = 7.21;        // ��������� - 7

    float a = 35005;                // ��������� - 35005
    double b = 3500500000033;       // ��������� - 3.5005e+012

    // ��� ���������� �������� -1 ���������� ���� unsigned char ������� 256 - |-1/256| = 255
    unsigned char uc_1 = -1;           // ��������� - 255

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 5. ����������� ���������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    const int y = 22;
    const int x = y;
    const float Pi = 3.1415;
    std::cout << "��������� Y = " << y << "\n";
    std::cout << "��������� X � Y ����� 22" << "\n";
    std::cout << "����� �� ����� " << Pi << "\n" ;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 6. �������� ��������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    // �������� �������� (�������� � ����� ����������)
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

    // �������� ��������� ������� �� �������������� �������:
    int i_8 = year % age;
    std::cout << "������� �� �������������� ������� " << i_8 << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 7. ������� �������������� ��������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    // ������� �������������� ��������, ������� ������������ ��� ����� ������: ++ (���������) � -- (���������)
    int i_9 = ++age;        // ���������� ���������
    std::cout << "������� ����� 1 ��� = " << i_9 << "\n";
    int i_10 = i_9++;      // ����������� ���������
    std::cout << "������� ����� 2 ���� (" << i_9 << ") ����� ������, ��� ����� 1 ��� ("  << i_10 << ")" << "\n";
    std::cout << "age = " << age << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 8. �������� ���������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    bool b_5 = i_9 == age;          // false
    bool b_6 = i_10 == age;         // true
    std::cout << b_5 << ' ' << b_6 << "\n";

    bool b_7 = i_9 >= i_10;  // true
    bool b_8 = i_9 != i_10;
    std::cout << b_7 << ' ' << b_8 << "\n";

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 9. ���������� ��������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    // ! (�������� ���������)
    bool b_9 = true;
    bool b_10 = !b_9;
    std::cout << "��������� " << b_9 << " ���� " << b_10 << "\n";

    // && (����������, ���������� ���������)
    bool b_11 = true;
    bool b_12 = false;
    std::cout << (b_11 && b_12) << ' ' << (b_11 && true) << ' ' << (b_12 && false) << "\n";     // 0 1 0

    // || (����������, ���������� ��������)
    std::cout << (b_11 || b_12) << ' ' << (b_11 || true) << ' ' << (b_12 || false) << "\n";     // 1 1 0

    bool b_13 = 0 > 5;              // false
    bool b_14 = 0 < 7;              // true
    bool b_15 = 10 > 13 && 5 < 14;      // false
    bool b_16 = b_13 && b_14 || true;    // true
    std::cout << b_13 << ' ' << b_14 << ' ' << b_15 << ' ' << b_16 << "\n";     // 0 1 0 1

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 10. ��������� ��������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    // �������� ������ - �������� � �������������� ���������� � �������� �������
    int i_11 = 2 << 2;           // 10 �� ��� �������� ����� = 1000 - � ���������� ������� 8
    int i_12 = 16 >> 3;          // 10000 �� ��� ������� ������ = 10 - � ���������� ������� 2

    // ����������� ��������
    int i_13 = 5 | 2;          // 101 | 010 = 111  - 7     ����������� ����������
    int i_14 = 6 & 2;          // 110 & 010 = 10  - 2      ����������� ���������� (���� � ������ �������������)
    int i_15 = 5 ^ 2;          // 101 ^ 010 = 111 - 7      ����������� ����������� ���
    int i_16 = ~9;             // -10                      ����������� ��������� ��� ��������

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 11. �������� ������������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    int i_17, i_18, i_19, i_20;
    i_17 = i_18 = i_19 = 34;

    i_20 = i_17 + i_18 + i_19;      // 102
    std::cout << "i_20 = " << i_20 << "\n";

    // += : ������������ ����� ��������.
    i_17 += i_20;                   // 34 + 102 = 136 = i_17
    std::cout << "i_17 = " << i_17 << "\n";

    // -=: ������������ ����� ���������
    i_18 -= i_17;                   // -102
    std::cout << "i_18 = " << i_18 << "\n";

    // *=: ������������ ����� ���������
    i_19 *= i_17;                   // 4624
    std::cout << "i_19 = " << i_19 << "\n";

    // /= : ������������ ����� �������
    i_20 /= i_17;                   // 0.75 ����������� �� 0
    std::cout << "i_20 = " << i_20 << "\n";

    // %=: ������������ ����� ������� �� ������
    i_17 %= age;                        // ������� �� ������� 136 �� 28 (age) ����� 24
    std::cout << "i_17 = " << i_17 << "\n";

    /*

    <<= : ������������ ����� ������ �������� �����
    >>= : ������������ ����� ������ �������� ������
    &= : ������������ ����� ����������� ����������
    |= : ������������ ����� ����������� ����������
    ^= : ������������ ����� �������� ������������ ���

    */

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 12. ����� � �������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    // ��� ������ �� ������� ����������� �������� <<.
    // ���� �������� �������� ��� ��������.
    // ����� ������� ������������ ������ ���� ostream, � ������ ������ ������ cout.
    // � ������ ������� - ��������, ������� ���� ������� �� �������.

    // "\n" - ������� �� ����� ������
    // "\t" - ���������
    // �������� std::endl �������� ������� �� ����� ������ � ����� ������

    int Tom_age = 33;
    double Tom_weight = 81.23;
    std::cout << "Name: " << "Tom" << "\n";
    std::cout << "Age: " << Tom_age << std::endl;
    std::cout << "Weight: " << Tom_weight << std::endl;

    // ���� � �������
    // ��� ���������� � ������� ������ ����������� �������� ����� >>

    std::cout << "Input age: ";
 //   std::cin >> Tom_age;            // ��� integer
    std::cout << "Input weight: ";
//    std::cin >> Tom_weight;         // ��� double
    // std::cin >> age >> weight; // ����� �� ������� ��������� ������ � ��������� ����������
    // ����� ����� ������ �� �������� ���� ����� ������ ������ � ����� ������� ��������� ��������.
    std::cout << "Tom age: " << Tom_age << "\t Tom weight: " << Tom_weight << std::endl;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 13. ������������ ���� � using");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

    /*
    ������� "std::" ���������, ��� ������� cout, cin, endl ���������� � ������������� ���� std.
    � ���� ������� ��������� :: ������������ �������� ������� ��������� (scope operator),
    ������� ��������� �������, � ����� ����������� ���� ��������� ������.

    �������� "using" ��������� ������ � ��������� ������� �� ��������� ����������� ����

                                using ������������_����::������
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
    printf("������� � 14. �������� �����������");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
    // ����������� if ��������� ���������� �������, � ���� ��� �������, ��������� ���� ����������

    /*
        if (�������)
        {
            ����������;
        }
    */
    // � �������� ������� �������������� �������� ���������, ������� ���������� true ��� false.

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
    ������� ���� ���������� �� ��� ��������� �������������� ��������, � ������� ������.
    ��������, � ������ ���� ����� ��������� ��� �������: ���������� x ����� ���� ������ 60, ������ 60 � ����� 60.
    ��� �������� �������������� ������� �� ����� ������� ��������� else if:
    */

    // � ������ ������ �� �������� ��� ����� �������� ������� � ���������
    // ���� � ����� if ��� else ��� else-if ���������� ��������� ������ ���� ����������, �� �������� ������ ����� ��������:
    if(age > Tom_age)
            std::cout << "My age is greater than Tom age \n";
    else if (age < Tom_age)
            std::cout << "My age is less than Tom age \n";
    else
            std::cout << "My age is equal Tom age \n";

    // ����������� switch

    /*
        switch(���������)
    {
        case ���������_1: ����������_1;
        case ���������_2: ����������_2;

        default: ����������;
    }
    */

    // ����� ��������� ����� switch � ������� ���� ������������ ���������.
    // �������� ����� ��������� ��������������� ������������ �� ���������� ����� ��������� �ase.
    // � ���� ���������� ����� �������, �� ����� ����������� ������������ ���� �ase.

    // � ����� ����������� switch ����� ������ ���� default.
    // �� ������������ � ����������� � ��� ������, ���� �������� ����� switch �� ������������� �� ������ �� ���������� case.

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
    // ����� �������� ���������� ����������� ������ case/default, � ����� ������� ����� �������� �������� break.


// ��������� ��������
    // ��������� �������� "?:" ��������� ��������� ����������� ���������� �������� ����������� if � ����� ��������� �����:

    //  [������ ������� - �������] ? [������ �������] : [������ �������]

    /*
    �������� ���������� ����� ��� ��������.
    � ����������� �� ������� ��������� �������� ���������� ������ ��� ������ �������: ���� ������� ����� true
    (�� ���� �������), �� ������������ ������ �������; ���� ������� ����� false (�� ���� �����), �� ������.
    */

    int i_23 = 5;
    int i_24 = 3;
    char sign = '-';
        std::cout << "������� ���� ��������: ";
 //       std::cin >> sign;
            int result = sign=='+' ? i_23 + i_24 : i_23 - i_24;
        std::cout << "���������: " << result << "\n";

        /*
        � ������ ������ ������������ ���� ����� ��������.
        ����� ����������� ��������� �������� �������� ���������� result.
        � ���� ���������� sign �������� ���� "+", �� result ����� ����� ������� �������� - (x+y) = 8.
        ����� result ����� ����� �������� �������� = 2.
        */

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 15. ���� WHILE");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

// ���� while - ���� � ������������
// ���� while ��������� ��������� ���, ���� ��� ������� �������, �� ���� ���������� true.

    /*
    while(�������)
    {
        // ����������� �������� (����� ����������)
    }
    */

    // ������� �������� ����� �� 1 �� 9
    int i_25 = 1;
    while(i_25 < 10)
    {
        cout << i_25 << " * " << i_25 << " = " << i_25 * i_25 << endl;
        i_25++;
    }
    // ���� ���� �������� ���� ����������, �� �������� ������ ����� ��������:
    int i_26 = 0;
    while(++i_26 < 10)
        cout << i_26 << " * " << i_26 << " = " << i_26 * i_26 << endl;

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 16. ���� FOR");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

// ���� for
    /*
    for (���������_1; ���������_2; ���������_3)
        {
        // ���� �����
        }
    ���������_1 ����������� ���� ��� ��� ������ ���������� ����� � ������������ ��������� ��������� �������,
    ��� �������, ��� ������������� ��������� - ����������� ����������, ������� ������������ ��� �������� �� ������.
    ���������_2 ������������ �������, ��� ���������� �������� ����������� ����.
    ��� �������, � �������� ������� ������������ �������� ���������, � ���� ��� ���������� ��������� ��������
    (�� ���� ������� �������), �� ����������� ���� �����, � ����� ����������� ���������_3.
    ���������_3 ������ ��������� ���������� �����, ������� ����� ���������� ���������� ��������� ����� �� �������.
    */

    // ��������� ��������� �� ������ ��������� ����� � ������� ����� for
    for(int i_27 = 10; i_27 > 0; i_27--)
        cout << i_27 << " * " << i_27 << " = " << i_27 * i_27 << endl;
    // ������������� ��������� ��� ��� ��������� � ����������� �����, �� ����� ���� ��� ���� ��� �� ��� ��������:
    // for(; i < 10;)

    // ��������� ����� / ������� ����� (����� ������� ���������)
    for (int i_28 = 1; i_28 < 10; i_28++)
        {
            for (int i_29 = 1; i_29 < 10; i_29++)
            {
                std::cout << i_28 * i_29 << "\t";
            }
            std::cout << std::endl;
        }

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 17. ���� DO");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";
// ���� do - ���� � ������������
    /*
    do
        {
            ����������
        }
    while(�������);
    */

    int i_30 = 5;
    do
    {
        std::cout << "i_30" << '=' << i_30 << std::endl;
        i_30--;
    }
    while(i_30 > 0);

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
    printf("������� � 18. ��������� continue � break");
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
    std::cout << "\n";

// ��������� "continue" � "break"
    // ������ ��������� ������������� ����� �� ����� �� ��� ����������

    int i_31 = 1;
    for ( ; ;)
    {
        std::cout << i_31 << "*" << i_31 << "=" << i_31*i_31 << "\n";
        i_31++;
        if (i_31 > 9) break;
    }

// �������� continue ���������� ������� � ��������� ��������

int summ_1 = 0;
for (int i_32=0; i_32<10; i_32++)
{
    if (i_32 % 2 == 0) continue;
    summ_1 +=i_32;
    std::cout << "i_32 = " << i_32 << "\n";
}
std::cout << "summ_1 = " << summ_1 << std::endl; // 25

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 19. ������ (reference)");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";

// ������ (reference)
    // ����� ������������ ������ �� ����� ����� ��� �������������� ����� ��������, �� ������� ��� ���������:

int number_1 = 5;
int &refNumber_1 = number_1;
cout << refNumber_1 << endl;;
refNumber_1 = 25;
cout << number_1 << endl;

    // ������ �� ���������

const int number_2 = 6;
const int &refNumber_2 = number_2;
cout << refNumber_2 << endl;
    // refNumber_2 = 20;       �������� �������� �� ������ ������

    // ����������� ������ ����� ��������� � �� ������� ����������

int number_3 = 7;
const int &refNumber_3 = number_3;
cout << refNumber_3 << endl;
    // refNumber_3 = 20;        �������� �������� �� ������ �� ��������� ������
    // �� �� ����� �������� ���� ����������
number_3 = 27;
cout << refNumber_3 << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 20. �������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";

// �������

    //  ��������� ������ �� 4 �����
int m_1[4]; // ������ �� �������������� �����
int m_2[4] = {1, 2, 3, 4}; // �������� � �������� ������� - ��������������

    // ������� ������� �������
int m_3[] = {1, 2, 3, 4, 5, 6};

    // ���������� �������
char m_4[] = {'h','e','l','l','o'};
char m_5[] = "world";
    // �� ������ ������ ������ m_5 ����� ����� �� 5 ���������, � 6, ��������� ��� ������������� ������� � ���������� ������ ������������� ����������� ������� ������ '\0'.

    // ����� ����������� ������� �� ����� ���������� � ��� ��������� ��������� �� �������
    // ��������� ���������� � ����
int first_number = m_4[0];
cout << first_number << endl; // 'h'
    m_4[0] = 'H';
cout << m_4 << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 21. ������� ��������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
// ������� ��������
    // ��������� �����, ����� ����������� �� ����� ������� � ����� ������� ���������� � ��� ���������:

int size = sizeof(m_3)/sizeof(m_3[0]);
for(int i_32 = 0; i_32 < size; i_32++)
    cout << m_3[i_32] << endl;
    /*
    � ������� ��������� sizeof(m_3) ������� ����� ����� ������� � ������,
    � � ������� ��������� sizeof(m_3[0]) - ����� ������ �������� � ������.
    �������� ��� ��������, ����� �������� ���������� ��������� � �������
     */

    // ���������� ��� ���� ����� ����� for, ������� ������������� ���������� ��� ������ � �����������, � ��� ����� � ���������

    /* for(��� ���������� : ���������)
        {
            ����������;
        }
    */

for(char symbol_1 : m_4)
    cout << symbol_1 << endl;
    // ��� �������� ������� ������ ������������ ������� ����� ���������� � ���������� number,
    // �������� ������� � ����� ��������� �� �������.

    // ���� ��� �������� � ������� ����������, �� ����� ������������ ������������ auto ��� ����������� ����:
for(auto symbol_2 : m_5)
    cout << symbol_2 << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 22. ����������� �������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
// ����������� �������
    // �������� ����� �������� ���� � ���� ������� �������� ���������, � ������� ����� �������� ����� ���� ���������.

    // ���������� ������ �����
    // ����� ������ ������� �� ���� ���������, ��� ���� ������ ������� ������������ ������ �� ���� ���������
int m_2d[3][2] = { {1, 2}, {4, 5}, {7, 8} };
cout << m_2d[1][0] << endl;
m_2d[1][0] = 155;       // ��������� ��������
cout << m_2d[1][0] << endl;

// ��������� ���������� ������:
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

    //  ������ ����� ����� for:
for(auto &subnumbers : numbers)
{
    for(int number : subnumbers)
    {
        cout << number << "\t";
    }
    cout << endl;
}

    /*
    ��� �������� ��������, ������� ������ � ������, ����������� ������.
    �� ���� �� ������� ����� for(auto &subnumbers : numbers) &subnumbers ������������ ������
    �� ��������� � �������. �� ���������� ����� for(int number : subnumbers) �� ������� ����������
    � subnumbers �������� ��������� ��� �������� � ���������� number � ������� �� �������� �� �������.
    */

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 23. ������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";

// ������
std::string morning = "Good morning, C++!";
std::cout << morning << "\n";
/*
    ��� string ��������� � ����������� ���������� � ��� ��� �������������
    ���� ��������� ������������ ���� std.
    ����� ������������ ��������� using, ����� �� ��������� ������� std:
    using std::string;
    ������ 317
*/

// ��� ������������� ����� ����� ������������ ��������� �������:

string s1;                 // ������ ������
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
printf("������� � 24. ������������ �����");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // ����� ���������� ������ � ������� ����������� �������� ��������
string STR = "<<" + s2 + ">>" + " + " + "<<" + s3 + ">> = " + s2 + " " + s3;     // Good morning
cout << STR << endl;

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 25. ��������� �����");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // �������� "==" ���������� true, ���� ��� ������� ����� ����� �����

bool result_1 = s2 == s3;         // false
     result_1 = s2 == "morning";  // false
     result_1 = s2 == "Good";     // true
    // ��� ���� ������� ������ ��������� � ��� ����� �� ��������

    // �������� "!=" ���������� true, ���� ��� ������ �� ���������
bool result_2 = s2 != s3;         // true
     result_2 = s2 != "Good";     // true
     result_2 = s2 != "good";     // false


    /*

    ��������� ������� �������� ��������� <, <=, >, >= ���������� ������ � �����������
    �� �������� � ����������� ������� ��������.
    ��������, ������ "b" ������� ������ ������ "a", ��� ��� ������ b �� �������� ����
    ����� ������� a. � ������ "a" ������ ������ "A".
    ���� ������ ������� ������ �����, �� ������������ ����������� �������

    */

s3.replace( 0, 1, 1, 'M' );     // ������ (���������) ������� ������� � ������
bool result_3 = s2 < s3;        // false
cout << s2 << " > " << s3 << " " << result_3 << " (true)" << endl;
    // ������ "G" ������ ������� "M", ��� � �������� G ����� ������ M

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 26. ������ ������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // � ������� ������ size() ����� ������ ������ ������, �� ���� �� �������� �������� ��� �������

cout << "����� ������ STR ����������" << " " << STR.size() << " " << "��������" << endl; //

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 27. ������ ������ � �������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
    // ��� ���������� ��������� ������ � ������� ����� ������������ ������ std::cin:
string NAME;
cout << "������� ���� ���: ";
cin >> NAME;
cout << "���� ���, �������, " << NAME << " ?" << endl;
    // ��������� �� ��������������!!

    /*
    ������ ���� ��� ������ ������� ����� ������ ����� ��������� ���������, ����������� ��������,
    �� std::cin ����� ������������ ������ ������ ���������:
    "NAME SURNAME" --> "NAME"
    */

    // �� ��������!!
    // ����� ������� ��� ������, ����������� ����� getline():

string FIO;
cout << "������� ���� ���: ";
std::getline(std::cin, FIO);
cout << "���� ������, �������, " << FIO << " ?" << endl;
    // �� ��������!!

SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 28. ��������� � ��������� �������� ������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";
char c_1 = s2[1];       // G
s2[0] = 'M';
cout << s2 << endl;     // Mood


// �������
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
printf("������� � 29. ����������� � ���������� �������");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
std::cout << "\n";


SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Cyan));
printf("Bye World!");
SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

return 0; // ������� �� �������
} // ����� �������
