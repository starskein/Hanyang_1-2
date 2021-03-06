#include "clocks.h"
#include <iostream>
using namespace std;

Clock::Clock(int hour,int minute,int second,double driftPerSecond)
	:_clockTime(hour,minute,second,1),_driftPerSecond(driftPerSecond),_totalDrift(0){}

void Clock::reset(){
	_clockTime.reset();
	return;
}
void Clock::tick(){
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
	return;
}

NaturalClock::NaturalClock(int hour,int minute,int second, double driftPerSecond)
	:Clock(hour,minute,second,driftPerSecond){}
MechanicalClock::MechanicalClock(int hour,int minute, int second, double driftPerSecond)
	:Clock(hour,minute,second,driftPerSecond){}
DigitalClock::DigitalClock(int hour,int minute, int second, double driftPerSecond)
        :Clock(hour,minute,second,driftPerSecond){}
QuantumClock::QuantumClock(int hour,int minute, int second, double driftPerSecond)
        :Clock(hour,minute,second,driftPerSecond){}
SundialClock::SundialClock(int hour,int minute, int second)
        :NaturalClock(hour,minute,second,0.0){}
void SundialClock::displayTime(){
	cout << "SundialClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
	return;
}

CuckooClock::CuckooClock(int hour,int minute, int second)
        :MechanicalClock(hour,minute,second,0.000694444){}

void CuckooClock::displayTime(){
	cout << "CuckooClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
	return;
}

GranFatherClock::GranFatherClock(int hour,int minute, int second)
        :MechanicalClock(hour,minute,second,0.000347222){}

void GranFatherClock::displayTime(){
	cout << "GranFatherClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
	return;
}
WristClock::WristClock(int hour, int minute, int second)
	: DigitalClock(hour, minute, second, 0.000034722) {}
void WristClock::displayTime(){
	cout <<"WristClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
	return;
}
AtomicClock::AtomicClock(int hour,int minute, int second)
        :QuantumClock(hour,minute,second,0.0){}
void AtomicClock::displayTime(){
	cout <<"AtomicClock ";
        _clockTime.display();
        cout << ", total drift: " << _totalDrift << endl;
        return;
}

