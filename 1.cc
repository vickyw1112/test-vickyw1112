typedef int TYPE;
void g(double);
template<typename T>
class B;

template<typename T>
class A: public B<T> {
    int count;
    void f1(){
        TYPE t = 0;
        g(1);
    }
    void f2(){
        ::TYPE t1 = 0;
        ::g(1);
        typename B<T>::TYPE t2 = 0;
        this->g();
    }
};

template<typename T>
class B{
public:
    typedef T TYPE;
    void g(int);
};

class C{
public:
    void g(int);
};
template<>
class A<int>;


