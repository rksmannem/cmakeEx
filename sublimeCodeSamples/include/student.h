#ifndef __MD_SCS_INC_STUDENT_H__
#define __MD_SCS_INC_STUDENT_H__

#include <string>

class student
{
	public:
		student() = default;
		student(std::string name, int age, int id);
		~student() = default;

		void display() const;

		void setSName(const std::string& name){
			this->sName = name;
		}

		void setSAge(int age){
			this->sAge = age;
		}

		void setSId(int sId){
			this->sId = sId;
		}

		std::string getSName() const{
			return sName;
		}

		int getSAge() const{
			return sAge;
		}

		int getSId() const{
			return sId;
		}

		friend std::ostream& operator<<(const student&, std::ostream& );

	private:
		std::string sName;
		int sAge;
		int sId;
};

#endif
