#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int n = 0;
    while (n != -2) {
        std::cin >> n;
        if (n != -1) {
            vec.push_back(n);
            for (int i = vec.size() - 1; i >= 0; --i) {
                int maxind = 0;
                for (int j = 0; j <= i; ++j) {
                    if (vec[j] > vec[maxind])
                        maxind = j;
                }
                int temp = vec[i];
                vec[i] = vec[maxind];
                vec[maxind] = temp;
            }
        } else {
            if (n == -1 && vec.size() >= 5) {
                std::cout << vec[4] << std::endl;
            } else
                std::cout << "Err" << std::endl;;
        }
        for (int i = 0; i < vec.size(); ++i) {
            std::cout << vec[i] << " ";
        }
        std::cout << std::endl;
    }
}
