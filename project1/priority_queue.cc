#include "priority_queue.h"

template <>
templatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
templatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool templatePriorityQueue<int>::empty() const{
        return priority_queue_.empty();
}

template <>
int templatePriorityQueue<int>::size() {
        return priority_queue_.size();
}

template <>
const int& templatePriorityQueue<int>::top() const{
        return priority_queue_.top();
}

template <>
void templatePriorityQueue<int>::pop(){
        priority_queue_.pop();
}

template <>
void templatePriorityQueue<int>::push(const int& val){
        priority_queue_.push(val);
}
