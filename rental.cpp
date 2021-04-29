#include <string>
#include "Movie.cpp"

using namespace std;

class Rental : public Movie{
	private:
		string clientName;
		int startDate, endDate;
	public:
		//getter and setter for Title attribute
		void setClientName(string myClientName){
			clientName = myClientName;
		}
		string getClientName(){
			return clientName;
		}
		//getter and setter for startDate attribute
		void setStartDate(int myStartDate){
			startDate = myStartDate;
		}
		int getStartDate(){
			return startDate;
		}
		//getter and setter for endDate attribute
		void setEndDate(int myEndDate){
			endDate = myEndDate;
		}
		int getEndDate(){
			return endDate;
		}
};
