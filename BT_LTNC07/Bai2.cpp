#include <iostream>
#include <string>

int main() {
    char chars[] = {'a', 'b', 'c', 'd'};
    int n = sizeof(chars);

    std::cout << "Cac chuoi 3 ky tu co the duoc tao thanh tu tap {'a', 'b', 'c', 'd'}:" << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                std::string str(1, chars[i]);
                str += chars[j];
                str += chars[k];
                std::cout << str << std::endl;
            }
        }
    }

    return 0;
}
