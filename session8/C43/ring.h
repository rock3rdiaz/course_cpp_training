#include <iostream>

using namespace std;

template<typename T>
class ring {
    private:
        int m_size;
        int m_pos;
        T *m_values;
    public:
        class iterator;
    public:
        ring(int size) : m_pos(0), m_size(size), m_values(NULL) {
            m_values = new T[size];
        }
        ~ring(){
            delete [] m_values;
        }
        int size() {
            return m_size;
        }
        void add(const T &value) {
            m_values[m_pos] = value;
            m_pos++;
            if(m_pos == m_size)
                m_pos = 0;
        }
        T &get(int pos) {
            return m_values[pos];
        }
};

template<typename T>
class ring<T>::iterator {
    public:
        void print() {
            cout << "hi from iterator: " << T() << endl;
        }
};

