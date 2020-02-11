#include <iostream>
#include <iomanip>
#include <limits>

#define FW_TYPE 20
#define FW_SIZE 10
#define FW_MIN_V 30

template <typename T>
void print_row(const char* type_name, size_t size, T min_v, T max_v)
{
    std::cout << std::setw(FW_TYPE) << type_name
              << std::setw(FW_SIZE) << size
              << std::setw(FW_MIN_V) << min_v
              << max_v
              << std::endl;
}

int main() {
    std::cout << std::setw(FW_TYPE) << std::left << "TYPE"
              << std::setw(FW_SIZE) << "SIZE"
              << std::setw(FW_MIN_V) << "MIN"
              << "MAX"
              << std::endl;

    print_row("bool", sizeof(bool), std::numeric_limits<bool>::min(), std::numeric_limits<bool>::max());
    print_row("char", sizeof(char), (signed)std::numeric_limits<char>::min(), (signed)std::numeric_limits<char>::max());
    print_row("unsigned char", sizeof(unsigned char), (unsigned)std::numeric_limits<unsigned char>::min(), (unsigned)std::numeric_limits<unsigned char>::max());
    print_row("wchar_t", sizeof(wchar_t), std::numeric_limits<wchar_t>::min(), std::numeric_limits<wchar_t>::max());
    print_row("char16_t", sizeof(char16_t), std::numeric_limits<char16_t>::min(), std::numeric_limits<char16_t>::max());
    print_row("char32_t", sizeof(char32_t), std::numeric_limits<char32_t>::min(), std::numeric_limits<char32_t>::max());
    print_row("short", sizeof(short), std::numeric_limits<short>::min(), std::numeric_limits<short>::max());
    print_row("unsigned short", sizeof(unsigned short), std::numeric_limits<unsigned short>::min(), std::numeric_limits<unsigned short>::max());
    print_row("int", sizeof(int), std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
    print_row("unsigned int", sizeof(unsigned int), std::numeric_limits<unsigned int>::min(), std::numeric_limits<unsigned int>::max());
    print_row("long", sizeof(long), std::numeric_limits<long>::min(), std::numeric_limits<long>::max());
    print_row("unsigned long", sizeof(unsigned long), std::numeric_limits<unsigned long>::min(), std::numeric_limits<unsigned long>::max());
    print_row("long long", sizeof(long long), std::numeric_limits<long long>::min(), std::numeric_limits<long long>::max());
    print_row("unsigned long long", sizeof(unsigned long long), std::numeric_limits<unsigned long long>::min(), std::numeric_limits<unsigned long long>::max());
    print_row("float", sizeof(float), std::numeric_limits<float>::min(), std::numeric_limits<float>::max());
    print_row("double", sizeof(double), std::numeric_limits<double>::min(), std::numeric_limits<double>::max());
    print_row("long double", sizeof(long double), std::numeric_limits<long double>::min(), std::numeric_limits<long double>::max());

    std::cout << "\nPress ANY enter button to exit...";
    std::cin.get();

    return 0;
}
