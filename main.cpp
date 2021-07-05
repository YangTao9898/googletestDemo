#include <iostream>
#include "src/util/operate.h"

int main() {
    operate f1;
    int result = f1.twoSum(1, 2);
    std::cout << "result: " << result << std::endl;
    return 0;
}
