#ifndef __MD_SCS_INC_PRIORITY_QUEUE_H__
#define __MD_SCS_INC_PRIORITY_QUEUE_H__


class priorityQ{
public:
    

    bool empty() const;
    size_type size() const;
    const int& top() const;

    void push(const int&);
    void pop();

private:
    

};

#endif