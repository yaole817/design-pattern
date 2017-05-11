package pers.yaole.dp;

public class Light {
	private String s;
	
	public Light(String s){
		this.s = s;
	}
	
	public void on(){
		System.out.println(s + "Light is On");
	}
	
	public void off(){
		System.out.println(s + "Light is Off");
	}
}
