# CS121Lab5

## UML Diagram

```mermaid
classDiagram
    class Horse {
        -int position
        +Horse()
        +void advance()
        +int getPosition() const
        +bool hasWon(int trackLength) const
    }

    class Race {
        -Horse horses[NUM_HORSES]
        +Race()
        +void run()
        +void display() const
        +bool checkWinners() const
        +void update()
        -const static int NUM_HORSES = 5
        -const static int TRACK_LENGTH = 10
    }

    Race "1" --> "NUM_HORSES" Horse

