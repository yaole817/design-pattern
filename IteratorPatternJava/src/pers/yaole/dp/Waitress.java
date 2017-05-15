package pers.yaole.dp;

public class Waitress {
	PancakeHouseMenu pancakeHouseMenu;
	DinerMenu dinerMenu;
	
	public Waitress(PancakeHouseMenu pancakeHouseMenu, DinerMenu dinerMenu){
		this.pancakeHouseMenu = pancakeHouseMenu;
		this.dinerMenu = dinerMenu;
	}
	
	public void printMenu(){
		Iterator pancakeIterator = pancakeHouseMenu.creatIterator();
		Iterator dinerIterator  = dinerMenu.creatIterator();
		System.out.println("Menu\n -----\n NREAKFASE");
		printMenu(pancakeIterator);
		System.out.println("\n LUNCH");
		printMenu(dinerIterator);

	}
	
	private void printMenu(Iterator iterator){
		while(iterator.hasNext()){
			MenuItem menuItem = (MenuItem) iterator.next();
			System.out.print(menuItem.getName() + ", ");
			System.out.print(menuItem.getPrice()+"--");
			System.out.println(menuItem.getDescription());
			
		}
	}
}
