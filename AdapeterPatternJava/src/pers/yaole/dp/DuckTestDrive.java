package pers.yaole.dp;

public class DuckTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MallardDuck duck = new MallardDuck();
		
		WildTurkey turkey = new WildTurkey();
		Duck turkeyAdapter = new TurkeyAdapter(turkey);
		
		System.out.println("This Turkey says ...");
		turkey.gobble();
		turkey.fly();
		
		System.out.println("\nThe Duck says ...");
		testDuck(duck);
		
		System.out.println("\nThe TurkeyAdapter says ...");
		testDuck(turkeyAdapter);
	}
	
	static void testDuck(Duck duck){
		duck.quack();
		duck.fly();
	}

}
