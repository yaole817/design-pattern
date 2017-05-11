package pers.yaole.dp;

public class Stereo {
	private String s;
	
	public Stereo(String s){
		this.s = s;
	}
	
	public void on(){
		System.out.println(s + "Stereo is On");
	}
	
	public void setCD(){
		System.out.println(s + "CD is set");
	}
	
	public void setVolume(int v){
		System.out.println(s + "Volume is " + v);
	}
}
