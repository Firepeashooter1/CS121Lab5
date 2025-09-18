#ifndef Horse_H_EXIST
#define Horse_H_EXIST

class Horse {
	private:
		int position;
		int id;
		int trackLength;

	public:
		Horse();

		void init(int id, int trackLength);
		void advnace();
		void printLane();
		void isWinner();
};//End class def
