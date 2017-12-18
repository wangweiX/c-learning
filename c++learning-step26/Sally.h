//
// Created by wangwei on 17/12/2017.
//

#ifndef C_LEARNING_STEP26_SALLY_H
#define C_LEARNING_STEP26_SALLY_H


class Sally {
public:

    Sally();

    Sally(int age);

    int getAge();

    void setAge(int age);

    void printStr0();

    void printStr() const;

private:
    int age;
};


#endif //C_LEARNING_STEP26_SALLY_H
