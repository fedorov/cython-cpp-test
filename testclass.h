#ifndef TESTCLASS_H
#define TESTCLASS_H

class TestClass {
    public:

        int x, y;

        TestClass();

        virtual ~TestClass();

        inline int Multiply(int a, int b){
            return a*b;
        }

        inline bool IsPositive(int a){ return a>0;}
};

#endif
