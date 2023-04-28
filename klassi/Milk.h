


	public CondimentDecorator
{
private:
	Beverage * beverage;

public:
	Milk(Beverage*);
	string getDescription();
	double cost();
};