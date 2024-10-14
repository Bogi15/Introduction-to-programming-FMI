// Да се напише програма, която получава 5 латински букви. Първите две от тях са главни и 
// образуват множеството A, където A съдържа всички букви между въпросните две букви, 
// включително самите тях. Вторите две букви са малки и образуват множеството B, където 
// B съдържа всички букви между тях, включително самите тях.
#include <iostream>
int main() {
    char a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;

    std::cout << std::boolalpha << (a < e < b || c < e < d) << std::endl;
    std::cout << std::boolalpha << (a < e < b && c < e < d) << std::endl;
    std::cout << std::boolalpha << (a < e < b && !(c < e < d)) << std::endl;
    std::cout << std::boolalpha << (a < e < b && !(c < e < d) || !(a < e < b) && (c < e < d)) << std::endl;
}