//
// Created by Tumypmyp on 28.09.2021.
//
#include <string>

#ifndef SINGLETON_SINGLETONLOAD_H
#define SINGLETON_SINGLETONLOAD_H


class SingletonLoad {
private:
    static SingletonLoad *instance;
    std::string filename = "";
    SingletonLoad();
public:
    static SingletonLoad* GetInstance();
    void SetFilename(std::string filename);
    std::string GetFilename();



};


#endif //SINGLETON_SINGLETONLOAD_H
