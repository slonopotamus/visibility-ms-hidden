#pragma once

class Klass
{
    // Doesn't link without visibility attribute:
    // In function `Klass::GetInstance()':
    // app.cpp:(.text._ZN5Klass11GetInstanceEv[_ZN5Klass11GetInstanceEv]+0x8): undefined reference to `Klass::instance'
    __attribute__ ((visibility ("default"))) static Klass* instance;

public:
    
     __attribute__ ((visibility ("default"))) int Foo() const;

     __attribute__ ((visibility ("default"))) static Klass* GetInstance()
    {
        return instance;
    }
};
