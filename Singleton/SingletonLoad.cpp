//
// Created by Tumypmyp on 28.09.2021.
//

#include "SingletonLoad.h"

SingletonLoad* SingletonLoad::instance = nullptr;


SingletonLoad::SingletonLoad() {
    filename = "no file";
}

SingletonLoad* SingletonLoad::GetInstance() {
    if (instance == nullptr) {
        instance = new SingletonLoad();
    }
    return instance;
}

void SingletonLoad::SetFilename(std::string filename_) {
    filename = filename_;
}

std::string SingletonLoad::GetFilename() {
    return filename;
}

