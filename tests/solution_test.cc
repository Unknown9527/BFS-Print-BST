#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;

// test the print directly

TEST(Test1, Test1) {
  BST m;
  m.push(8);
  m.push(3);
  m.push(10);
  m.push(1);
  m.push(6);
  m.push(14);
  m.push(4);
  m.push(7);
  m.push(13);
  m.print();

  vector<int> result0 = {8,3,10,1,6,14,4,7,13};

  EXPECT_EQ(m.print(), result0);
}

TEST(TEST2, TEST2) {
  BST b;
  b.push(3); 
  b.push(2); 
  b.push(15); 
  b.push(5); 
  b.push(4); 
  b.push(45); 
  b.print();
  //            3
  //        2       15
  //              5    45
  //             4
  vector<int> result2 = {3,2,15,5,45,4};
  EXPECT_EQ(b.print(), result2);

}




