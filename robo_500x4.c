#pragma config(Sensor, S2, us, sensorSONAR)
#pragma config(Motor, motorA, leftmotor, tmotorNXT, PIDControl, encoder)
#pragma config(Motor, motorB, rightmotor, tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard !!*//
void ClearEncoder(){
nMotorEncoder[leftMotor] = 0;
nMotorEncoder[rightMotor] = 0;
}
void Back(){
clearencoder();
motor[leftMotor] = -50;
motor[rightMotor] = -50;
}
void StopRobot(){
motor[leftMotor] = 0;
motor[rightMotor] = 0;
wait10Msec(100);
}
void Fwd(){
clearencoder();
motor[leftMotor] = 50;
motor[rightMotor] = 50;
}
void srt(int x){
while(nMotorEncoder(leftmotor)<x && nMotorEncoder(rightmotor<x)){
motor[leftMotor] = 50;
motor[rightMotor] = 50;}
}
void Right(){
ClearEncoder();
while(nMotorEncoder[leftMotor] < 455){
motor[leftMotor] = 50;
motor[rightMotor] = 0;
}
}
task main()
{
int count = 0;
while(count < 16)
{
while(SensorValue(us)>15)
{
Fwd();
}
if(SensorValue(us)<15)
{
stoprobot();
//srt(200);
back();
wait10Msec(50);
Right();
count++;
}
//clearencoder();
}
}
