#pragma config(Sensor, S1,     lightSensor,    sensorLightActive)
#pragma config(Motor,  motorA,          leftMotor,     tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,    tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true){
		if(SensorValue(lightSensor) > 50){
			motor[rightMotor] = 0;
			motor[leftMotor] = 50;
		}
		else{
			motor[rightMotor] = 50;
			motor[leftMotor] = 0;
		}
	}


}
