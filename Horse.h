#ifndef Horse_H_EXISTS
#define Horse_H_EXISTS

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
