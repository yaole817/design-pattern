package pers.yaole.dp;

public class MenuTestDrive {
	public static void main(String args[]){
		PancakeHouseMenu pancakeHouseMenu = new PancakeHouseMenu();
		DinerMenu dinerMenu  = new DinerMenu();
		
		Waitress waritess = new Waitress(pancakeHouseMenu,dinerMenu);
		waritess.printMenu();
	}
}
