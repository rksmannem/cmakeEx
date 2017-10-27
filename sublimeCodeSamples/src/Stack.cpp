#include "Log.h"
#include "Stack.h"
#include <algorithm>
#include <cassert>

#define LOG_TAG "Stack"

Stack::Stack(int sz)
    :m_Size(sz), 
     m_Container(new int[m_Size]),
     m_Top(-1)
{
    std::fill(m_Container, m_Container + m_Size, -999);
}

Stack::~Stack(){
    delete [] m_Container;
    m_Container = nullptr;
    m_Size = 0;
}

Stack::Stack(const Stack& other)
    :Stack(other.m_Size)
{
    std::copy(m_Container, m_Container + m_Size, other.m_Container);
}


int& Stack::operator[](const int indx){
    /*Check the indx value is the [0, m_Size) Range*/
    assert(indx >=0 && indx < m_Size); 

    return m_Container[indx];
}

const int& Stack::operator[](const int indx) const{
    /*Check the indx value is the [0, m_Size) Range*/
    assert(indx >=0 && indx < m_Size);

    return m_Container[indx];
}

size_t Stack::getSize() const{
    return m_Top + 1;
}

bool Stack::isEmpty() const{
    return (m_Top < 0);
}

bool Stack::isFull() const {
    //LOG_INFO("[m_Top: %d, m_Size = %d\n]", m_Top, m_Size);
    return (m_Top >= m_Size-1);
}
void Stack::push(int val)
{
    /*check for overflow*/
    if(!isFull())
    {
       // LOG_INFO("pushing element: %d", val);
        m_Container[++m_Top] = val;
    }
    else{
        //LOG_INFO("Pushing element: %d Is Failed", val);
        //LOG_ERROR("****OverFlow:Stack is Full****\n");
        exit(-1);
    }
}

int Stack::top()
{
    if(!isEmpty())
    {
        return m_Container[m_Top];
    }
    return -1;
}

int Stack::pop()
{
    if(!isEmpty())
    {        
        int x = m_Container[m_Top--];
       // LOG_INFO("poping element: %d", x);
        return x;
    }
    else{
        //LOG_ERROR("UnderFlow:***Stack is Empty****\n");
        exit(-1);
    }
}

std::ostream& operator<<(std::ostream& os, const Stack& st){
    if(st.isEmpty())
    {
        //LOG_ERROR("Empty Stack: Elements cannot be Printed\n");
        exit(-1);
    }


    os << "STACK Elements: [";
    for(unsigned int i = 0; i < st.getSize(); ++i)
    {
        os << st[i] << " ";
    }
    os <<"]"<<std::endl;

    return os;
}

/*
int main()
{
    Stack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    std::cout<<s1;
    std::cout<<"Stack Top = "<<s1.top()<<std::endl;
    s1.push(60);

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

    std::cout<<s1;
    
    return 0;
}
*/