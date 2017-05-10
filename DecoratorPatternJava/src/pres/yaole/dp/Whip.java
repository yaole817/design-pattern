package pres.yaole.dp;

public class Whip extends CondimentDecorator {
	
	Beverage beverage;
	
	public Whip(Beverage beverage){
		this.beverage = beverage;
		
	}
	
	@Override
	public String getDescription() {
		// TODO Auto-generated method stub
		return beverage.getDescription()+", Whip";
	}

	@Override
	public double cost() {
		// TODO Auto-generated method stub
		return 0.30+beverage.cost();
	}

}
