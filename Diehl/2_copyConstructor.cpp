class MyClass
{
private:
    int *data;

public:
    MyClass(int value)
    {
        this->data = new int(value);
    }
    // shallow copy is created by the default copy constructor.
    // creates a Deep Copy if the copy constructor is user defined.
    // Below is a deep copy constructor.
    MyClass(const MyClass &obj)
    {
        this->data = new int(*obj.data);
    }
    ~MyClass()
    {
        delete this->data;
    }
};

int main()
{
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> g++ -o .\2_copyConstructor.exe .\2_copyConstructor.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl>
