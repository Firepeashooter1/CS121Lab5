/*ifdef and define Horse_H
 *
 * class Horse:
 *  private:
 *   int position
 *   int id
 *   int trackLength
 *  
 *  public:
 *   Horse()
 *   void init(int id, int trackLength)
 *   void advance()
 *   void printLane()
 *   void isWinner()
 */

#ifndef Horse_H
#define Horse_H

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
};//End Horse class
