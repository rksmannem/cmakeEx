#ifndef __MD_SCS_INC_STACK_H__
#define __MD_SCS_INC_STACK_H__

class Stack{
public:
    Stack(int size = 0);
    ~Stack();

    Stack(const Stack&);
    Stack& operator=(const Stack&);

    int& operator[](const int indx);
    const int& operator[](const int indx) const;

    size_t getSize() const;
    bool isEmpty() const;
    bool isFull() const;

    /*stack Operations*/
    void push(int val);
    int top();
    int pop();


    friend std::ostream& operator<<(std::ostream&, const Stack&);

private:
    int m_Size;
    int *m_Container;
    int m_Top;
};

#endif