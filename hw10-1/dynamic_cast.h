#include <iostream>

class B{
	public:
		virtual ~B();
};
class C:public B{
	public:
		void test_C();
};
class D:public B{
	public:
		void test_D();
};

