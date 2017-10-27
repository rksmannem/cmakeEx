#ifndef __MD_SCS_INC_CALC_H__
#define __MD_SCS_INC_CALC_H__

class calc{
	public:
		calc() = default;
		~calc() = default;
		calc(const calc&) = default;
		calc& operator=(const calc&) = default;

		int add(int x, int y);
		int sub(int x, int y);
		int mul(int x, int y);
};


#endif
