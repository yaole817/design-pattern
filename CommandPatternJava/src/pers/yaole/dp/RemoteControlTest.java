package pers.yaole.dp;

public class RemoteControlTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		RemoteControl remoteControl = new RemoteControl();
		
		Light livingRoomLight = new Light("Living Romm");
		Light kitchenLight = new Light("Kitchen");
		Stereo stereo = new Stereo("Living Room");
		
		LightOffCommand livingRoomLightOff = new LightOffCommand(livingRoomLight);
		LightOffCommand kitchenLightOff = new LightOffCommand(kitchenLight);
		
		remoteControl.setCommand(0, livingRoomLightOff, livingRoomLightOff);
		remoteControl.setCommand(1, kitchenLightOff, kitchenLightOff);
		
		System.out.println(remoteControl);
	}

}
