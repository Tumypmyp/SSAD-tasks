#include <iostream>
#include "SingletonLoad.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    SingletonLoad* Load;
    Load->GetInstance()->SetFilename("file1");
    std::cout << Load->GetInstance()->GetFilename() << " - filename\n";

    SingletonLoad* Load2;
    std::cout << Load2->GetInstance()->GetFilename() << " - last filename\n";

    Load2->GetInstance()->SetFilename("file222222");
    std::cout << Load2->GetInstance()->GetFilename() << " - new filename\n";

    return 0;
}
