template <typename T>
class ArrayIterator
{
    T* elem;
    int count;
    int index;
public:
    ArrayIterator(T* _e, int _count, int _index) : elem(_e), count(_count), index(_index) { }
    bool operator!=(const ArrayIterator<T>& obj) { return index != obj.index; }
    ArrayIterator& operator++() { index++; return *this; }
    T operator*() { return elem[index]; }
};
template <typename T>
class Array
{
    T elem[10];
    int count;
public:
    Array() : count(0) { }
    void operator+= (const T& i) {
        if (count >= 10)
            throw except10();
        elem[count++] = i;
    }
    T& operator[](int index) {
        if (index < 0)
            throw exceptIndexOutOfRange(index, count);
        if (index >= count)
            throw exceptIndexOutOfRange(index, count);
        return elem[index];
    }
    int GetCount() { return count; }

    //T* begin() { return &elem[0]; }
    //T* end() { return &elem[count]; }
    ArrayIterator<T> begin() { return ArrayIterator<T>(elem, count, 0); }
    ArrayIterator<T> end() { return ArrayIterator<T>(elem, count, count); }
};

int main()
{
    Array<int> a;
    try
    {
        for (int tr = 0; tr < 5; tr++)
            a += tr * 10;
        std::cout << "Elemente:" << a.GetCount() << std::endl;
        for (int tr = 0; tr < a.GetCount(); tr++)
            std::cout << "   Elem[" << tr << "] = " << a[tr] << std::endl;
        for (auto value : a)
            std::cout << value << ",";
        /*
        auto p = a.begin();
        while (p != a.end())
        {
            value = (*p);
            // insert code
            std::cout << value << ",";
            // end insert code
            p++;
        }

        */
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        delete[] e.what();
    }
    return 0;