#include <Arduino.h>
#include "Queue.h"
#include <Adafruit_ImageReader.h>

struct State {
  int x;
  int y;
  State initial(const Adafruit_Image&);
  bool goal(const Adafruit_Image&);
  bool operator==(const State& s) {
    if (x == s.x && y == s.y) {
      return true;
    }
    else {
      return false;
    }
  }
  bool operator<(const State& s) const{
    return x < s.x || (x == s.x && y == s.y);
  }
};

State breadth_first_search(Adafruit_Image&);
State previousRow(State);
State nextRow(State);
State previousColumn(State);
State nextColumn(State);

void setup() {
  // put your setup code here, to run once:
  Queue path;
}

void loop() {
  // put your main code here, to run repeatedly:
}