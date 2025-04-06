#include <iostream>
#include <cstring>
#include <stdexcept>
#include <utility>

class SimpleString{
    private:
        size_t m_max_size;
        char *m_buffer;
        size_t m_length;

    public:
        SimpleString();
        
        explicit SimpleString(size_t max_size);
        
        ~SimpleString();

        SimpleString(const SimpleString &rhs) noexcept;
        SimpleString& operator=(const SimpleString &rhs) noexcept;

        SimpleString(SimpleString &&rhs) noexcept;
        SimpleString& operator=(SimpleString &&rhs) noexcept;

        void print(const char *tag) const{
            std::cout << tag << ": " << m_buffer << '\n';
        }

        bool append_line(const char *x);        
};

SimpleString::SimpleString() : m_max_size{256},
      m_buffer{new char[256]},
      m_length{}{}

SimpleString::SimpleString(size_t max_size) : m_max_size{max_size},
      m_length{}{

    if (max_size == 0) throw std::runtime_error{ "Max size must be at least 1." };

    m_buffer = new char[max_size];
    m_buffer[0] = '\0';
}

SimpleString::~SimpleString()
{delete[] m_buffer;}

SimpleString::SimpleString(const SimpleString &rhs) noexcept : m_max_size{rhs.m_max_size},
      m_buffer{new char[rhs.m_max_size]},
      m_length{rhs.m_length}{
    std::strncpy(m_buffer, rhs.m_buffer, m_max_size);
}

SimpleString& SimpleString::operator=(const SimpleString &rhs) noexcept{

    if (this == &rhs) return *this;
    
    delete[] m_buffer;
    m_buffer = new char[rhs.m_max_size];
    m_max_size = rhs.m_max_size;
    m_length = rhs.m_length;
    
    std::strncpy(m_buffer, rhs.m_buffer, m_max_size);
    
    return *this;
}


SimpleString::SimpleString(SimpleString &&rhs) noexcept : m_max_size{rhs.m_max_size},
      m_buffer{rhs.m_buffer},
      m_length{rhs.m_length}{
    rhs.m_buffer = nullptr;
    rhs.m_max_size = 0;
    rhs.m_length = 0;
}

 SimpleString& SimpleString::operator=(SimpleString &&rhs) noexcept{

    if (this == &rhs) return *this;
    
    delete[] m_buffer;
    m_buffer = rhs.m_buffer;
    m_max_size = rhs.m_max_size;
    m_length = rhs.m_length;
    
    rhs.m_buffer = nullptr;
    rhs.m_length = 0;
    rhs.m_max_size = 0;
    
    return *this;
}

bool SimpleString::append_line(const char *x){

    const auto x_len = strlen(x);
    
    if (x_len + m_length + 2 > m_max_size) return false;
    
    std::strncpy(m_buffer + m_length, x, m_max_size - m_length);
    m_length += x_len;
    m_buffer[m_length++] = '\n';
    m_buffer[m_length] = 0;
    
    return true;
}

int main(){
    try{
        SimpleString a{50};
        a.append_line("Hello, world!");

        SimpleString b{50};
        b.append_line("Hello, world?");

        a.print("a ");
        b.print("b ");

        b = a;

        a.print("a ");
        b.print("b ");
    }
    catch(const std::exception &e){
        std::cerr << "exception: " << e.what() << '\n';
        return 1;
    }
    catch(...){
        std::cerr << "unknown exception caught\n";
        return 2;
    }

    return 0;
}