#include "priority_queue.h"
#include <gtest/gtest.h>

// TEST(testCaseName, testName){
//   ... test body ...
// }


TEST(PriorityQueueTest,Trivial){
	templatePriorityQueue<int> exp_priority_queue;

	//Test 1 - Initalize
	ASSERT_TRUE(exp_priority_queue.empty()); // empty test

	//Test 2 - Push Datas and Top size
	exp_priority_queue.push(1);
	exp_priority_queue.push(4);
	exp_priority_queue.push(2);
	exp_priority_queue.push(3);
	exp_priority_queue.push(8);
	exp_priority_queue.push(5);
	
	ASSERT_EQ(exp_priority_queue.size(),6); // Pushed 6 elements
	ASSERT_EQ(exp_priority_queue.top(),8);  // The highest pushed value is 8
	ASSERT_FALSE(exp_priority_queue.empty()); // it must not empty

	//Test 3 - pop test

	exp_priority_queue.pop();
	exp_priority_queue.pop();
	exp_priority_queue.pop();
	
	ASSERT_EQ(exp_priority_queue.top(),3);
	ASSERT_EQ(exp_priority_queue.size(),3);
	ASSERT_FALSE(exp_priority_queue.empty());

	exp_priority_queue.pop();
	exp_priority_queue.pop();
	exp_priority_queue.pop();
	
	ASSERT_TRUE(exp_priority_queue.empty());
	
	/* Fail Example - If you activate this code, Test will be fail *

	exp_priority_queue.pop();
	
	EXPECT_TRUE(exp_priority_queue.empty()); // non-Fatal Failure - not terminate this test case when result of empty method is false.
	ASSERT_EQ(exp_priority_queue.size(),0);
        /**/
	
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
