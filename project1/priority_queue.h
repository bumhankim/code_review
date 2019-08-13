#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> priority_queue_;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};
